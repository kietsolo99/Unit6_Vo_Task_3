#include <iostream>
#include "accounts.h"
#include <algorithm> //to use the sort command
using namespace std;

void printArray(int[], int);
void sortArrDesc(int[], int);
int main() 
{
  //using build-in sort Asc to sort an array
  cout << "\nStart: " << cpuTime() << endl;
  sort(accountBalances, accountBalances+maxAccounts);
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
