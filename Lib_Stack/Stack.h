#pragma once
#include<iostream>
#include "pch.h"
#include"Node.h"

using namespace std;

template <class T>
class Stack 
{
public:
	Stack();
	void push(Node<T>* n);
	void pop();
	bool is_empty() const;
	void print_stack() const;
	Node<T>* sommet() const;
	~Stack();
private:
	Node<T>* Top;
};

template <class T>
Stack<T>::Stack()
{
	this->Top = nullptr;
}

template <class T>
void Stack<T>::push(Node<T>* n)
{
	n->Next = this->Top;
	this->Top = n;
}
template <class T>
void Stack<T>::pop()
{
	Node<T>* tmp = this->Top;

	this->Top = this->Top->Next;
	delete tmp;
	tmp = nullptr;
}
template <class T>
bool Stack<T>::is_empty() const
{
	return (this->Top == nullptr);
}
template <class T>
void Stack<T>::print_stack() const
{
	Node<T>* tmp = this->Top;
	while (tmp != nullptr) {
		tmp->afficher();
		tmp = tmp->Next;
	}
}
template <class T>
Node<T>* Stack<T>::sommet() const
{
	return this->Top;
}
template <class T>
Stack<T>::~Stack()
{

	while (this->is_empty() != true) {
		this->pop();
	}
	std::cout << "destructeur de la classe stack" << std::endl;
}
