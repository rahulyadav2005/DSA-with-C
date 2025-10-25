#include <stdio.h>
#include <stdlib.h>

int main() {
    // traversing an array element 
    int size;
    printf("enter the size of array :");
    scanf("%d",&size);

    int arr[size];
    printf("you entered %d  element \n",size);
    for (int i = 0; i <size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("the array element are : \n");
    for (int  i = 0; i <= size-1; i++)

    {
        printf("%d ",arr[i]);
    }
    
    int sum=0;
    for (int  i = 0; i <size; i++)
    {
        sum=sum+arr[i];
    }
    printf("\nthe sum of array element is : %d ",sum);
    
 

   return 0;
}
