#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("enter the size of array :");
    scanf("%d",&size);

    int arr[size];
    printf("you entered %d element\n",size);
    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);

    }
     
    printf("the array element before insertion are : \n");

    for (int  i = 0; i < size; i++)

    {
        printf("%d ",arr[i]);

    }
printf("\n");
 int pos,ele;
 printf("enter the element to be inserted : \n");
 scanf("%d",&ele);
 printf("enter the position where element insert :\n");
 scanf("%d",&pos);

 for (int  i = size; i >= pos; i--)
 {
    arr[i]=arr[i-1];
 }
 
    arr[pos-1]=ele;
    size=size+1;

    printf("after the inserction  element  arr  is :  \n");

    for (int  i = 0; i <= size-1; i++)
    {
    printf("%d ",arr[i]);
    
       
    }
    
  return 0;

}