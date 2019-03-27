/*
Author 		: M Reza Atthariq Kori 
NPM 		: 140810180060
Kelas		: B
Tanggal		: 27 Maret 2019
Deskripsi	: Program Double linked list
*/

#include<iostream>
using namespace std;

struct Pembalap{
	int nomor;
	char nama;
	int waktu;
	Pembalap* next;
	Pembalap* prev;
};

void createList(Pembalap* &head){
	head=NULL;
}

void createNode(Pembalap* &p, int nomor, char nama){
	p = new Pembalap;
    p->nomor=nomor;
    p->nama=nama;
    p->waktu=0;
    p->next = NULL;
    p->prev = NULL;
}

void insertFirst(Pembalap* &head, Pembalap* node){
	if (head == NULL) {
        head = node;
    } 
	else {
        node->next = head;
        head->prev = node;
        head = node;
	}
}

void search(Pembalap* &firstNode, int nomorKey, Pembalap* &pToUpdate){
 	
}

void insertBefore(Pembalap* &head, int nomorKey, Pembalap* node){
	Pembalap* pBantu=head;
 	if (head->nomor==nomorKey)
 		{
  			node->next=head;
  			head->prev=node;
  			head=node;
 		}
 	else {
  		while(pBantu!=NULL){
   			if(pBantu->nomor==nomorKey){
    			node->next=pBantu;
    			node->prev=pBantu->prev;
    			pBantu->prev->next=node;
    			pBantu->prev=node;
    			break;
   				}
   			else {
    			pBantu=pBantu->next;
   			}
  		}
 	}
}

void deleteByKey(Pembalap* &head, int nomorKey, Pembalap* &deletedNode){
	
}


void traversal(Pembalap* head){
	Pembalap* help;
    if (head==NULL){
        cout<<"List Kosong\n";
    }
    else {
        help=head;
        while(help!=NULL){
            cout<<"Nomor	: "<<help->nomor<<endl;
            cout<<"Nama	: "<<help->nama<<endl;
            cout<<"Waktu	: "<<help->waktu<<endl;
            cout<<endl;
            help=help->next;
        }
    }
}

void sortingByNomor(Pembalap* &head){
	
}

void update(Pembalap* firstNode, int nomorKey){
	
}

int main() {
	Pembalap* head = NULL;
 	Pembalap* pBaru = NULL;
 	Pembalap* pToUpdate = NULL;
 	Pembalap* firstNode = NULL;
 	char nama = 'a';

 	for (int i = 0; i < 4; i++) {
   		createNode(pBaru, i+1, nama++);
   		insertFirst(head, pBaru);
 	}

	cout << "\n>>> List" << endl;
 	traversal(head);

 	int keyNomor = 2;

 	cout << "\n>>> Insert Before nomor " << keyNomor << endl;
 	createNode(pBaru, 99, 'z');
	insertBefore(head, keyNomor, pBaru); 
 	traversal(head);
 
 	cout << "\n>>> SortingByNomor" << endl;
 	sortingByNomor(head);
 	traversal(head);

 	keyNomor = 3;
 	cout << "\n>>> Delete nomor " << keyNomor << endl;
 	Pembalap* pHapus = NULL;
 	deleteByKey(head, keyNomor, pHapus);
 	traversal(head);

 	keyNomor = 4;
 	cout << "\n>>> Update nomor " << keyNomor << endl;
 	update(head, keyNomor);

 	cout << "\n>>> Updated list\n";
 	traversal(head);
}


