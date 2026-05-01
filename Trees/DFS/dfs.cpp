#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val; 
        left = nullptr;
        right = nullptr;
    }
};
void inorder(Node * root)
{
    if (root==nullptr)
    {
        return;
    }
    inorder(root->left);
    cout << root->data;
    inorder(root->right);

}

    int main()
    {
         Node * root = new Node(4);
         Node * l1 = new Node(3);
         Node * l2 = new Node(10);
         Node * r1 = new Node(2);
         Node * r2 = new Node(3);

         root -> left = l1;
         l1 -> left = l2;
         l1-> right = r1;
         r1-> right = r2;
         inorder(root);
         return 0;

    }
