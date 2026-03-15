#include<iostream>
using namespace std;

int arr[5];
int top=-1;

void insert(int a);

int main()
{
insert(10);
insert(20);
show();
return 0;
}

void insert(int x)
{
if(top==4)
{
 cout<<"stack is full";
}
else
{ 
 top++;
 arr[top]=x;
 cout<<"elements inserted"<<endl;
}
}
