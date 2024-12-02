#include <stdio.h>
int main(){
	int arr[6]={8,6,5,4,2,7};
	for (int i=0;i<6;i++){
		int key=arr[i];
		int j=i-1;
		
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;		
		}
		arr[j+1]=key;	
	
	}
	for(int i=0;i<6;i++){
		printf ("%d",arr[i]);
	}
}

 


