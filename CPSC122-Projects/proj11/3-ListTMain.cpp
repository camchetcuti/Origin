#include <iostream>
using namespace std;

#include "3-ListT.h"

int main()
{
 //Static list MUST REMIAN UNCOMMENTED TO POPULATE THE LIST
 cout << "Static list" << endl;
 ListT lst;
 for (int i = 0; i < 5; i++) 
   lst.PutItemH(i);
 lst.Print();
cout << endl;

 //Dynamic list MUST REMIAN UNCOMMENTED IN ORDER TO POPULATE THE LIST
 cout << "Dynamic list" << endl;
 ListT* lst1 = new ListT;
 for (int i = 0; i < 5; i++) 
   lst1 -> PutItemH(i*10);
 lst1 -> Print();
cout << endl;

// // test for PutItemT
// cout << "static test for putItemT" << endl;
// lst.PutItemT(8);
// lst.Print();

// cout << "dynamic test for putItemT" << endl;
// lst1 -> PutItemT(80);
// lst1 -> Print();

// // test for isEmpty
// cout << "static test for isEmpty (not empty)" << endl;
// cout << lst.IsEmpty() << endl;
// cout << "static test for isEmpty (empty)" << endl;
// ListT lst4;
// cout << lst4.IsEmpty() << endl;

// cout << "dynamic test for isEmpty (not empty)" << endl;
// cout << lst1 -> IsEmpty() << endl;
// cout << "dynamic test for isEmpty (empty)" << endl;
// ListT* lst2 = new ListT;
// cout << lst2 -> IsEmpty() << endl;
// delete lst2;

// // test for getLength
// cout << "static test for getLength" << endl;
// cout << lst.GetLength() << endl;

// cout << "dynamic test for putItemT" << endl;
// cout << lst1 -> GetLength() << endl;

/*
  // Test for getItemH
  cout << "GetItemH static list test:" << endl;
  cout << lst.GetItemH() << endl;
  cout << "GetItemH dynamic list test:" << endl;
  cout << lst1 -> GetItemH() << endl;
*/

// //test for deleteItemH
// cout << "static test for deleteItemH" << endl;
//  lst.Print();
//  lst.DeleteItemH();
//  cout << endl;
//  lst.Print();
//  cout << endl;
// cout << "dynamic test for deleteItemH" << endl;
//  lst1->Print();
//  lst1->DeleteItemH();
//  cout << endl;
//  lst1->Print();

/*
  // Test for find
  cout << "findItem static list test (not in list):" << endl;
  cout << lst.FindItem(14) << endl;
  cout << "findItem static list test (in list once):" << endl;
  cout << lst.FindItem(3) << endl;
  lst.PutItemH(3);
  cout << "findItem static list test (in list twice):" << endl;
  cout << lst.FindItem(3) << endl;
  cout << "findItem dynamic list test (not in list):" << endl;
  cout << lst1 -> FindItem(14) << endl;
  cout << "findItem dynamic list test (in list once):" << endl;
  cout << lst1 -> FindItem(20) << endl;
  lst1 -> PutItemH(20);
  cout << "findItem dynamic list test (in list twice):" << endl;
  cout << lst1 -> FindItem(20) << endl;
  */

  // // Test for getItemT
  // cout << "GetItemT static list test:" << endl;
  // cout << lst.GetItemT() << endl;
  // cout << "GetItemT dynamic list test:" << endl;
  // cout << lst1 -> GetItemT() << endl;

// //test for deleteItemH
// cout << "static test for deleteItemT" << endl;
//  lst.Print();
//  lst.DeleteItemT();
//  cout << endl;
//  lst.Print();
//  cout << endl;
// cout << "dynamic test for deleteItemT" << endl;
//  lst1->Print();
//  lst1->DeleteItemT();
//  cout << endl;
//  lst1->Print();

// //Test for deleteItem
// cout << "static test for deleteItem" << endl;
//  lst.PutItemT(2);
//  lst.Print();
//  cout << endl;
//  cout << lst.DeleteItem(2) << endl << endl;
//  lst.Print();
//  cout << "dynamic test for deleteItem" << endl;
//  lst1 -> PutItemT(20);
//  lst1 -> Print();
//  cout << endl;
//  cout << lst1 -> DeleteItem(20) << endl << endl;
//  lst1 -> Print();

 delete lst1;
 return 0;
}
