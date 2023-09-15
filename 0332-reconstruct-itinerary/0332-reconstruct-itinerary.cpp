#include <memory_resource>

#pragma GCC target("popcnt,lzcnt")
#pragma GCC optimize("O3")

struct DFS{
    struct LexicographicalCompare {
        bool operator()(unsigned lhs, unsigned rhs) {
    #define CMP(n) if (((lhs>>8*n)&0xFF)>((rhs>>8*n)&0xFF)) return true; else if (((lhs>>8*n)&0xFF)<((rhs>>8*n)&0xFF)) return false;
            CMP(0);
            CMP(1);
            CMP(2);
            return false;
        }
    };

    DFS(vector<vector<string>>& tickets, std::pmr::monotonic_buffer_resource * transient) : map(transient) {        
        for(const auto &route: tickets) {
            map[*(unsigned*)(route[0].data())].push(*(unsigned*)(route[1].data()));
        }
        ans.resize(tickets.size() + 1);
        idx = tickets.size();
    }
    std::vector<std::string> ans;
    std::pmr::unordered_map<unsigned, std::priority_queue<unsigned, std::pmr::vector<unsigned>, LexicographicalCompare>> map;
    unsigned idx;

    DFS& operator()(unsigned loc){
        if(auto it = map.find(loc); it != map.end()) {
            auto& sorted_paths = it->second;
            while(!sorted_paths.empty())
            {
                unsigned target=sorted_paths.top();
                sorted_paths.pop();
                (*this)(target);
            }
        }
        ans[idx--].assign((const char*)&loc, 3);
        return *this;
    }
};

class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets)  {
        std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);

        std::array<std::byte, 1024 * 8> buffer;
        std::pmr::monotonic_buffer_resource mbr{buffer.data(), buffer.size()};
        return DFS(tickets, &mbr)('KFJ').ans; 
    }
};