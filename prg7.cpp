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
       int LengthofLL(Node* head)
       {
           Node* temp=head;
           int cnt=0;
           while(temp)
           {
               cnt+=1;
               temp=temp->next;
           }
           return cnt;
       }
       int Search(Node* head,int ele)
       {
           Node* temp=head;
           int c=0;
           while(temp)
           {
               if(temp->data==ele)
               {
                   return c;
                   
                  
               }
               temp=temp->next;
               c=c+1;
           }
           return -1;
       }
       
 
 int main(){
     vector<int>arr={1,2,3,4};
     Node* head=convertArr(arr);
     int x=Search(head,2);
     if(x==-1)
     {
         cout<<"element not found";
     }
     else
     {
         cout<<"element found at"<<x;
     }
     
 }