#include<stdio.h>
int main()
{
 int arr[30], ele , num , i , loc;
 
 printf("\n Enter the number of elements:");
 scanf("%d", &num);
 
 for(i=0 ; i<num ; i++)
    {
     scanf("%d", &arr[i]);
     }
 
 printf("\n Enter the element to be inserted:");
 scanf("%d" , &ele);
 
 printf("\n Enter the location");
 scanf("%d" , &loc);
 
 //Create space at the specified location
 for(i=num ; i>=loc ; i--)
    {
     arr[i]=arr[i-1];
      }
 
 num++;
 arr[loc-1]=ele;
 
 //Print out the result of insertion
 for(i=0 ; i<num ; i++)
    printf(" %d" , arr[i]);
 
 return (0);
 }
  
