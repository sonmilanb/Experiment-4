#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
int x,y;
char confirm;
cout<<"MENU";
cout<<"\t 1. Add"<<endl;
cout<<"\t 2. Subtract"<<endl;
cout<<"\t 3. Multiply"<<endl;
cout<<"\t 4. Divide"<<endl;
cout<<"\t 5. Modulus "<<endl;
do{
cout<<"Enter your choice (choose from 1 to 5): "<<endl;
int option;
cin>>option;
cout<<"Ente your two numbers separated by space: "<<endl;
cin>>x>>y;
//Add
int a;
a=x+y;
//Sub
int b;
b=x-y;
//Mul
int c;
c=x*y;
//Div
int d;
d=x/y;
//Mod
int e;
e=x%y;
switch (option) {
case 1:
cout<<a<<endl;
break;
case 2:
cout<<b<<endl;
break;
case 3:
cout<<c<<endl;
break;
case 4:
cout<<d<<endl;
case 5:
cout<<e<<endl;
}

cout<<"Enter Y to continue the operation";
cin>>confirm;
}
while(confirm=='Y');
}
