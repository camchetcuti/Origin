#include <iostream>
using namespace std;

#include "3-ListT.h"

ListT::ListT()
{
}

ListT::~ListT()
{}

void ListT::PutItemH(itemType item)
{
 node* tmp = new node;
 tmp->item = item;
 tmp->next = head;

 head = tmp; 
 if (length == 0)
  tail = tmp;  
 length++;
 
}

void ListT::Print() const
{
    int i = 0;
    node* cur = head;
    while (i < length){
        cout << cur -> item << endl;
        cur = cur -> next;
        i++;
    }
}

 /*
   pre: an instance of ListT exists
   post: returns true if list is empty, false otherwise
   */
bool ListT::IsEmpty() const{
       if (length == 0){
        return true;
    }
    return false;
}

/*
   pre: an instance of ListT exists
   post: returns length of the list 
   */
int ListT::GetLength() const{
   return length;
}

/*
   pre: an instance of ListT exists and is not empty
   post: Returns the contents pointed to by the head of the list 
   */
itemType ListT::GetItemH() const{
   node* cur = head;
   itemType value = cur -> item;
   return value;
}

/*
   pre: an instance of listT exists and is not empty
   post: Node pointed to by head is deleted 
   */
void ListT::DeleteItemH(){
    node* cur = head;
    head = cur -> next;
    delete cur;
    length--;
    cur = NULL;
}

/*
   pre: an instance of listT exists
   post: node containing itemIn is at the tail of the list 
   */ 
void ListT::PutItemT(const itemType itemIn){
    node* temp = new node;
    node* pre = tail;
    pre -> next = temp;
    temp -> item = itemIn;
    temp-> next = NULL;
    tail = temp;
    temp = NULL;
    length++;
}

/*
   pre: an instance of list exists and is not empty
   post: Returns the contents of the node at the tail of the list. 
   */
itemType ListT::GetItemT() const{
   node* pre = tail;
   return pre -> item;
}

/*
   pre: an instance of list exists and is not empty
   post: node at the tail of the list is deleted 
   */
void ListT::DeleteItemT(){
   node* temp = PtrTo();
   delete tail;
   tail = NULL;
   tail = temp;
   temp -> next = NULL;
   length--;
}

/*
   pre: an instance of ListT exists and is not empty
   post: returns the number of nodes in the list that store target 
   */
int ListT::FindItem(const itemType target) const{
   int i = 0;
   int num = 0;
   node* cur = head;
   while (i < length){
      if (cur -> item == target){
         num++;
      }
      cur = cur -> next;
      i++;
   }
return num;
}

  /*
   pre:  an instance of List exists and is not empty 
   post: deletes all nodes that store target.  Returns
         the number of nodes deleted 
   */
int ListT::DeleteItem(const itemType target){
   int i = 0;
   int num = 0;
   node* cur = head;
   node* pre;
   while (i < length){
      if (cur -> item == target){
         pre -> next = cur -> next;
         delete cur;
         num++;
         cur = NULL;
         cur = pre;
      }
      pre = cur;
      cur = cur -> next;
      i++;
   }
   length = length - num;
   return num;
}

/*
   Desc: invoked by DeleteItemT
   pre: length of list > 1 
   post: returns the address of the node just before the 
         node pointed to by the tail 
   */
node* ListT::PtrTo(){
   node* cur = head;
   int i = 0;
   while(i < length-2){
      cur = cur -> next;
      i++;
   }
   return cur;
}

