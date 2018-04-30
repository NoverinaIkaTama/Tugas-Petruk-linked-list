/*Tugas Petruk LingkedList :
Menambah Node Depan
Menambah Node Belakang
Hapus Node Depan
Hapus Node Belakang
Menyisipkan Node di posisi tertentu 
Misal, insertNode(3,4) menambahkan Node dengan nilai data=3, sebelum Node yang meiliki nilai data 4.
Hapus Node tertentu 
Misal hapusNode(3), artinya menghapus satu Node yang meiliki nilai data=3.*/

#include <iostream>
#include <conio.h>
#include <cstdlib>
class Node{
public:
    Node* next;
    int data;
};

using namespace std;
struct TNode{
    int data;
    TNode *next;
};
TNode *head, *tail;

void init(){
    head = NULL;
    tail = NULL;
}

int isEmpty(){
 if(tail == NULL) return 1;
 else return 0;
}

void insertDepan(int databaru){
  TNode *baru;
  baru = new TNode;
  baru->data =databaru;
  baru->next =NULL;
  if(isEmpty()==1){
          head=tail=baru;
          tail->next=NULL;
     }
  else {
         baru->next = head;
         head = baru;
  }
cout<<"Data masuk\n";
} 
void insertBelakang(int databaru){
 TNode *baru,*bantu;
 baru = new TNode;
 baru->data = databaru;
 baru->next = NULL;
 if(isEmpty()==1){
 head=baru;
 tail=baru;
 tail->next = NULL;
 }
 else {
  tail->next = baru;
  tail=baru;
 }
 cout<<"Data masuk\n";
}
void hapusDepan(){
     TNode *hapus;
     int d;
     if (isEmpty()==0){
          if(head!=tail){
           hapus = head;
           d = hapus->data;
           head = head->next;
           delete hapus;
          } else {
           d = tail->data;
           head=tail=NULL;
          }
   cout<<d<<"terhapus";
     } else cout<<"Masih kosong\n";
}
