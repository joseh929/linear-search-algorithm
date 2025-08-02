#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numbers[]={32,43,22,1,89,55,76,69,99,12,46,25};
   int i=0;
   for(i=0;i<12;i++){
    printf("Index %d is=%d\n",i,numbers[i]);
   }
   printf("Please enter the number you're searching for:\n");
   int userNumber;
   scanf("%d",&userNumber);
   printf("The number you have entered is= %d", userNumber);
   printf("Searching for number %d...\n", userNumber);
   ///Here is where we now start the searching algorithm
   ///In this case we  will use a linear searching algorithm

   for(i=0; i<12; i++){
       if(numbers[i] == userNumber){
        printf("Your Number %d : Found at Index %d",userNumber);
        break;
   }
}



    return 0;
}
