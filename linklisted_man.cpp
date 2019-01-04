#include<stdio.h>
struct l_l{
    int val;
    l_l *ptr;
};
struct l_list{
 l_l man;
 l_l *en;
};
void create(l_list &l,int a){
    l.man.val=a;
    l.man.ptr=NULL;
    l.en=&l.man;
}
void inser(int x,l_list &l){
    l.en->ptr=new l_l;
    l.en=l.en->ptr;
    l.en->val=x;
    l.en->ptr=NULL;

}
int tvs(l_list &l,int x){


}
void query(l_list &l){
    l_l *q=&l.man;
    do{
        printf("%d ",q->val);
        q=q->ptr;
    }while(q!=NULL);
}
int main(){
    int x;
    char c[4];
    l_list ll;
    scanf("%d",&x);
    create(ll,x);
    do{
        scanf("%s %d",c,&x);
        if(c[0]=='i'||c[0]=='I') inser(x,ll);
        else if(c[0]=='q'||c[0]=='Q') query(ll);
    }while(c[0]!='S');
}


/*


*/
