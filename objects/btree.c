#include <stdio.h>

struct node
{
    int data;
    struct node *leftChild;
    struct node *rightChild;
};

int main()
{
    struct node *rootNode = NULL;
    rootNode->data = 5;
    printf("%i", rootNode->data);
}
