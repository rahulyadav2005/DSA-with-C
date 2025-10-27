#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("enter the size of array :");
    scanf("%d",&size);
    
    int arr[size];
    printf("you enter %d element at the array :\n",size);
    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);

    }

    printf("the array elemrnt  before the delection :\n");
    for (int  i = 0; i < size; i++)
    {
       printf("%d ",arr[i]);

    }
    printf("\n");
    int pos;
    printf("enter the element position to be deleted :\n");
    scanf("%d",&pos);

    for (int  i = pos-1; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    printf("the array element after the delection :\n");
    
     
    for (int  i = 0; i < size; i++)
    {
       printf("%d ",arr[i]);

    }
    
}