#include<stdio.h>
struct bst
{
    int val;
    bst * left=nullptr;
    bst * right=nullptr;
};
bool comp(bst t1,bst t2)
{
    if(t1.val!=t2.val)return false;
    printf("t1.val=%d t2.val=%d\n",t1.val,t2.val);
    bool a=true,b=true;
    if(t1.left!=nullptr){
        if(t2.left==nullptr) return false;
         a=comp(*(t1.left),*(t2.left));
    }
    else if(t2.left!=nullptr) return false;
    if(!a) return false;
    if(t1.right!=nullptr){
        if(t2.right==nullptr) return false;
         b=comp(*(t1.right),*(t2.right));
    }
    else if(t2.right!=nullptr) return false;
    if(!b) return false;
    return true;

}
bool isFull(bst t1){
if(t1.left==nullptr){
    if(t1.right!=nullptr) return false;
    return true;
}
if(t1.right==nullptr) return false;
bool a=isFull(*(t1.left));
bool b=isFull(*(t1.right));
return a&&b;


}
int main()
{
    int a,b;
    bst t1,t2,*ptr;
    t1.val=2;
    t1.left=new bst;
    ptr=t1.left;
    ptr->val=5;
    t1.right=new bst;
    ptr=t1.right;
    ptr->val=3;
    ptr=t1.left;
    ptr->left=new bst;
    (ptr->left)->val=8;
    ptr->right=new bst;
    (ptr->right)->val=10;

    t2.val=2;
    t2.left=new bst;
    ptr=t2.left;
    ptr->val=5;
    t2.right=new bst;
    ptr=t2.right;
    ptr->val=3;
    ptr=t2.left;
    ptr->left=new bst;
    (ptr->left)->val=8;
    ptr->right=new bst;
    (ptr->right)->val=10;
    printf("%s\n",comp(t1,t2)?"true":"false");
    printf("%s",isFull(t2)?"true":"false");



}
