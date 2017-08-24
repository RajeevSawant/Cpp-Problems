
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <new>

using namespace std;

int main ()
{
 int *a, n , number;


 cout <<"Enter the number of elements \n";
 cin >> n;

 // Initialize the random seed
    srand(time(NULL));
 
 a = new (nothrow) int[n];
 
 for (int i = 0; i < n ; i++ ){
   a[i] = rand() % n + 1;
   
   for (int j = 0; j < n; j++){
      if (a[j] != a[i]){
         continue;
      }
      else{
         a[i] = rand() % n + 1;
      }   
   }
 }
 
 cout <<"\nThe Value's generated are as follows \n";
 for (int i = 0; i < n; i++ ){
 cout << a[i] << endl; 
 } 
    
 return 0;
}

