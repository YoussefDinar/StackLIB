#include "pch.h"
#include "Stack.h"
#include<iostream>

Stack::Stack()
{
	this->Top = nullptr;
}

void Stack::push(Node* n)
{
	n->Next = this->Top;
	this->Top = n;
}

void Stack::pop()
{
	Node* tmp = this->Top;

	this->Top = this->Top->Next;
	delete tmp;
	tmp = nullptr;
}

bool Stack::is_empty() const
{
	return (this->Top == nullptr);
}

void Stack::print_stack() const
{
	Node* tmp = this->Top;
	while (tmp != nullptr) {
		tmp->afficher();
		tmp = tmp->Next;
	}
}

Node* Stack::sommet() const
{
	return this->Top;
}

Stack::~Stack()
{

	while (this->is_empty() != true) {
		this->pop();
	}
	std::cout << "destructeur de la classe stack" << std::endl;
}

