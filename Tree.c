#include<stdio.h>
#include<stdlib.h>

struct node {
    int key;
    struct node *left;
    struct node *right;
};

struct node* arr[10];
int TOP=-1;

struct node *newNode(int key){
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node)) ;
    newNode->key=key;
    newNode->left=NULL;
    newNode->right =NULL;
    return newNode;
};

// Non Recursive Way
void PUSH(struct node* pushnode){
    if(TOP==9){
        printf("Overflow! ");
        exit(0);
    }
    arr[++TOP]=pushnode;
}
struct node* POP(){
    if(TOP==-1){
        exit(0);
    }
    return arr[TOP--];
}
void inorder(struct node *cnode){
    struct node *root = (struct node*)malloc(sizeof(struct node));
    root=cnode;
    while(1){
        while(cnode){
            PUSH(cnode);
            cnode=cnode->left;
        }
        if(!root->key)break;
        cnode =POP();
        printf("%d ",cnode->key);
        cnode=cnode->right;
    }
}



struct node* insert(struct node* node, int key)
{
    if (node == NULL) return newNode(key);
    if (key<node->key)
        node->left  = insert(node->left, key);
    else if(key>=node->key)
        node->right = insert(node->right, key);
    return node;
}

int main()
{
    int n,a;
    struct node *root = NULL;
    printf("Enter Size: ");
    scanf("%d",&n);
    printf("Enter Values: ");
    for(int i=0; i<n;i++){
        scanf("%d",&a);
        // Can Also Use Ternary operator
        if(i==0){
            root = insert(root,a);
        }else{

        insert(root,a);
    }}
    inorder(root);
    return 0;
}
