#include<stdio.h>
#include<conio.h>

int main(){
	
	int start;
	
	printf("1. Start New Game\n");
	printf(">> ");
	scanf("%d", &start);
	
	if(start == 1){
		while(true){
			char nama;
			printf("Input your's charachter name's : ");
			scanf("%s", &nama);
			getchar();
			
			char input;
			printf("Choose your's class[Warrior|Rogue|Archer] : ");
			input = getchar();
			switch(input){
				case 'Warrior':
					printf("saya warrior");
					break;
				case 'Rogue':
					printf("saya Rogue");
					break;
				case 'Archer':
					printf("saya archer");
					break;
			break;				
	    	}
	     
		}
    }   
    
	return 0;
}
