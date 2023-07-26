class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        if (hour <= dist.size() - 1) return -1;
        int low = 1, high = 1e07;
        while (low < high) {
            double mid = low + (high - low) / 2;
            double total = 0;
            std::for_each(dist.begin(), --dist.end(), [&](int val) {
                total += std::ceil(val / mid);
            });
            total += dist.back() / mid;
            if (total <= hour) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return high;
    }
};