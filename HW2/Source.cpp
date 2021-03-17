#include<iostream>;
#include<string>;
using namespace std;

template <typename T1, typename T2>
T1 sum(T1 a, T2 b) 
{
	return a + b;
}

template <typename T1, typename T2>
T1 diff(T1 a, T2 b) 
{
	return a - b;
}

template <typename T1, typename T2>
T1 mult(T1 a, T2 b)
{
	return a * b;
}

template <typename T1, typename T2>
T1 div(T1 a, T2 b)
{
	return a / b;
}

template <typename T1, typename T2>
T1 mod(T1 a, T2 b)
{
	return a % b;
}

int operationIndex(char operation) 
{
	int index = -1;
	if (operation == '+') return 0;
	if (operation == '-') return 1;
	if (operation == '*') return 2;
	if (operation == '/') return 3;
	if (operation == '%') return 4;
	return -1;
}


template <class T1, class T2>
T1 calculate(T1 a, T2 b, char operation) 
{
	T1(*ops[5])(T1, T2) = { sum, diff, mult, div, mod };
}



bool operand_1(string* A, char argv[]) 
{
	for (int i = 0; argv[i] != 0; ++i)
	{
		if (A[i] != argv[i])
		{
			return false;
		}
		else return true;
	}
}
bool operand_2(string* A, char argv[]) 
{
	for (int i = 0; argv[i] != 0; ++i)
	{
		if (A[i] != argv[i])
		{
			return false;
		}
		else return true;
	}
}
bool operat(string* A, char argv[]) 
{
	for (int i = 0; argv[i] != 0; ++i)
	{
		if (A[i] != argv[i])
		{
			return false;
		}
		else return true;
	}
}

int main(int argc, char**argv) //argc - кол-во параметров, argv - строчный массив, параметры
{
	string operand1 = "--operand1";
	string operand2 = "--operand2";
	string operation = "--operation";

	string A[3] = { operand1, operation, operand2};

	int op1 = -1;
	int op2 = -1;
	int op3 = -1;

	for (int i = 0; i < argc; i++) 
	{
		if (operand_1(A, argv[i])) op1 = i;
		if (operand_2(A, argv[i])) op2 = i;
		if (operat(A, argv[i])) op3 = i;
	}
	if (op1 == -1 || op2 == -1 || op3 == -1) 
	{
		cout << "error";
	}

	cout << A[0] << " " << A[1] << " " << A[2] << " = " << calculate(A[0], A[2], operationIndex(A[1])) << endl;
	return 0;
}