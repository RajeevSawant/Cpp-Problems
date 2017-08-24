#include <stdio.h>
#include <iostream>
#include <new>
using namespace std;


int main()
{
  int *arr, n, k, j = 0, max = 0, l = 0, min =0;

  cout << "Enter the number of elements in an array \n";
  cin >> n; 
   
  arr = new (nothrow) int[n];

  cout << "Enter the Height of the tower\n";
  for (int i = 0; i < n; i++ ){
    cin >> arr[i];
    }

   cout << "Input: arr[] = {";
   for (int i = 0; i < n; i++ ){
     if (arr[i + 1] != '\0'){
        cout << arr[i] << " , "; 
      }else{
        cout << arr[i];
       }   
     }
   cout << "}\n";

   cout << "Enter the value of k\n";
   cin >>  k;
   
   while ( arr[j] != '\0'){
       if ( arr[j] > k){
          arr[j] -= k;
        }else{
          arr[j] += k;
        }
        
        j++;
     }  
   
   cout <<"Output: arr[] = {";
   for (int i = 0; i < n ; i++){
     if (arr[ i + 1] != '\0'){
       cout << arr[i] << " , ";
      }else{
       cout << arr[i];
       }
      }
   cout << "}" << endl;  
    
   max = arr[0];
   min = arr[0]; 
   while (arr[l] != '\0'){
      if ( max < arr[l]){
          max = arr[l];
      }else if (min > arr[l]){
          min = arr[l];
      }  
      l++;
    }
      
   cout << "Maximum difference is " << max - min << endl;


 
}
 
