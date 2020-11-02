#include "Stack.h"

int main()
{
    // create test papers
    TestPaper* testPaper1 = new TestPaper(1, "James Moore", 1, 80);
    TestPaper* testPaper2 = new TestPaper(2, "Jessica Brown", 1, 95);
    TestPaper* testPaper3 = new TestPaper(3, "Lionel Harley", 1, 76);

    // create stack
    Stack* stack = new Stack();

    // add test papers
    stack->Push(testPaper1);
    stack->Push(testPaper2);
    stack->Push(testPaper3);

    // get last paper
    stack->GetLastTestPaper();

    // count papers
    stack->CountPapers();

    // average test score
    stack->AverageTestScore();
}

