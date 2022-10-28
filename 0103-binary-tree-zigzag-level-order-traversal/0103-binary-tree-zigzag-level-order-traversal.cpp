class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         if (!root) return {};
        
        queue<TreeNode*> q;
        vector<vector<int>> out;
            
        q.push(root);  
        int level = 0;
        
        while (!q.empty()) {
            
            int sz = q.size();  
            vector<int> curr(sz); 
            
            for (int i = 0; i < sz; i++) {
                
                TreeNode* tmp = q.front();
                q.pop();
                curr[i]=tmp->val;
                if (tmp->left) q.push(tmp->left);
                if (tmp->right) q.push(tmp->right);
            }
            if(level==0){
                 out.push_back(curr);
                level=1;
            }else{
                level=0;
                reverse(curr.begin(),curr.end());
                out.push_back(curr); 
            }
        }
        return out;
    }
};