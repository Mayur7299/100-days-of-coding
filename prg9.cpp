#include<bits/stdc++.h>
using namespace std;
 class Node
 { 
     public:
     int data;
     Node* next;
     public:
       Node(int data1,Node* next1)
       {
           data=data1;
           next=next1;
       }
       
        public:
       Node(int data1)
       {
           data=data1;
           next=nullptr;
           
       }
 };
       Node* convertArr(vector<int>&arr){
           Node* head=new Node(arr[0]);
           Node* mover=head;
           for(int i=1;i<arr.size();i++)
           {
               Node*temp=new Node(arr[i]);
               mover->next=temp;
               mover=temp;
           }
           return head;
       }
      Node* deltail(Node* head)
      {
        Node* temp=head;
        Node* temp2;
        while(temp)
        {
            if(temp->next->next==nullptr)
            {
                temp2=temp->next;
                temp->next=nullptr;
            }
            temp=temp->next;
        }

    delete temp2;

    return head;
      }
 
 int main(){
     vector<int>arr={1,2,3,4};
     Node* head=convertArr(arr);
     Node* temp=deltail(head);
     while(temp)
     {
         cout<<temp->data;
         temp=temp->next;
     }
     
 }