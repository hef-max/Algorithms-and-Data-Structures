#include<stdio.h>
#include <iostream>
#include <stdlib.h>

//player
	int level = 1;
	int gold = 0;
	int exp = 0;
	int health = 150;
	int health_rogue = 90;
	int health_archer = 50;
	int damage = 5;


//musuh1
	char goblin[10] = "goblin";
	int health_goblin = 10;
	int damage_goblin = 3;
	
//musuh2
   char orc[10] = "orc";
   int health_orc = 20;
   int damage_orc = 7;

//musuh3
   char wizard[10] = "wizard";
   int health_wizard = 30;
   int damage_wizard = 10;


int serang_goblin(){
	printf("%s %d %s %d\n", "damage terasa :", damage, "darah tersisa :", health_goblin - damage);
	printf("%s %d %s %d\n", "damage terasa :", damage_goblin, "darah tersisa :", health - damage_goblin);
	printf("%s %d\n", "exp+", exp + 3);
	printf("%2.f\n", level + 0.3);
	
	return;
}

int run(){
	printf("lari!!!\n");
}

int serang_orc(){
	printf("%s %d %s %d\n", "damage terasa :", damage, "darah tersisa :", health_orc - damage);
	printf("%s %d %s %d\n", "damage terasa :", damage_orc, "darah tersisa :", health - damage_orc);
	printf("%s %d\n", "exp+", exp + 5);
	printf("%d\n", level + 0.7);
	
	return 1;
}

int serang_wizard(){
	printf("%s %d %s %d\n", "damage terasa :", damage, "darah tersisa :", health_wizard - damage);
	printf("%s %d %s %d\n", "damage terasa :", damage_wizard, "darah tersisa :", health - damage_wizard);
	printf("%s %d\n", "exp+", exp + 10);
	printf("%d\n", level + 1);
	return 1;
}



main(){
	

	int start;
	printf("1. Start New Game\n");
	printf(">> ");
	scanf("%d", &start);
	if(start == 1){
		char nama[100];
		char warrior, rogue, archer;
		
		printf("Input your's name's : ");
		scanf("%s", nama);
		getchar();
		
		printf("Input your's class[warrior|rogue|archer] : "); 
		scanf("%s", &warrior, &rogue, &archer);
		
		warrior = 1;
		rogue = 2;
		archer = 3;
		
		printf("\n");
		
		if(warrior == 1){
			
			printf("%s %s\n", nama, "Status");
			printf("=================\n");	
			printf("%s %d\n","Level :", level);
			printf("Class : warrior\n");
			printf("%s %d\n","Gold :", gold);
			printf("%s %d\n","Exp  :", exp);
			printf("%s %d\n", "Health :", health);
		
			printf("\n");
			
			printf("1. Fight\n");
			printf("2. Heal\n");
			printf("3. Save\n");
			printf("4. Exit\n");
			
			int input;
			printf(">> ");
			scanf("%d", &input);
			
			printf("\n");
			
			while(input == 1){
				printf("figh menu\n");
				printf("===========\n");
				printf("1. goblin \n");
				printf("2. orc\n");
				printf("3. wizard\n");
				printf("4. back\n");
				
				printf("\n");
				
				int pilih;
				printf(">> ");
				scanf("%d", &pilih);
				
				switch(pilih){
					case 1:
						printf("%s\n", goblin);
						printf("%s %d\n", "health :", health_goblin);
						printf("%s %d\n", "damage :", damage_goblin);
						printf("\n");
						printf("%s\n", nama);
						printf("%s %d\n", "health :", health);
						printf("%s %d\n", "damage :", damage);
						
						
						int a;
						printf("1. attack\n");
						printf("2. run\n");
						printf(">> ");
						scanf("%d", &a);
						switch(a){
							case 1:
								serang_goblin();
								break;
							case 2:
								run();
								break;
							return;	
						}
						return;
						
					case 2:
						printf("%s\n", orc);
						printf("%s %d\n", "health :", health_orc);
						printf("%s %d\n", "damage :", damage_orc);
						printf("\n");
						printf("%s\n", nama);
						printf("%s %d\n", "health :", health);
						printf("%s %d\n", "damage :", damage);
						
						
						int b;
						printf("1. attack\n");
						printf("2. run\n");
						printf(">> ");
						scanf("%d", &b);
						switch(b){
							case 1:
								serang_orc();
								break;
							case 2:
								run();
								break;
							return 1;	
						}
					case 3:
						printf("%s\n", wizard);
						printf("%s %d\n", "health :", health_wizard);
						printf("%s %d\n", "damage :", damage_wizard);
						printf("\n");
						printf("%s\n", nama);
						printf("%s %d\n", "health :", health);
						printf("%s %d\n", "damage :", damage);
						
						
						int c;
						printf("1. attack\n");
						printf("2. run\n");
						printf(">> ");
						scanf("%d", &c);
						switch(c){
							case 1:
								serang_wizard();
								break;
							case 2:
								run();
								break;
							return 1;	
						}
					case 4:
						return start;
				}
			}
			//heal
			if(input == 2){
				int heal;
				printf("mau heal berapa ?");
				scanf("%d", &heal);
				printf("%s %d\n","darah anda bertambah :", health + heal);
				return start;
			}
			//save
			if(input == 3){
				
			}
			//exit
			if(input == 4){
				exit(true);
			}
			return start;
		}
		
		//opsi 2
		
		if(rogue == 2){
			printf("%s %s\n", nama, "Status");
			printf("=================\n");	
			printf("%s %d\n","Level :", level);
			printf("Class : Rogue\n");
			printf("%s %d\n","Gold :", gold);
			printf("%s %d\n","Exp  :", exp);
			printf("%s %d\n", "Health :", health_rogue);
		
			printf("\n");
			
			printf("1. Fight\n");
			printf("2. Heal\n");
			printf("3. Save\n");
			printf("4. Exit\n");
			
			int input;
			printf(">> ");
			scanf("%d", &input);
			
			printf("\n");
			
			while(input == 1){
				printf("figh menu\n");
				printf("===========\n");
				printf("1. goblin \n");
				printf("2. orc\n");
				printf("3. wizard\n");
				printf("4. back\n");
				
				printf("\n");
				
				int pilih;
				printf(">> ");
				scanf("%d", &pilih);
				switch(pilih){
					case 1:
						printf("%s\n", goblin);
						printf("%s %d\n", "health :", health_goblin);
						printf("%s %d\n", "damage :", damage_goblin);
						printf("\n");
						printf("%s\n", nama);
						printf("%s %d\n", "health :", health);
						printf("%s %d\n", "damage :", damage);
						
						
						int a;
						printf("1. attack\n");
						printf("2. run\n");
						printf(">> ");
						scanf("%d", &a);
						switch(a){
							case 1:
								serang_goblin();
								break;
							case 2:
								run();
								break;
							return 1;	
						}
					case 2:
						printf("%s\n", orc);
						printf("%s %d\n", "health :", health_orc);
						printf("%s %d\n", "damage :", damage_orc);
						printf("\n");
						printf("%s\n", nama);
						printf("%s %d\n", "health :", health);
						printf("%s %d\n", "damage :", damage);
						
						
						int b;
						printf("1. attack\n");
						printf("2. run\n");
						printf(">> ");
						scanf("%d", &b);
						switch(b){
							case 1:
								serang_orc();
								break;
							case 2:
								run();
								break;
							return 1;	
						}
					case 3:
						printf("%s\n", wizard);
						printf("%s %d\n", "health :", health_wizard);
						printf("%s %d\n", "damage :", damage_wizard);
						printf("\n");
						printf("%s\n", nama);
						printf("%s %d\n", "health :", health);
						printf("%s %d\n", "damage :", damage);
						
						
						int c;
						printf("1. attack\n");
						printf("2. run\n");
						printf(">> ");
						scanf("%d", &c);
						switch(c){
							case 1:
								serang_wizard();
								break;
							case 2:
								run();
								break;
							return 1;	
						}
					case 4:
						return start;
				}
			}
			//heal
			if(input == 2){
				int heal;
				printf("mau heal berapa ?");
				scanf("%d", &heal);
				printf("%s %d\n","darah anda bertambah :", health + heal);
				return start;
			}
			//save
			if(input == 3){
				
			}
			//exit
			if(input == 4){
				exit(true);
			}
			return start;
			
		}
		
		//opsi 3
		if(archer == 3){
			printf("%s %s\n", nama, "Status");
			printf("=================\n");	
			printf("%s %d\n","Level :", level);
			printf("Class : warrior\n");
			printf("%s %d\n","Gold :", gold);
			printf("%s %d\n","Exp  :", exp);
			printf("%s %d\n", "Health :", health_archer);
		
			printf("\n");
			
			printf("1. Fight\n");
			printf("2. Heal\n");
			printf("3. Save\n");
			printf("4. Exit\n");
			
			int input;
			printf(">> ");
			scanf("%d", &input);
			
			printf("\n");
			
			while(input == 1){
				printf("figh menu\n");
				printf("===========\n");
				printf("1. goblin \n");
				printf("2. orc\n");
				printf("3. wizard\n");
				printf("4. back\n");
				
				printf("\n");
				
				int pilih;
				printf(">> ");
				scanf("%d", &pilih);
				switch(pilih){
					case 1:
						printf("%s\n", goblin);
						printf("%s %d\n", "health :", health_goblin);
						printf("%s %d\n", "damage :", damage_goblin);
						printf("\n");
						printf("%s\n", nama);
						printf("%s %d\n", "health :", health);
						printf("%s %d\n", "damage :", damage);
						
						
						int a;
						printf("1. attack\n");
						printf("2. run\n");
						printf(">> ");
						scanf("%d", &a);
						switch(a){
							case 1:
								serang_goblin();
								break;
							case 2:
								run();
								break;
							return 1;	
						}
					case 2:
						printf("%s\n", orc);
						printf("%s %d\n", "health :", health_orc);
						printf("%s %d\n", "damage :", damage_orc);
						printf("\n");
						printf("%s\n", nama);
						printf("%s %d\n", "health :", health);
						printf("%s %d\n", "damage :", damage);
						
						
						int b;
						printf("1. attack\n");
						printf("2. run\n");
						printf(">> ");
						scanf("%d", &b);
						switch(b){
							case 1:
								serang_orc();
								break;
							case 2:
								run();
								break;
							return 1;	
						}
					case 3:
						printf("%s\n", wizard);
						printf("%s %d\n", "health :", health_wizard);
						printf("%s %d\n", "damage :", damage_wizard);
						printf("\n");
						printf("%s\n", nama);
						printf("%s %d\n", "health :", health);
						printf("%s %d\n", "damage :", damage);
						
						
						int c;
						printf("1. attack\n");
						printf("2. run\n");
						printf(">> ");
						scanf("%d", &c);
						switch(c){
							case 1:
								serang_wizard();
								break;
							case 2:
								run();
								break;
							return 1;	
						}
					case 4:
						return start;
				}
			}
			
			//heal
			if(input == 2){
				int heal;
				printf("mau heal berapa ?");
				scanf("%d", &heal);
				printf("%s %d\n","darah anda bertambah :", health + heal);
				return start;
			}
			
			//save
			if(input == 3){
				
			}
			
			//exit
			if(input == 4){
				exit(true);
			}
			return start;			
		}
		
	}
	
	
	return 0;
}
