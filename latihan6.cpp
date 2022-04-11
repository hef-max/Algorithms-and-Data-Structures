#include<stdio.h>



int main(){
	
	printf("1. Tambah Bangunan\n");
	printf("2. Lihat Bangunan\n");
	printf("3. Exit");
	
	printf("\n");
	
	int pilih;
	
	printf("pilih no : ");
	scanf("%d", &pilih);
	
	if(pilih == 1){
		char nama;
		int age;
		int width;
		int length;
		
		printf("Masukan Nama : ");
		scanf("%s", &nama);
		getchar();
		
		printf("Masukan Umur : ");
		scanf("%d", &age);
		
		printf("Lebar Bangunan : ");
		scanf("%d", &width);
		
		printf("Panjang Bangunan : ");
		scanf("%d", &length);
		
		printf("\n");
		
		printf("Nama : %s\nUmur : %d\nMempunyai Luas bangunan : %d ", &nama, age, width*length);
		
		
	}
	
	if(pilih == 3){
		printf("anda exit");
	}
	
	
	
	return 0;
}
