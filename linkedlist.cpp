
#include<iostream>
using namespace std;

struct node
{
  int data;
  node* next;
};

class list
{
private:
  node * head;
  node* tail;
public:
  list()
  {
    head=NULL;
    tail=NULL;
  }

  void create(int val)
  {
    node* temp=new node;
    temp->data=val;
    temp->next=NULL;
    if(head==NULL)
    {
      head=temp;
      tail=temp;
    }
    else
    {
      tail->next=temp;
      tail=temp;
    }
  }

  void display()
  {
    node* temp=new node;
    temp=head;
    while(temp->next!=NULL)
    {
      cout<<temp->data<<"->"<<temp->next<<"\n";
      temp=temp->next;
    }
    cout<<temp->data<<"->"<<temp->next;
  }
}l;


int main()
{
  l.create(10);
  l.create(20);
  l.create(30);
  l.create(40);
  l.create(50);
  l.display();

}
