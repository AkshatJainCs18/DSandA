#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct a{
    int x;
    struct a *next;
}node;
int main()
{
   node *head=NULL;
   node *initial=NULL;
   node *m;
   int n,k;cin>>n;
   for(int i=0;i<n;++i)
    {
      node *b=(node *)malloc(sizeof(node));
      cin>>k;
      b->x=k;
      b->next=NULL;
      if(head==NULL)head=b,initial=b;
      else { head->next=b;head=b;}
      if(i==n/2) m=b;
     }
    node *s=initial;
    node *cs,*cm,*ccm;
    while(true){
    cs=s->next;
    cm=m->next;
    ccm=m;
    s->next=m;
    s=cs;
    m->next=s;
    m=cm;
    if(m==NULL){ccm->next=NULL;break;}
     }
   s=initial;
   while(s!=NULL){cout<<s->x<<" ";s=s->next;}
}
