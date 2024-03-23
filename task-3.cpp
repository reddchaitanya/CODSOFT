#include<iostream>
using namespace std;
int main()
{
	int n1,n2,result;
	char operatorr;
	cout<<"CALCULATOR"<<endl;
	cout<<"Enter first number:"<<endl;
	cin>>n1;
	cout<<"Enter second number:"<<endl;
	cin>>n2;
	cout<<"Choose the operator(+,-,*,/,%):"<<endl;
	cin>>operatorr;
	switch(operatorr){
		case '+': result=n1+n2;
				  cout<<"Result:"<<n1<<"+"<<n2<<"="<<result;
				  break;
		case '-': result=n1-n2;
				  cout<<"Result:"<<n1<<"-"<<n2<<"="<<result;
				  break;
		case '*': result=n1*n2;
				  cout<<"Result:"<<n1<<"*"<<n2<<"="<<result;
				  break;
		case '/': if(n2!=0){
							result=n1/n2;
				  			cout<<"Result:"<<n1<<"/"<<n2<<"="<<result;
		            }else{
		            	cout<<"Error:Division by Zero!"<<endl;
					}
				  break;
		case '%': result=n1%n2;
				  cout<<"Result:"<<n1<<"%"<<n2<<"="<<result;
				  break;
		default: cout<<"Error:Invalid operator!"<<endl;
	}
	return 0;
}
