#include<iostream>
using namespace std;

int main() {
string operation;
int a =0;
int b =0;
cout<< "enter the operation  you want to perform"<<endl;
cin>>operation;
cout<< "enter the two numbers" <<endl;
cin>> a >> b ;

if(operation == "add")
	cout<< a + b <<endl;

else if (operation == "subtract")
	cout << a-b <<endl;	

else if (operation == "multiply")
	cout << a * b <<endl;

else 
	cout << a / b <<endl;

return 0;
}
