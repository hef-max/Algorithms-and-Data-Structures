#include <iostream>
#include <stdlib.h>
using namespace std;

struct node {
    int info; 
    struct node *link;
};

void tampilan(struct node *start);
struct node *addnilai(struct node *start, int num);
void addend(struct node *start, int num);
struct node *del(struct node *start, int num);
void addafter(struct node *start, int num, int num2);
struct node *addbefore(struct node *start, int num, int num2);
struct node *kebalik (struct node *start);

int main (){
	
    struct node *start = NULL;
    int choice,num,num2;

    while(true){
    	
        cout<<"\n=========== MENU DOUBLE LINKED LIST ==========="<<endl;
        cout<<"\n1. Menampilkan node"<<endl;
        cout<<"2. Menambahkan node awal insert"<<endl;
        cout<<"3. Memasukan node di akhir"<<endl;
        cout<<"4. Hapus node"<<endl;
        cout<<"5. Menambahkan node setelah angka tertentu"<<endl;
        cout<<"6. Menambahkan node sebelum angka tertentu"<<endl;
        cout<<"7. Menampilkan node dari belakang"<<endl;
        cout<<"8. Keluar\n"<<endl;
        cout<<"PILIHAN ANDA = ";

        cin>>choice;
        if (choice==1){
            tampilan(start);
        }
        else if (choice==2){
            cout<<"\nMasukkan angkanya = ";
            cin>>num ;
            start = addnilai(start, num);
        }
        else if (choice==3){
            cout<<"\nMasukkan angkanya = ";
            cin>>num ;
            addend(start, num);
        }
        else if (choice==4){
            cout<<"\nMasukan angka yang ingin di hapus = ";
            cin>>num ;
            start = del(start, num);
        }
        else if (choice==5){
            cout<<"\nMasukkan angka yang ingin ditambahkan = ";
            cin>>num;
            cout<<"masukkan angka setelah angka berapa? = ";
            cin>>num2;
            addafter(start, num, num2);
        }
        else if (choice==6){
            cout<<"\nMasukkan angka yang ingin ditambahkan = ";
            cin>>num ;
            cout<<"masukkan angka sebelum angka berapa? = ";
            cin>>num2;
            start = addbefore(start, num, num2);
        }  
        else if (choice==7) start=kebalik(start); 
        else if (choice==8){
            cout<<"\n============= Terima Kasih ============\n"<<endl;
            exit(true);
        } 
        else cout<<"data salah"<<endl;
    }
}

void tampilan(struct node *start){
    struct node *p;
    
    if(start==NULL){
        cout<<"\n=========== List Kosong ===========\n"<<endl;
    }
    
    p = start;
    
    while (p != NULL){
        cout<<p->info<<" ";
        p=p->link;
    }
}

struct node *addnilai(struct node *start, int num){
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=num ;
    temp->link=start ;
    start=temp ;
    return start;
}

void addend(struct node *start, int num){
    struct node *temp, *p;

    if(start==NULL){
        cout<<"\n========== Fungsi ini tidak bisa digunakan untuk ditambahkan di node ======\n"<<endl;
        return;
    }
    
    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=num;
    p = start;
    
    while (p->link!=NULL){
       p = p->link;
    }
    p->link = temp;
    temp->link = NULL;
}

struct node *del(struct node *start, int num){
    struct node *temp, *p;
    if(start==NULL){
        cout<<"\n=============== list tidak tersedia ==============\n"<<endl;
        return start;
    }
    if(start->info==num){
        temp=start;
        start=start->link;
        free(temp);
        return start;
    }
    p=start;
    while(p->link!=NULL){
        if(p->link->info==num){
            temp = p->link;
            p->link = temp->link;
            free(temp);
            return start;
        }
        p=p->link;
    }
    cout<<"\n========= "<<num<<" Tidak tersajikan di list ===========\n"<<endl;
    return start;
}

void addafter(struct node *start, int num, int num2){
    if(start==NULL){
        cout<<"\n========== Fungsi ini tidak bisa digunakan karena belum ada node awal yang masuk ======\n"<<endl;
        return;
    }
    
    struct node *temp, *p;
    p = start ;
    
    while(p->link!=NULL){
        if(p->info==num2){
            temp = (struct node *)malloc(sizeof(struct node));
            temp->info=num;
            temp->link = p->link;
            p->link = temp;
            return;
        }
        p=p->link;
    }
    cout<<"\n========== "<<num2<<" Tidak tersajikan di list ================\n"<<endl;
}
struct node *addbefore(struct node *start, int num, int num2){
	
    struct node *temp, *p;
    
    if(start==NULL){
        cout<<"\n========== Fungsi ini tidak bisa digunakan karena belum ada node awal yang masuk ======\n"<<endl;
    }
    if (start->info==num2){
        temp=(struct node *)malloc(sizeof(struct node));
        temp->info=num ;
        temp->link=start ;
        start=temp ;
        
        return start;
    }
    
    p = start;
    
    while (p->link!=NULL){
        if(p->link->info==num2){
            temp=(struct node *)malloc(sizeof(struct node));
            temp->info=num;
            temp->link = p->link;
            p->link = temp;
            
            return start;
        }
        p=p->link;
    }
    cout<<"\n========== "<<num2<<" Tidak tersajikan di list ================\n"<<endl;
    return start;
}

struct node *kebalik (struct node *start){
    if(start==NULL){
        cout<<"\n========== Fungsi ini tidak bisa digunakan karena belum ada node awal yang masuk ======\n"<<endl;
    }
    struct node *sebelum, *ptr, *sesudah;
    sebelum = NULL;
    ptr = start;
    while(ptr!=NULL){
        sesudah = ptr->link;
        ptr->link=sebelum;
        sebelum=ptr;
        ptr=sesudah;
    }
    start=sebelum;
    return start;
    
    
    return 0;
}
