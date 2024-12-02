#include<stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int number; 
	int flag = 0;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &number);
    for (int i = 0; i < 5; i++) {
        if (arr[i] == number) {
            printf("Phan tu %d o vi tri: %d\n", number, i);
            flag = 1;
            break;
        }
    }
    if (flag==0) {
        printf("Phan tu %d khong ton tai", number);
    }

    return 0;
}

