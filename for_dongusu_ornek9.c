#include <stdio.h>
// her saat başı ikiye bölünerek çoğalan bakteri türü vardır,
// 24 saat sonra kaç tane bakteri olur?

int main() 

{
 
 int i;   
 
 int sayi = 1;   
 
 for(i = 1 ; i <= 24 ; i++)
 { 
  sayi *= 2;    
 }
  
 printf("%d",sayi);  // cevap:2^24 = 16.777.216
 
 return 0;

}