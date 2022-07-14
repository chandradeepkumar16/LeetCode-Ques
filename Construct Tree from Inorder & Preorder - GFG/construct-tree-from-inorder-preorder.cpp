// { Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int ind=0;
    
    Node* helper(int *in , int *pre , int s , int end){
        if(s>end){
            return NULL;
        }
        
        Node* node = new Node(pre[ind++]);
        int pos;
        
        for(int i=s;i<=end;i++){
            if(in[i]==node->data){
                pos=i;
                break;
            }
        }
        
        node->left = helper(in , pre , s , pos-1);
        node->right = helper( in , pre , pos+1 , end);
        return node;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        return helper(in , pre , 0 , n-1);
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends