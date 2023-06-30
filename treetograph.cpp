

void buildGraph(TreeNode* root,unordered_map<int,vector<int>>& graph){
        
        if(root->left!=NULL){
            graph[root->val].push_back(root->left->val);
            graph[root->left->val].push_back(root->val);
            buildGraph(root->left,graph);
        }
        if(root->right!=NULL){            
            graph[root->val].push_back(root->right->val);
            graph[root->right->val].push_back(root->val);
            buildGraph(root->right,graph);            
        }
    }


void solve(){

    unordered_map<int,vector<int>> graph;
        buildGraph(root,graph);

        for(auto it : graph){
            cout<<it.first<<" --> ";
            for(auto p : it.second){
                cout<<p<<" ";
            }
            cout<<endl;
        }
    


    
}