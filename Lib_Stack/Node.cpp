#include "pch.h"
#include "Node.h"
#include <iostream>

Node::Node(T data)
{
	this->Data = data;
	this->Next = nullptr;
}

void Node::afficher() const
{
	std::cout << this->Data << std::endl;
}

Node::~Node()
{
	std::cout << "destructeur de la classe Node" << std::endl;
}

Node* Node::get_Next() const
{
	return  this->Next;
}

void Node::set_Next(Node* n)
{
	this->Next = n;
}