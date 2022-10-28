class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>v;
        while(!q.empty()){
            TreeNode *temp;
            int n=q.size();
            vector<int>v1;
            for(int i=0;i<n;i++){
                temp=q.front();
                q.pop();
                v1.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            v.push_back(v1);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};