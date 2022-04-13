#pragma once
#include "pch.h"
#include <iostream>
using namespace std;
template <class T>
class Node
{
public:
	Node(T data);
	void afficher() const;
	~Node();
	void set_Next(Node<T>* );
	template <class T>
	friend class Stack;
private:
	T Data;
	Node<T> *Next;

};

template <class T>
Node<T>::Node(T data)
{
	this->Data = data;
	this->Next = nullptr;
}
template <class T>
void Node<T>::afficher() const
{
	std::cout << this->Data << std::endl;
}


template <class T>
void Node<T>::set_Next(Node<T>* n)
{
	this->Next = n;
}

template <class T>
Node<T>::~Node()
{
	std::cout << "destructeur de la classe Node" << std::endl;
}
