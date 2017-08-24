#include <iostream>
#include <stdio.h>
#include <new>


using namespace std;

int main()
{
int *arr, n, pos_min, temp;

cout <<"Enter the number of elements \n";
cin >> n;

arr = new (nothrow) int[n];

cout <<" Enter the elements \n"; 
for(int i = 0; i < n; i++){
  cin >> arr[i];
 } 

// Selection sort algorithm

for (int i = 0; i < n - 1; i++){
  pos_min = i;
  for (int j = i + 1; j < n; j++){
    if (arr [j] < arr [pos_min]){
 	pos_min = j;	 
     }
   }
   
   if (pos_min != i){
     temp   = arr[i];
     arr[i] = arr[pos_min];
     arr[pos_min] = temp;
   }
}

 // Print the sorted array 
 cout <<" arr[] : {";
 for (int i = 0; i < n; i++){
   if (arr[i + 1] != '\0'){
     cout <<  arr[i] << " , ";
     }else{
      cout << arr[i];
     } 
  }
  cout << "}" << endl; 
  
return 0;   
}

