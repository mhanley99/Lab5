// Matthew Hanley
// Lab 5
// COSC 2030
// Lab7MyStack.cpp
// fucntions, etc.

using namespace std;
#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include "Lab7MyStack.h"

void stringstringReversal1(string &input)
{
	stack<char> mystack;
	char buffer;
	for (int index = 0; index < input.length(); index++)
	{
		buffer = input[index];
		mystack.push(buffer);
	}
	while (!mystack.empty())
	{
		int index = 0;
		input[index] = mystack.top();
		mystack.pop();
		index++;
	}
}

void stringstringReversal2(string &input)
{
	vector<char> myvec;
	char buffer;
	for (int index = input.length; index > 0; index--)
	{
		buffer = input[index];
		myvec.push_back(buffer);
	}
	while (!myvec.empty())
	{
		int index = 0;
		input[index] = myvec.back();
		myvec.pop_back();
		index++;
	}
}
