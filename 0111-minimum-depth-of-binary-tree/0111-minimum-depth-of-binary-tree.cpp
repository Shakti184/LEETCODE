class Solution {
public:
    int sol(TreeNode *root){
        if(!root) return 0;
        queue<TreeNode*>q;
        int c=0;
        int ans=INT_MAX;
        q.push(root);
        while(!q.empty()){
            TreeNode*temp;
            int n=q.size();
            c++;
            for(int i=0;i<n;i++){
                temp=q.front();
                q.pop();
                if(temp->left==NULL&&temp->right==NULL){
                    ans=min(ans,c);
                }
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return ans;
    }
    
    int recursive(TreeNode*root){
        if(!root)
            return 0;
        if(root->left==NULL&&root->right==NULL)
            return 1;
        return 1+min(root->left?minDepth(root->left):INT_MAX,root->right?minDepth(root->right):INT_MAX);
    }
    
    int bfs(TreeNode* root){
        if(!root) return 0;
        queue<TreeNode*>q;
        q.push(root);
        int count=1;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode*temp=q.front();
                q.pop();
                if(!temp->left&&!temp->right) return count;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            count++;
        }
        return count;
    }
    
    int minDepth(TreeNode* root) {
       // return recursive(root); //solution 1
        //return bfs(root);//solution 2;
        return sol(root);
    }
};