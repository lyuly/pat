#include <iostream>
using namespace std;

struct node{
    int data; // 数据域
    node *lchild; // 左孩子
    node *rchild; // 右孩子
};

node* newnode(int v){
    node* t = new node; // 申请一个结点空间
    t->data = v; // 权值为v
    t->lchild = t->rchild = NULL; // 左右子树置为空
    return t;
}

// 查找结点
void search(node* root, int x, int newdata){
    if(root == NULL) return;
    if(root->data == x) // 找到数据域为x的结点，修改为newdata
        root->data = newdata;
    search(root -> lchild, x, newdata);
    search(root -> rchild, x, newdata);
}

// 插入结点
void insert(node* &root, int x){
    if(root == NULL){
        root = newnode(x);
        return;
    }
    insert(root->lchild, x);
    insert(root->rchild, x);
    
}

// 创建二叉树
node* create(int *data, int n){
    node *root = NULL;
    for(int i = 0; i < n; i++)
        insert(root, data[i]);
    return root;
}

// 递归先序遍历
void preorder(node* root){
    if(root == NULL) return;
    preorder(root->lchild);
    printf("%d ",root->data);
    preorder(root->rchild);
}

int main()
{
    int a[5]={0,1,2,3,4};
    node *t = create(a,5);
    preorder(t);   
    return 0;
}