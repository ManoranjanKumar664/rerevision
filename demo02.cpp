#include<iostream>
using namespace std;

int arr[5];
int top=-1;

void insert(int a); //for inserting a single element 
void delete(); //deleting a single/last element
void show(); //to show all elements
void delseclast(); //to delete the second last element

int main()
{
insert(10);
insert(100);
insert(490);
insert(20);
show();
delete();
show();
delseclast();
show();
return 0;
}

void delseclast()
{
 if(top==-1)
 {
 cout<<"stack is empty"<<endl;
 return;
 }
 else if(top==0)
 {
 cout<<"only one element present, no second "<<endl;
 return;
 }
 else
 {
 int x=top-1;
 arr[x]=0;
 cout<<"element deleted"<<endl;
 }
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
