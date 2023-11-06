#include<stdio.h>

void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n){
    int i, j, index;
    
    for(i=0; i<n-1; i++){
        index=i;
        for(j=i+1; j<n; j++){
            if(arr[j]< arr[index]){
                index=j;
            }
        }
        
        swap(&arr[index], &arr[i]);
    }
}

void display(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr [] = {84,12,4,69,7,108,35};
    int n= sizeof(arr)/ sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    display(arr,n);
    
    return 0;
}
    
