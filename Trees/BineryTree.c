#include <stdio.h>
#include <stdlib.h>
struct node {
  int info;
  struct node* left;
  struct node* right;
};

// Inorder traversal
void inorderTraversal(struct node* root) {
  if (root == NULL)
  return;
  inorderTraversal(root->left);
  printf("%d ", root->info);
  inorderTraversal(root->right);
}

// Preorder traversal
void preorderTraversal(struct node* root) {
  if (root == NULL)
  return;
  printf("%d ", root->info);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

// Postorder traversal
void postorderTraversal(struct node* root) {
  if (root == NULL)
  return;
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%d ", root->info);
}
struct node* insert(int data) {
  struct node* ptr = malloc(sizeof(struct node));
  ptr->info= data;
  ptr->left = NULL;
  ptr->right = NULL;
   return ptr;
}
//insert in left side data
struct node* insertLeft(struct node* root, int value) {
  root->left = insert(value);
  return (root->left);
}

// Insert in right side of data
struct node* insertRight(struct node* root, int value) {
  root->right = insert(value);
  return root->right;
}

int main() {
    struct node* root;
    root= insert(1);
    insertLeft(root, 4);
    insertRight(root, 6);
    insertLeft(root->left, 42);
    insertRight(root->left, 3);
    insertLeft(root->right, 2);
    insertRight(root->right, 33);
    insertLeft(root->left,25);
  printf("Traversal of the inserted binary tree \n");
  printf("Inorder traversal \n");
  inorderTraversal(root);

  printf("\nPreorder traversal \n");
  preorderTraversal(root);


  printf("\nPostorder traversal \n");
  postorderTraversal(root);

}

