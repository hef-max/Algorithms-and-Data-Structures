#include<stdio.h>

int main(){
	
	int bil, bil2, bil3; 
	
	scanf("%d", &bil);
	scanf("%d %d", &bil2, &bil3);

	if(bil <= bil3){
		printf("%d %s %d %s %d", bil, "ada diantara", bil2, "dan", bil3);
	}
	else{
		printf("%d %s %d %s %d", bil, "bukan diantara", bil2, "dan", bil3);
	}
	
	
	//jawaban
	
//	if(bil >= bil2 && bil <= bil3){
//		printf("%d ada diantara %d dan %d", bil, bil2, bil3);
//	}
//	else{
//		printf("%d bukan diantara %d dan %d", bil, bil2, bil3);
//	}
	
	return 0;
}
