#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *leftChild;
    struct node *rightChild;
};

void print(struct node *node)
{
    if (node != NULL)
    {
        print(node->leftChild);
        printf("%i \n", node->data);
        print(node->rightChild);
    }
}

struct node* newNode(int value)
{
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = value;
    tmp->leftChild = NULL;
    tmp->rightChild = NULL;
    return tmp;
};

struct node* insertNode(struct node *node, int value)
{
    if (node == NULL)
    {
        return newNode(value);
    }
    if (value < node->data)
    {
        node->leftChild = insertNode(node->leftChild, value);
    }
    else if (value > node->data)
    {
        node->rightChild = insertNode(node->rightChild, value);
    }
    return node;
};

int main()
{
    struct node *rootNode = newNode(50);
    insertNode(rootNode, 25);
    insertNode(rootNode, 100);
    print(rootNode);
}
