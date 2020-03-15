#include "sLinkList.h"
#include <iostream>
#include <cstddef>
using namespace std;



template <class elemType>
sLinkList<elemType>::sLinkList()
{
    head=new node;
    currentLength=0;
}

template <class elemType>
void sLinkList<elemType>::clear(){
node *p=head->next,*q;
head->next=NULL;
while(p!=NULL){
    q=p->next;
    delete p;
    p=q;
}
currentLength=0;
}


template <class elemType>
void sLinkList<elemType>::erase(int x,int y)
{
int cnt=0;
node *delp, *pre;
    for(pre=head;pre->next!=NULL;){
            bool flag=false;
        if(pre->next->data<=y&&pre->next->data>=x){
                delp=pre->next;
        pre->next=delp->next;
        delete delp;
        ++cnt;
        flag=true;
        }
if (flag==false) pre=pre->next;
    }
    currentLength-=cnt;
}

template <class elemType>
void sLinkList<elemType>::traverse()const{
node *p=head->next;
cout<<endl;
while (p!=NULL){
        cout<<p->data<<" ";
p=p->next;
}
cout<<endl;
}

template <class elemType>
void sLinkList<elemType>::create(){
elemType tmp;
node *p,*q=head;

    char s;

    while((s=cin.get())!='\n')
    {cin.unget();cin>>tmp;
    p=new node(tmp);
    q->next=p;
    q=p;
    currentLength++;
}
}
