#pragma once
template<typename T>
class Node
{
public:
	Node* next;
	T data;
	Node() {};
	Node(T data)
	{
		this->data = data;
		this->next = nullptr;
	};
};