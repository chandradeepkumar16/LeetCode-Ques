/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node* , Node*> mp;
    
    Node* cloneGraph(Node* node) {
        if(node==NULL){
            return NULL;
        }
        
        Node* first = new Node(node->val , {});
        mp[node]=first;
        
        queue<Node*> q;
        q.push(node);
        
        while(!q.empty()){
            
            Node* frontnode = q.front();
            q.pop();
            
            for(auto i:frontnode->neighbors){
                
                if(mp.find(i)==mp.end()){
                    mp[i] = new Node(i->val , {});
                    q.push(i);
                }
                mp[frontnode]->neighbors.push_back(mp[i]);
                
            }
        }
        return mp[node];
            
    }
};