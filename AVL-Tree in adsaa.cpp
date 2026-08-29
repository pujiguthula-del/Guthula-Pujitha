#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    int height;
    struct Node *left, *right;
};

int max(int a, int b)
{
    return (a > b) ? a : b;
}

// Height of NULL = -1
// Height of leaf node = 0
int height(struct Node *node)
{
    if(node == NULL)
        return -1;
    return node->height;
}

struct Node* createNode(int key)
{
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node->data = key;
    node->left = node->right = NULL;
    node->height = 0;   // leaf node height
    return node;
}

// LL Rotation (Right Rotation)
struct Node* rightRotate(struct Node *y)
{
    struct Node *x = y->left;
    struct Node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;
}

// RR Rotation (Left Rotation)
struct Node* leftRotate(struct Node *x)
{
    struct Node *y = x->right;
    struct Node *T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;
}

// LR Rotation
struct Node* leftRightRotate(struct Node *z)
{
    z->left = leftRotate(z->left);
    return rightRotate(z);
}

// RL Rotation
struct Node* rightLeftRotate(struct Node *z)
{
    z->right = rightRotate(z->right);
    return leftRotate(z);
}

// Inorder Traversal
void inorder(struct Node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main()
{
    struct Node *root;

    // ---------- LL Rotation ----------
    root = createNode(30);
    root->left = createNode(20);
    root->left->left = createNode(10);

    root->height = 2;
    printf("Before LL Rotation (30,20,10): ");
    inorder(root);
    root = rightRotate(root);
    printf("\nAfter LL Rotation: ");
    inorder(root);

    // ---------- RR Rotation ----------
    root = createNode(10);
    root->right = createNode(20);
    root->right->right = createNode(30);

    root->height = 2;
    printf("\n\nBefore RR Rotation (10,20,30): ");
    inorder(root);
    root = leftRotate(root);
    printf("\nAfter RR Rotation: ");
    inorder(root);

    // ---------- LR Rotation ----------
    root = createNode(30);
    root->left = createNode(10);
    root->left->right = createNode(20);

    root->height = 2;
    printf("\n\nBefore LR Rotation (30,10,20): ");
    inorder(root);
    root = leftRightRotate(root);
    printf("\nAfter LR Rotation: ");
    inorder(root);

    // ---------- RL Rotation ----------
    root = createNode(10);
    root->right = createNode(30);
    root->right->left = createNode(20);

    root->height = 2;
    printf("\n\nBefore RL Rotation (10,30,20): ");
    inorder(root);
    root = rightLeftRotate(root);
    printf("\nAfter RL Rotation: ");
    inorder(root);

    printf("\n");
    return 0;
}
