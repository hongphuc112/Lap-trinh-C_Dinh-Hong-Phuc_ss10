#include <stdio.h>
int main(){
	int arr[5]={4,1,6,7,5};
	for (int i=0;i<5;i++){
		int minidx=i;
		for(int j=i;j<5;j++){
			if(arr[j]<arr[minidx]){
				minidx=j;
			}
		}
		if (minidx!=i){
			int temp;
			arr[minidx]=arr[i];
			arr[i]=temp;
		}
	}
	for (int i=0;i<5;i++){
		printf ("%d",arr[i]);
	}
}
