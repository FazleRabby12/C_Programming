/* Write a program that takes 5 integers as input, stores them in an array and finds
 the highest number in the array.*/

#include<stdio.h>
int main()
{
    int i;
    int arr[5]={2,3,15,4,9};
     int max=arr[0];

    for(i=0;i<5;i++){
        if(arr[i]>max){
        max=arr[i];
        }
    }
    printf("The largest number of array is:%d",max);

    return 0;
}
