#include<iostream>
#include<queue>
#include<stack>
#include<stdlib.h>
using namespace std;
int c=1;
struct node{
    int data;
    struct node* left;
    struct node* right;
}*root;


struct node * newNode(int data) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
 
    temp->data=data;
    temp->left=nullptr;
    temp->right=nullptr;
    return temp;
}

void inorder(node* root){
    stack<node*> s;
    node* cur=root;
    while(cur!=NULL||!s.empty()){
            while(cur!=NULL){
                s.push(cur);
                cur=cur->left;
            }
            cur=s.top();
            cout<<cur->data<<" ";
            cur=cur->right;
            s.pop();
    }
}
long long sumOfNodes(node* root, int k) {
     /* Don't write main().
     * Don't read input, they are passed as function arguments.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
  	if(c==k&&root->data!=-1){
        return root->data;
    }
    if(root->data==-1){
        return -1;
    }
    
    else{
     		c++;
   			return sumOfNodes(root->left,k)+sumOfNodes(root->right,k);
    	}
    
}
void printLevelOrder(struct node * root){
        if(root==nullptr)
            return;
        
        queue<node*> q;
        q.push(root);
        
        while(q.empty()==false){
            struct node* temp=q.front();
            cout<<temp->data<<" ";
            q.pop();
            if(temp->left!=nullptr)
                q.push(temp->left);
            if(temp->right!=nullptr)
                q.push(temp->right);

         }


        
}

int main(){
    struct node * root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    root->right->left=newNode(6);
    root->right->right=newNode(7);
    cout<<sumOfNodes(root,3);
    inorder(root);
}