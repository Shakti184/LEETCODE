class Solution {
public:
    queue<TreeNode*>q;
    vector<vector<int>>v;
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL) return v;
        q.push(root);
        int n;
        while(!q.empty()){
            n=q.size();
            vector<int>v1;
            TreeNode*temp;
            while(n--){
                temp=q.front();
                q.pop();
                v1.push_back(temp->val);
                if(temp->left)
                    q.push(temp->left);   
                if(temp->right)
                    q.push(temp->right);
            }
                v.push_back(v1);
        }
        return v;
    }
};