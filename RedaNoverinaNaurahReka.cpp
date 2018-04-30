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
void insertBelakang(int databaru)
{
 TNode *baru,*bantu;
 baru = new TNode;
 baru->data = databaru;
 baru->next = NULL;
 if(isEmpty()==1){
 head=baru;
 tail=baru;
 tail->next = NULL;
}
 else 
 {
 tail->next = baru;
 tail=baru;
 }
 cout<<"Data masuk\n";
}
void tampil()
{
 TNode *bantu;
 bantu = head;
     if(isEmpty()==0){
          while(bantu!=NULL){
           cout<<bantu->data<<" ";
           bantu=bantu->next;
          }
      }else 
       cout<<"Masih kosong\n";
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
void hapusBelakang(){
     TNode *bantu,*hapus;
     int d;
     if (isEmpty()==0){
      bantu = head;
          if(head!=tail){
               while(bantu->next!=tail){
                bantu = bantu->next;
               }
               hapus = tail;
               tail=bantu;
               d = hapus->data;
               delete hapus;
               tail->next = NULL;
               }else {
               d = tail->data;
               head=tail=NULL;
               }
          cout<<d<<" terhapus\n";
          } else cout<<"Masih kosong\n";
}

void sisipdata(int databaru, int posisi)
{
    TNode *baru, *bantu;
    if (head!=NULL){
     baru=new TNode;
     bantu=head;
    for (int i = 1;i < posisi-1;i++)
    {
            if (bantu->next != NULL)
            bantu = bantu->next;
            else
            break;
    }
    baru->data = databaru;
    baru->next = bantu->next;
    bantu->next = baru;
    }
    else
    {
    cout<<"Belum ada data !! silahkan isi data dulu...";
    }
}

void clear()
{
        TNode *bantu,*hapus;
        bantu = head;
        while(bantu!=NULL)
        {
            hapus = bantu;
            bantu = bantu->next;
            delete hapus;
        }
        head = NULL;
        cout<<"CLEAR";
}
int main () {
 
     int pil,databaru,posisi;

    do
    {
     
        system("cls");
        cout<<endl<<endl;
        cout<<"   *******************************************************************************************************"<<endl;
        cout<<"   =                                         SIMPLE LINKED LIST                                          ="<<endl<<endl;
        cout<<" Anggota : "<<endl;
        cout<<" 1. Noverina Ika Tama                 1717051005"<<endl;
        cout<<" 2. Naurah Nazhifah                   1717051032"<<endl;
        cout<<" 3. Reka Amelia                       1717051046"<<endl;
        cout<<" 4. Reda Meiningtiyas                 1717051055"<<endl;
        cout<<"   *******************************************************************************************************"<<endl;
        cout<<"             (1) Masukan Data         ="<<endl;
        cout<<"             (2) Insert Depan         ="<<endl;
        cout<<"             (3) Insert Belakang      ="<<endl;
        cout<<"             (4) Delete Depan         ="<<endl;
        cout<<"             (5) Delete Belakang      ="<<endl;
        cout<<"             (6) Tampil Data          ="<<endl;
        cout<<"             (7) Sisip Data           ="<<endl;
        cout<<"             (8) Clear                ="<<endl;
        cout<<"             (9) Exit                 ="<<endl;
        cout<<"   *******************************************************************************************************"<<endl;
        cout<<"   Masukan Pilihan : "; 
        cin>>pil;
        switch (pil)
        {
                case 1: system("CLS");{
                cout<<"Masukkan Data = ";
                cin>>databaru;
                insertDepan(databaru);
                break;
            }
                case 2: system("cls");{
                cout<<"Masukkan Data = ";
                cin>>databaru;
                insertDepan(databaru);
                break;
            }
                case 3: system("cls");{
                cout<<"Masukkan Data = ";
                cin>>databaru;
                insertBelakang(databaru);
                break;
            }
                case 4: system("cls");{
                hapusDepan();
                break;
            }
            	case 5: system("cls");{
                hapusBelakang();
                break;
            }
            	case 6: system("cls");{
                tampil();
                break;
            }
            	case 7: system("cls");{
            	cout<<" Masukkan Data: "; cin>>databaru;
            	cout<<" Masukkan posisi data yang ingin ditambahkan: "; cin>>posisi;
            	sisipdata(databaru,posisi);
            	cout<<endl;
            	break;
            }
            	case 8: system("cls");{
            	clear();
            	break;
            }
		case 9: {
            	return 0;
             	break;
            }
            	case 10: {
            	return 0;
		break;
			}
            default : system("cls");{
            cout<<"\n Maaf, Pilihan yang anda pilih tidak tersedia!";
            }

        }
        getch();
    }
    while(pil!=8);
 
  return 0;
}
