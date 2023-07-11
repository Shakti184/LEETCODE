/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<int,vector<int>>mp;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            TreeNode * temp=q.front();
            q.pop();
            if(temp->left){
                mp[temp->val].push_back(temp->left->val);
                mp[temp->left->val].push_back(temp->val);
                q.push(temp->left);
            }
            if(temp->right){
                mp[temp->val].push_back(temp->right->val);
                mp[temp->right->val].push_back(temp->val);
                q.push(temp->right);
            }
        }


        queue<int>qq;
        qq.push(target->val);
        vector<int>ans;
        if(k==0) return {target->val};
        vector<int>vis(510,0);
        while(!qq.empty()){
             int n=qq.size();
             while(n--){
                 int temp=qq.front();
                 vis[temp]=1;
               
                 qq.pop();
                 for(auto &i:mp[temp]){
                     if(vis[i]==0)
                        qq.push(i);
                 }
             }
            k--;
            if(k==0){
                while(!qq.empty()){
                    ans.push_back(qq.front());
                    qq.pop();
                }
                return ans;
            }
        }
        return {};
    }
};