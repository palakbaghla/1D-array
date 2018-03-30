#include <stdio.h>

int main() {
   int array[100],even[50],odd[50];
   
   int loop, index, e_len, o_len , i ;
   
    printf("\n Enter size of even array: ");

    scanf("%d", &e_len);
     
    printf("\n Enter elements of even array: \n");

    for (i = 0; i < e_len; i++)

    {

        scanf("%d", &even[i]);

    }

    printf("\n Enter size of odd array: ");

    scanf("%d", &o_len);

    printf("\n Enter elements of odd array : \n");

    for (i = 0; i < o_len; i++)

    {

        scanf("%d", &odd[i]);

    }
   
   index = 0;
 
   for(loop = 0; loop < e_len; loop++) {
      array[index] = even[loop];
      index++;
   }
 
   for(loop = 0; loop < o_len; loop++) {
      array[index] = odd[loop];
      index++;
   }

   printf("\nEven -> ");
   
   for(loop = 0; loop < e_len; loop++)
      printf(" %d", even[loop]);
   printf("\nOdd  -> ");
   
   for(loop = 0; loop < o_len; loop++)
      printf(" %d", odd[loop]);

   printf("\nConcat -> ");
   
  
 for(loop = 0; loop < e_len+o_len; loop++)
      printf(" %d", array[loop]);
   
   return 0;
}
