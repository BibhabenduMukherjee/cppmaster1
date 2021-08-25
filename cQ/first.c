#include <stdio.h>


int main() {
    // Write C code here
   int a[10] ={12,55,53 , 42, 3,7,9, 10 , 33 , 38};
   
   
  
   int max = -1;
    int sum =0;
   
   for(int i =0; i<10 ; i++)
   {  
      
       if(a[i]%2 == 1)
       {
           sum= sum+a[i];
       
           
       }
       if(a[i]%2 ==0)
       {
           sum = 0;
       }
       if(sum > max)
       {
           max = sum;
       }
       
       
   }
   
   printf("%d" , max);
    
    return 0;
}