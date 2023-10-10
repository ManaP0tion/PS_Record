#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    char data;
    struct Node *left;
    struct Node *right;
}Node;

Node *alloc_new_node(char value){
    Node* new_node = (Node *)malloc(sizeof(Node));
    new_node->data = value;
    new_node->left = new_node -> right = NULL;
    return new_node;
}

void insert_node(Node *node, char a, char left, char right){
    node->data = a;
        if(left != '.')
            node->left = alloc_new_node(left);
        if(right != '.')
            node->right = alloc_new_node(right);
}

Node* search_char(Node *root, char input){
    if(root != NULL){
        if(root->data == input)
            return root;
    
        else{
            Node* temp = search_char(root->left, input);
            if(temp != NULL)
                return temp;
            else
                return search_char(root->right, input);
        }
    }
    return NULL;
}


// 전위 순회
void print_preorder(Node *root){
    if(root != NULL){
        printf("%c", root->data);
        print_preorder(root->left);
        print_preorder(root->right);
    }
}

// 중위 순회
void print_inorder(Node *root){
    if(root!= NULL){
        print_inorder(root->left);
        printf("%c", root->data);
        print_inorder(root->right);
    }
}

// 후위 순회
void print_postorder(Node *root){
    if(root != NULL){
        print_postorder(root->left);
        print_postorder(root->right);
        printf("%c", root->data);
    }
}



int main(){
    int n;
    char root_data,left,right;
    Node *root = alloc_new_node('A');
    Node *temp;
    scanf("%d", &n);
    getchar();
    
    
    for(int i = 0; i<n; i++){
        
        scanf("%c %c %c", &root_data, &left, &right);
        getchar(); // 엔터문자 입력방지
        
        temp = search_char(root, root_data);

        if(temp!= NULL)
            insert_node(temp, root_data, left,right);
        else
            insert_node(root, root_data, left, right);
        
    }
    print_preorder(root);
    printf("\n");
    print_inorder(root);
    printf("\n");
    print_postorder(root);
    return 0;
}