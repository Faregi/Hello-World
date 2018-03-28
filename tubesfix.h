#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <conio.h>
#include <iostream>
#include <stdio.h>
#define Nil NULL
#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)


//DEKLARASI LIST
using namespace std;

struct mahasiswa{
    string nim;
    string nama;
    float ipk;
    string ayah;
    string ibu;
    string cdmk;
    string matkul;
    char smstr;
    float nilai;

};

typedef mahasiswa infotype;

typedef struct elmlist *address;
struct elmlist{
    infotype info;
    address next;
    address prev;
};

struct list{
    address first;
};

//PROCEDURE & FUNCTION
void CreateList(list &L);
void InsertDataMahasiswa(address &P);
void InsertFirst(address P,list &L);
void InsertLast(address P,list &L);
void DeleteFirst(list &L);
void DeleteLast(list &L);
#endif // LIST_H_INCLUDED
