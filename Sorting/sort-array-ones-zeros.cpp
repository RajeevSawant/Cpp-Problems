#include <stdio.h>
#include <iostream>
#include <new>
#include <array>

using namespace std;

int main()
{
 int  n, j = 0, temp;

  cout << "Enter the number of elements in array \n";
  cin >> n;
  int *arr;
  
  arr = new (nothrow) int[n];
  cout <<"Enter the elements \n";
  for (int i = 0; i < n ; i++){
     cin >> arr[i];
   }

  
  for (int i = 0; i < n; i++){
    j = i;
    while ( j > 0 && (arr[j] < arr[j - 1])){
        temp = arr[j];
         arr[j]= arr[j - 1];
      arr[j - 1]= temp;   
      
      j--;
      }
  } 
  cout << "Output: arr[] = {";
//  auto it = arr.begin();
  for (int i = 0; i < n ; i++){
    if (i + 1 != n){
       cout << arr[i] << " , ";
     }else{
       cout << arr[i];
     }
  }
  cout << "}\n";

return 0;
}
