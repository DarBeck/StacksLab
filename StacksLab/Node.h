#pragma once

#include "TestPaper.h"

class Node
{
private:
	TestPaper* data;
	Node* nextNode;

public:
	Node()
	{
		data = nullptr;
		nextNode = nullptr;
	}

	Node(TestPaper* inData)
	{
		data = inData;
		nextNode = nullptr;
	}

	Node(TestPaper* inData, Node* inNextNode)
	{
		data = inData;
		nextNode = inNextNode;
	}

	TestPaper* GetData()
	{
		return data;
	}

	void SetData(TestPaper* inData)
	{
		data = inData;
	}

	Node* GetNextNode()
	{
		return nextNode;
	}

	void SetNextNode(Node* inNextNode)
	{
		nextNode = inNextNode;
	}

	void DisplayData()
	{
		data->Display();
	}

};