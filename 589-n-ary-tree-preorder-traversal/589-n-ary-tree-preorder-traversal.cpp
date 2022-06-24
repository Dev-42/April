class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> res;
        stack<Node*> st;
        if (root) st.push(root);
        while (!st.empty()) {
            root = st.top(); st.pop();
            res.push_back(root->val);
            for (auto iter = root->children.rbegin(); iter != root->children.rend(); iter++) {
                if (*iter) st.push(*iter);
            }
        }
        return res;
    }
};