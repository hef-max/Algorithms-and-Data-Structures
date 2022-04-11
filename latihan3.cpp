#include<stdio.h>
#include<string.h>

int main(){
	
	//ASCII
	// 'a' = 97;
	// 'z' = 122;
	// 'A' = 65;
	// 'Z' = 90;
	
	char str[20];
	
	scanf("%s", str);
	getchar(); //untuk memperjelas
	
	int panjang = strlen(str);
	
	for(int i = 0; i < panjang; i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] -= 32;
		}
	}
	
	printf("%s", str);
	
	//cara cepat
//printf("%s", strupr(str));
	
	return 0;
}
