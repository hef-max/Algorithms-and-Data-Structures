#include<stdio.h>

int arr[] = {30, 35, 40, 45,
			 50, 55, 60, 70,
			 80, 85, 90, 95,
			 100, 110, 115};
			 
int length = 15;

//Linear
int linearSearch(int search){
	for(int i = 0; i < length; i++){
		if(arr[i] == search){
			return i;
		}
	}
	return -1;
}

//Binary
int BinarySearch(int search){
	int low = 0;
	int high = length - 1;
	while(low <= high){
		int mid = (low+high)/2;
		if(arr[mid] == search){
			return mid;
		}
		else if(search < arr[mid]) high = mid-1;
		else if(search > arr[mid]) low = mid+1;
	}
	return -1;
}


int main(){
	
	//int resultIndex = linearSearch(85);
	int resultIndex = BinarySearch(110);
	if(resultIndex == -1) printf("TIDAK KETEMU");
	else printf("Index = %d", resultIndex);
	
	return 0;
	
}
