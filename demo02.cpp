#include<iostream>
using namespace std;

int arr[5];
int top=-1;

void insert(int a);
void delete();
void show();

int main()
{
insert(10);
insert(100);
insert(490);
insert(20);
show();
delete();
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

void show()
{
if(top==-1)
{
cout<<"stack is empty"<<endl;
}
else
{
cout<<"elements are:"<<endl;
for(int i=top; i<5; i++)
{
 cout<<arr[i]<<" ";
}
cout<<endl;
}
}

void delete()
{
if(top==-1)
{
cout<<"stack is empty"<<endl;
return ;
}
else
{
 arr[top]=0;
 cout<<"element deleted"<<endl;
 top++;
}
}
