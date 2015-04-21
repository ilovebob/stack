#include <vector>
#ifndef STACK_H
#define STACK_H

using namespace std;

class Stack {
    private:
        vector<int> st;
    public:
        Stack();
        void Push(int n);
        void Pop();
        int Size();
        bool isEmpty();
        int Top();
};

#endif // STACK_H
