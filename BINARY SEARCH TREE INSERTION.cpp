//You are given a pointer to the root of a binary search tree and values to be inserted into the tree. Insert the values into their appropriate position in the binary search tree and return the root of the updated binary tree. You just have to complete the function.

//Input Format

//You are given a function,

//Node * insert (Node * root ,int data) {

//}
//Constraints

//No. of nodes in the tree  500
//Output Format

//Return the root of the binary search tree after inserting the value into the tree.

//Sample Input

//        4
 //     / \
   //   2   7
 //   / \
 //   1   3
//The value to be inserted is 6.



//CODE:- 



/*
Node is defined as 

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    Node * insert(Node * root, int data) {
        if(root == NULL)
        return new Node(data);
        if(data< root->data)
        root->left = insert(root->left,data);
        if(data > root->data)
        root->right = insert(root->right,data);
        


        return root;
    }



/*Sample Output

         4
       /   \
      2     7
     / \   /
    1   3 6
*/