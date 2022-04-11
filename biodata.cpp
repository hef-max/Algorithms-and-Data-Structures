#include<stdio.h>

int main(){
	
	char nama[100]; /*ini adalah string atau bisa saja char*/ 
	int umur; 
	int kelas;
	float tinggi;
	char golDarah;

   
	printf("Nama : ");
	scanf("%[^\n]", nama);
	getchar();
		
	printf("kelas : ");
	scanf("%d", &kelas);
	getchar();
	
	printf("Umur : ");
	scanf("%d", &umur);
	getchar();
	
	printf("Tinggi badan : ");
	scanf("%f", &tinggi);
	getchar();
	
	printf("Gol Darah : ");
	scanf("%c", &golDarah);
	getchar();
	
	printf("\n");
	printf("===================\n");
	
	printf("Nama  : %s\n", nama);
	printf("kelas : %d\n", kelas);
	printf("umur  : %d\n", umur);
	printf("Tinggi badan : %2.f\n", tinggi);
	printf("Gol Darah    : %c\n", golDarah);
	
	
	return 0;
}
