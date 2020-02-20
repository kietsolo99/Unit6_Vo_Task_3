#include <iostream>
#include "accounts.h"
using namespace std;

void printArray(int[], int);
void sortArrDesc(int[], int);
int main() 
{
  //Bubble sort Desc method per task 2 of Unit 6 Assignment
  cout << "\nStart: " << cpuTime() << endl;
  sortArrDesc(accountBalances, maxAccounts);
  //calll the sort funtion
  printArray(accountBalances, maxAccounts);
  cout << "\nEnd: " << cpuTime() << endl;
  return 0;
}

//Funtion definition to Print Array
void printArray(int arrayVals[], int size)
{
  cout <<"\nPrinted Values in Array: " << endl;
  for(int i = 0; i < size; i++)
  {
    cout << arrayVals[i] << ",";
  }

}

//Bubble Sort Array Desc
void sortArrDesc(int arrayVals[], int size)
{
int temp = 0;
for (int left = 0; left < size; left++)
{
  for(int right = left + 1; right < size; right++)
  {
    if(arrayVals[right] > arrayVals[left])
    {
      temp = arrayVals[left];
      arrayVals[left] = arrayVals[right];
      arrayVals[right] = temp;
    }
  }
}
  
}
