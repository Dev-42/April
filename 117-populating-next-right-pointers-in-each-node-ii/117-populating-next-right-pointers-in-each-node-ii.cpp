class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL){
            return root;
        }
        
        // Store the nodes of the tree in level order traversal
        vector<vector<Node*>> store;
        int i,j;
        vector<Node*> temp;
        temp.push_back(root);
        store.push_back(temp);
        j = 0;
        while(j < store.size()){
            // Store the left and child of every node that is already stored in the previous level
            temp = store[j];
            vector<Node*> temp1;
            for(i=0;i<temp.size();i++){
                if(temp[i]->left != NULL){
                    temp1.push_back(temp[i]->left);
                }
                if(temp[i]->right != NULL){
                    temp1.push_back(temp[i]->right);
                }
            }
            if(temp1.size()!=0){
                store.push_back(temp1);
            }
            j++;
        }
        
        // Each row of 'store' will have the levels of the tree
        for(j=0;j<store.size();j++){
            temp = store[j];
            for(i=0;i<temp.size()-1;i++){
                // Point the current node's next to the next node in this vector, this is the next right node
                temp[i]->next = temp[i+1];
            }
            temp[i]->next = NULL;
        }
        
        return root;
    }
};