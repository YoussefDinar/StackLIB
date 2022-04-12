#pragma once
#include"Node.h"
class Stack
{
public:
	Stack();
	void push(Node* n);
	void pop();
	bool is_empty() const;
	void print_stack() const;
	Node* sommet() const;
	~Stack();
private:
	Node* Top;
};

