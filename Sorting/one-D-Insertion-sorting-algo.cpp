#include <iostream>
#include <stdio.h>
#include <new>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
int *arr, n, temp, j = 0;
clock_t start, end;
double cpu_time_used;

start = clock(); 
cout << "Enter the number of elements in array \n";
cin >> n;

arr = new (nothrow) int[n];

cout << "Enter the elements \n";
for (int i = 0; i < n; i++){
  cin >> arr[i]; 
  }

//Algorithm for Insertion Sort
for (int i = 0; i < n; i++){
  j = i;
  
  while (j > 0 && arr[j] < arr[j - 1]){
        temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
      } 
   }

cout << "arr[] = {";
for (int i = 0; i < n; i++){
 if (arr[i + 1] != '\0'){  
   cout << arr[i] << " , ";
  }else{
   cout << arr[i]; 
  }
}
cout << "}" << endl;


end = clock();
cpu_time_used = (double)((end - start)/CLOCKS_PER_SEC);

cout <<"Execution Time: " <<setprecision(5) << cpu_time_used << endl;
return 0;
}
 
