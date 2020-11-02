#pragma once

#include <iostream>

using namespace std;

class TestPaper 
{
private:
	int studentId;
	string studentName;
	int assessmentId;
	double grade;

public:
	TestPaper()
	{
		studentId = 0;
		studentName = "";
		assessmentId = 0;
		grade = 0.0;
	}

	TestPaper(int inStudentId, string inStudentName, int inAssessmentId, double inGrade)
	{
		studentId = inStudentId;
		studentName = inStudentName;
		assessmentId = inAssessmentId;
		grade = inGrade;
	}

	double GetGrade()
	{
		return grade;
	}

	void Display()
	{
		cout << "Student ID: " << studentId << endl;
		cout << "Student Name: " << studentName << endl;
		cout << "Assessment ID: " << assessmentId << endl;
		cout << "Grade: " << grade << endl;
	}
};