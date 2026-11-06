#include <stdio.h>
#include <stdlib.h>

struct Node {
    char data;
    struct Node *left, *right;
};

struct Node* createNode(char data) {
    struct Node* newNode =
        (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

int search(char inorder[], int start, int end, char value) {
    for (int i = start; i <= end; i++) {
        if (inorder[i] == value)
            return i;
    }
    return -1;
}
struct Node* buildTree(char preorder[], char inorder[],
                       int inStart, int inEnd, int *preIndex) {

    if (inStart > inEnd)
        return NULL;

    char rootValue = preorder[*preIndex];
    (*preIndex)++;

    struct Node* root = createNode(rootValue);

    int position = search(inorder, inStart, inEnd, rootValue);

    root->left = buildTree(preorder, inorder,
                           inStart, position - 1, preIndex);

    root->right = buildTree(preorder, inorder,
                            position + 1, inEnd, preIndex);

    return root;
}
void preorder(struct Node* root) {
    if (root != NULL) {
        printf("%c ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%c ", root->data);
        inorder(root->right);
    }
}

void postorder(struct Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%c ", root->data);
    }
}

int main() {

    char preorderInput[] = {'A','B','D','E','C','F','G'};
    char inorderInput[] = {'D','B','E','A','F','C','G'};

    int n = 7;
    int preIndex = 0;

    struct Node* root = buildTree(preorderInput,
                                  inorderInput,
                                  0, n - 1,
                                  &preIndex);

    printf("Preorder: ");
    preorder(root);

    printf("\nInorder: ");
    inorder(root);

    printf("\nPostorder: ");
    postorder(root);

    return 0;
}
