#pragma once

#include "Node.h"

class Stack
{
private:
	Node* top;

public:
	Stack()
	{
		top = nullptr;
	}

	bool IsEmpty()
	{
		if (top == nullptr)
		{
			return true;
		}

		return false;
	}

	bool IsFull()
	{
		Node* temp = new Node();

		if (temp != nullptr)
		{
			delete temp;
			return false;
		}

		return true;
	}

	void Push(TestPaper* testPaper)
	{
		if (!IsFull())
		{
			Node* temp = new Node(testPaper);

			if (IsEmpty()) {
				top = temp;
			}
			else
			{
				temp->SetNextNode(top);
				top = temp;
			}
		}
		else
		{
			cerr << "Error: Out of Memory. Unable to Add to List" << endl;
		}
	}

	TestPaper* Pop()
	{
		TestPaper* testPaperToRemove;

		if (!IsEmpty())
		{
			Node* temp = top;
			testPaperToRemove = top->GetData();
			top = top->GetNextNode();
			delete temp;

			return testPaperToRemove;
		}
		else
		{
			cout << "List is Empty! Cannot Perform Pop Operation!" << endl;
		}
	}

	void GetLastTestPaper()
	{
		if (!IsEmpty())
		{
			top->DisplayData();
			cout << endl;
		}
		else
		{
			cout << "List is Empty!" << endl;
		}
	}

	int CountPapers()
	{
		int count = 0;

		if (!IsEmpty())
		{
			Stack* tempStack = new Stack();

			// adds data to temporary stack to perform count
			while (!IsEmpty())
			{
				count++;
				tempStack->Push(Pop());
			}

			// returns data to orignal stack after count operation
			while (!tempStack->IsEmpty())
			{
				Push(tempStack->Pop());
			}
		}

		cout << "Number of Papers: " << count << endl;
		return count;
	}

	double AverageTestScore()
	{
		double average = 0.0;
		double sum = 0.0;
		int count = 0;

		if (!IsEmpty())
		{
			Stack* tempStack = new Stack();

			// add data to temporary stack to perform sum calculation
			while (!IsEmpty())
			{
				count++;
				sum += top->GetData()->GetGrade();
				tempStack->Push(Pop());
			}

			// returns data to original stack after performing sum operation
			while (!tempStack->IsEmpty())
			{
				Push(tempStack->Pop());
			}

			average = sum / count;
		}
		cout << "Average Test Score: " << average << endl;
		return average;
	}
};
