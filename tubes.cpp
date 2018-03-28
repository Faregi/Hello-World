#include "list.h"

void CreateList(list &L){
    first(L)=NULL;
}

//Memasukan data mahasiswa
void InsertDataMahasiswa(address &P){
    mahasiswa mhs;
    cout<<"Nama : ";
    cin>>mhs.nama;
    cout<<"NIM : ";
    cin>>mhs.nim;
    cout<<"IPK : ";
    cin>>mhs.ipk;
    cout<<"Nama Ayah : ";
    cin>>mhs.ayah;
    cout<<"Nama Ibu : ";
    cin>>mhs.ibu;
    cout<<"Kode Mata Kuliah : ";
    cin>>mhs.cdmk;
    cout<<"Nama Mata Kuliah : ";
    cin>>mhs.matkul;
    cout<<"Semester : ";
    cin>>mhs.smstr;
    cout<<"Nilai Mata Kuliah : ";
    cin>>mhs.nilai;
    info(P)=mhs;
}

void InsertFirst(address P,list &L){
    if (first(L)!=NULL){
        next(P)= first(L);
        prev(first(L))=P;
        first(L)= P;
    }else{
        first(L)= P;
    }
}

void InsertLast(address P,list &L){
    address Q;
    if (first(L)!=NULL){
        address Q;
        Q= first(L);
        while(next(Q)!=NULL){
            Q=next(Q);
        }
        next(Q)= P;
        next(P)= NULL;
    }else{
        InsertFirst(P,L);
    }
}

void DeleteFirst(list &L){
    address Q;
    Q= first(L);
    first(L)= NULL;
}

void DeleteLast(list &L){
    address Q;
    address X;
    while(next(next(Q))!=NULL){
        Q= next(Q);
    }
    X= next(Q);
    next(Q)= NULL;
}
void CariNIM(string NIM,list &L,address &P){;
    P= first(L);
    while((NIM!=info(P).nim) & (next(P)!=NULL)){
        P=next(P);
    }
}
