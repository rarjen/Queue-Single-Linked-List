#include <iostream>
#define MAX_Q 5

using namespace std;

struct node{
    int data;
    struct node *next;
};
typedef struct node Node;

struct List{
    struct node *head;
    struct node *tail;
};
typedef struct List Qlist;


int isEmpty(Qlist *Q){
    if(Q -> head = NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int numberOfElement(Qlist *Q){
    node *bantu;
    bantu = Q -> head;
    int jumlah = 0;
    if(isEmpty(Q) == 1){
        cout << "Queue still empty !";
    }
    else{
        while(bantu != NULL){
        jumlah++;
        bantu = bantu -> next;
        }
    return jumlah;
    }
}

int isFull(Qlist *Q){
    if(numberOfElement(Q) == MAX_Q){
        cout << "Queue is full";
        return 1;
    }
    else{
        return 0;
    }

}

void alokasi(Node *temp, int x){
    temp = new Node();
    temp -> data = x;
    temp -> next = NULL;
}

void insertDepan(Qlist *Q, int x){
    Node *temp;
    alokasi(temp, x);
    Q -> head= temp;
}

void EnQ(Qlist *Q, int x){
    Node *temp;
    Q -> tail = Q -> head;
    if(isEmpty(Q) == 1){
        insertDepan(Q, x);
    }
    else{
        if(isFull(Q) == 1){
            cout << "Queue is full";
        }
        else{
            alokasi(temp, x);
            Q -> tail -> next = temp;
            Q -> tail = temp;
        }
    }
}

void DeQ(Qlist *Q){
    if(isEmpty(Q) == 1){
        cout << "Queue still empty !";
    }
    else{
        node *hapus;
        hapus = Q -> head;
        Q -> head = hapus -> next;
        hapus -> next = NULL;
        free(hapus);
    }
}

void peek(Qlist *Q){
    cout << Q -> head -> data;
}


void cetak(Qlist *Q){
    node *temp;
    temp = Q -> head;
    while(temp != NULL){
        cout << temp -> data;
        temp = temp -> next;
    }

}
int main()
{
    cout << "Hello world! SLLQ" << endl;
    return 0;
}
