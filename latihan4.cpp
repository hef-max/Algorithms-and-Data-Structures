#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	char map[6][6] = {"*****",
					  "*****",
					  "*****",
					  "*****",
					  "*****"};
	char player = 'p';
	
	int playerX = 0;
	int playerY = 0;
	
	char input;
	
	while(true){
		for(int i = 0; i < 5; i++){
			for(int j = 0; j < 5; j++){
				if(playerY == i && playerX == j){
					printf("%c", player);
				}
				else{
					printf("*");
				}
			}
			printf("\n");	
		}
		
		input = getchar(); //include conio.h(library)
		
		switch(input){
			case 'a':
				if(playerX > 0) playerX -= 1;
				break;
			case 'w':
				if(playerY > 0) playerY -= 1;
				break;
			case 'd':
				if(playerX < 4) playerX += 1; 
				break;
			case 's':
				if(playerY < 4) playerY += 1;
				break;
		}
		system("cls");
	}
	
	return 0;
}
