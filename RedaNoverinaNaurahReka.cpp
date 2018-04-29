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
#include <stdlib.h>
using namespace std;
struct Data{
int x;
Data *next;
};
Data *head;
int paKosong() {
if (head == NULL) return 1;
else return 0;
}

