#include<stdio.h>
int main()
{
 int arr[30] , num , i , loc;
 
 printf("\n Enter the number of elements:");
 scanf ("%d" , &num);
 
 //read elements in an array
 printf("\n Enter %d elements: " , num);
 for(i=0;i<num;i++)
    {
     scanf("%d" , &arr[i]);
     }
 //read the location
 printf("\n Location of the element to be deleted: ");
 scanf("%d" , &loc);
 
 //Loop for the deletion
 while(loc < num)
      {
       arr[loc - 1] = arr[loc];
       loc++;
        }
 num--; //number of elements reduced by 1
 
 for(i=0;i<num;i++)
    printf("\n %d" , arr[i]);

 return (0);
 }


