#include<iostream>
using namespace std;
struct node
{
        int coef;
        int pow;
        struct node* next;
};
class poly
{
        public:
                struct node* s;
               poly();
               void insertBegin(int,int);
               void insertEnd(int,int);
               void add(poly);
               void display();
};
poly::poly()
{
        s=NULL;
}
void poly::insertBegin(int x,int y)
{
        struct node* temp,*curr;
        temp=new node;
        temp->coef=x;
        temp->pow=y;
        temp->next=NULL;
        
       if(s==NULL)
        {
            s=temp;
        }
        else
        {
            temp->next=s;
            s=temp;
        }
}
void poly::insertEnd(int x,int y)
{
   struct node *temp,*curr;
   temp=new node;
   temp->coef=x;
   temp->pow=y;
   temp->next=NULL;
while(curr->next!=NULL)
{
curr=curr->next;
}
curr->next=temp;
}
void poly::add(poly p)
{
        struct node*t1,*t2;
        poly t3;
        t1=p.s;
        t2=s;
        while(t1!=NULL &&t2!=NULL)
        {

                if(t1->pow>t2->pow)
                {
                        if(t3.s==NULL)
                              t3.insertBegin(t1->coef,t1->pow);
                        else 
                             t3.insertEnd(t1->coef,t1->pow);
                       t1=t1->next; 
                }
                else if(t1->pow<t2->pow)
                {
                      if(t3.s==NULL)
                              t3.insertBegin(t2->coef,t2->pow);
                        else 
                             t3.insertEnd(t2->coef,t2->pow);
                       t2=t2->next; 
                }
                else
                {
                        int coe=t1->coef+t2->coef;
                       if(t3.s==NULL)
                              t3.insertBegin(coe,t1->pow);
                        else 
                             t3.insertEnd(coe,t1->pow);
                       t1=t1->next; 
                       t2=t2->next;
                }
                }
        
        while(t1!=NULL)
        {
            t3.insertEnd(t1->coef,t1->pow);
            t1=t1->next;  
        }
      while(t2!=NULL)
        {
            t3.insertEnd(t2->coef,t2->pow);
            t2=t2->next; 
                
        }
   t3.display();
        
}


void poly::display()
{
        struct node* curr=s;
        while(curr!=NULL)
        {
                cout<<curr->coef<<curr->pow<<endl;
                curr=curr->next;
        }

}
int main()
{
        poly p,q,r;
        p.insertBegin(2,0);
        p.insertBegin(2,1);
        p.insertBegin(2,3);
        p.display();
        q.insertBegin(1,0);
        q.insertBegin(3,2);
        //struct node* x;
        p.add(q);
       // r.display();
return 0;
}


