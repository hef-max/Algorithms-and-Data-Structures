#include<stdio.h>

int main(){
	
	//if, else if, else
	int angka = 4;
	
	if(angka%2 == 1){
		printf("ganjil");
	}
	else if(angka%2 == 0){
		printf("genap");
	}
	else{
		printf("yang anda masukan bukan angka");
	}
	
	printf("\n");
	
	//switch
	int bil = 1;
	
	switch(bil){
		case 1:
			printf("satu");
			break;
		case 2:
			printf("dua");
			break;
		case 3:
			printf("tiga");
			break;
		case 4:
			printf("empat");
			break;
		case 5:
			printf("lima");
			break;
		default:
			printf("yang anda masuka tidak ada didaftar");
	}
	
	printf("\n");
	
	//Ternary if
	
	  //kondisi ? benar : salah
	
	int bilangan = 11;
	
	printf("%s", (bilangan < 10? "kurang dari 10" : "lebih dari 10"));   

}
