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
#include <list>
#include "Lab7MyStack.h"

void stringstringReversal1(string &input)
{
	stack<char> thestack;
	char buffer;
	for (int index = 0; index < input.length(); index++)
	{
		buffer = input[index];
		thestack.push(buffer);
	}
	int index = 0;
	while (!thestack.empty())
	{
		input[index] = thestack.top();
		thestack.pop();
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
	int index = 0;
	while (!myvec.empty())
	{
		input[index] = myvec.back();
		myvec.pop_back();
		index++;
	}
}

void stringstringReversal3(string &input)
{
	list<char> mylist;
	char buffer;
	for (int index = 0; index < input.length; index++)
	{
		buffer = input[index];
		mylist.push_back(buffer);
	}
	int index = 0;
	while (!mylist.empty())
	{
		input[index] = mylist.back();
		mylist.pop_back();
		index++;
	}
}

bool isEmpty(mystack &test)
{
	if (test.input.empty() == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void push(mystack &test, char &c)
{
	test.input.push_back(c);
}

char pull(mystack &test)
{
	char element;
	element = test.input.back();
	test.input.pop_back;
	return element;
}

void stringstringReversal4(string &input)
{
	mystack thestack;
	char buffer;
	for (int index = 0; index < input.length; index++)
	{
		buffer = input[index];
		thestack.push(buffer);
	}
	int index = 0;
	while (!(thestack.isEmpty() == false))
	{
		input[index] = thestack.pull();
	}
}
