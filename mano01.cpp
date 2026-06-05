#include<iostream>
using namespace std;
#define size 5
int arr[size];
int il=0;
int ub=4;
void sort(int,int);
void sum(int,int);
void sort(int a, int b)
{
 for(int i=a; i<=ub; i++)
{
 cout<<arr[i]<<" ";
}
}

int main()
{
  sort(lb, ub);
  return 0;
}
