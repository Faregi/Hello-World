#include "list.h"

int main(){
    address P= new elmlist;
    list L;
    int pilih;

    CreateList(L);
    for(int i=0; i<=5;i++){
        InsertDataMahasiswa(P);
        cout<<endl;
        cout<<"Masukkan data"<<endl;
        cout<<"1. Tambah Depan"<<endl;
        cout<<"2. Tambah Belakang"<<endl;
        cout<<"3. Hapus Data Berdasarkan NIM"<<endl;
        cout<<"4. Keluar"<<endl;
        cin>>pilih;
        do{
        if(pilih==1){
            InsertFirst(P,L);
        } else{
            InsertLast(P,L);
        }}while(pilih == 4);

    }

}
