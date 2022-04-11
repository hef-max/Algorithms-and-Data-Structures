#include<stdio.h>

int arr[] =  {17, 13, 15, 10, 20};
int length = 5;


//Bubble sort
void bubbleSort(){
	for(int i = 0; i < length; i++){
		bool swapped = false;
		for(int j = 0; j < length - i - 1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swapped = true;
			}
		}
		if(swapped == false) break;
	}
} 

//selection sort

//int array[] = {37,22,17,28,31,25};
//int panjang = 6;

void slectionSort(){
	for(int i = 0; i < length; i++){
		int min = i;
		for(int j = i+1; j < length; j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
}

//exceut
void print(){
	for(int i = 0; i < length; i++){
		printf("%d ", arr[i]);
	} 
	printf("\n");
}



int main(){
	//Ascending / Descemding
	//Bubble sort, selection sort
	
	
//	bubbleSort();
//	print();
	
	
	slectionSort();
	print();
	
	return 0;
}
