#include <stdio.h>
#include <iostream>
#include <new>
using namespace std;

int main ()
{
 
int *a;
int n, count = 0, sum = 0, Final_sum = 0;
float avg, Final_avg;

 cout << "Enter the number of elements in an array\n";
 cin >> n;
  
 a = new (nothrow) int [n];
 
 cout << "Enter the numbers \n";
 for ( int i = 0; i < n; i++){
  cin >> a[i];
//  cout <<"\n"; 
 }
 
 for ( int i = 0; i < n; i++){
  sum += a[i];
 }  
 
 avg =  float(sum)/n ; 
 

 cout << "The average of the number is " << avg <<endl;
 

 int k = 0;
 while(n != 0){
   if ( int(avg) < a[k]){
      Final_sum += a[k];
      count++;
    }  
    k++;
    --n;
  }
  cout << "Final sum "<<Final_sum << endl;

/*
 for (int k = 0; k < n ; k++){
   if ( int(avg) < a[k]){
      Final_sum += a[k];
      count++;
      } 
 }
*/ 
  Final_avg = Final_sum /float(count);
  cout << "The Final average is " << Final_avg << endl;  
  
  return 0;
}
