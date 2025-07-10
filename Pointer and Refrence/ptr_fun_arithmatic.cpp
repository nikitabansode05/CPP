#include<iostream>
using namespace std;

int (*ptrArithmaticOperation) (int, int);

int add(int op1, int op2)
{
	return op1 + op2;
}

int subtract(int op1, int op2)
{
	return op1 - op2;
}

int multiply(int op1, int op2)
{
 	return op1 * op2;
}
	
int divide(int op1, int op2)
 {
	return op1 / op2;
 }

int main(int argc, char** argv) {	
	ptrArithmaticOperation=multiply;	
    ptrArithmaticOperation=add;
	int result=ptrArithmaticOperation(8,6);	 
    int res=ptrArithmaticOperation(8,6);	 	 
	cout<<result;
	return 0;
}