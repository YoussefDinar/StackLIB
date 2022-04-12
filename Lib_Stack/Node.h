#pragma once
typedef int T;
class Node
{
public:
	Node(T data);
	void afficher() const;
	~Node();
	Node* get_Next() const; // getter en lecture
	void set_Next(Node*); // setter en ecriture
	friend class Stack;
private:
	T Data;
	Node* Next;

};
