#include<iostream>
using namespace std;
class Node{
public:

   int data;
   Node*next;

   Node(int data)
   {
       this->data=data;
       next=NULL;
   }
} ;
Node*Takeinput()
{
     int data;
     cin >>data;
      Node*head=NULL;
      Node*tail=NULL;
      while(data!=-1)
      {
          Node* NewNode = new Node(data);
    // Node n(data);
          if(head==NULL)
          {
              head=NewNode;
              tail=NewNode;
          }
          else
          { //Node*head=NULL;
            // now we have to save the data before deltting and adding this address after crating new;
           /*Node*temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;             we can rather use to itrate to last;
            }
            temp->next= NewNode;*/
            tail->next=NewNode;
            tail=NewNode;

          }
          cin >>data;
      }
     return head;
}
void insertdata(int i , int ins , Node*head)
{
    int count=0 ;
    Node*tempp=head;
    Node*newNode= new Node(ins);
    if(i==0)
    {
         newNode->next=head;
        head=newNode;
       return;
    }
    while(tempp!=NULL && count<i-1)
    {
        tempp=tempp->next;
        count++;
    }
    if(tempp!=NULL)
        {
              Node*temp=tempp->next;
              tempp->next=newNode;
              newNode->next=temp;

        }
        return;
}
void print(Node*head)
{
    while(head!=NULL)
    {
        cout << head->data <<"->";
         head=head->next;
    }
}
int main ()
{
   /* Node n1(10);
    Node*head=&n1;// lets make a head pointer address of we can store address
    Node n2(20);
    n1.next=&n2;
    Node n3(20);
    n2.next=&n3;
    Node n4(20);
    n3.next=&n4;
    Node n5(20);
    n4.next=&n5;
   print(head);*/
    Node*head=Takeinput();

    cout << "whtether you want to insert the node in ith postion " << endl;
    int i;
    cin >> i;
    int ins;
    cin >> ins;
    insertdata(i , ins ,head);
     print(head);


}
