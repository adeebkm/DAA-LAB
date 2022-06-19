#include <stdio.h>
#include <time.h>
#include<stdlib.h>
#include <math.h>

void bubble(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void print(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d \t",arr[i]);
        printf("\n");
    }
}

void main(){
    double timetaken;
    clock_t start,end;
    int i,j,n,temp=0,min;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        int r=rand();
        arr[i]=r;
    }
    printf("before sorting\n");
    print(arr,n);
    start = clock();
    bubble(arr,n);
    end = clock();
    timetaken = (double)(end-start)/CLOCKS_PER_SEC;
    printf("after sorting\n");
    print(arr,n);
    printf("time taken: %f\n",timetaken);
}