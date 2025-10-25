#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("enter the size of array :");
    scanf("%d",&size);
    int arr[size];

    printf("you entered %d  element \n",size);
     for (int  i = 0; i < size ; i++)
     {
        scanf("%d",&arr[i]);

     }
     printf("the array element are : \n");

     for (int  i = 0; i <=size-1; i++)
     {
        printf("%d ",arr[i]);
     }
     int max=arr[0];
     for (int  i = 0; i < size; i++)
     {
        if (max<arr[i])
        {
            max=arr[i];
        }
        
        
     }
     printf(" \nthe maximum element in array is : %d ",max);
     
     



    return 0;
}
