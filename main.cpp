#include <iostream>
#include <vector>
#include "Stack.h"

using namespace std;

int main() {
    Stack s;
    s.Push(5);
    s.Push(6);
    s.Push(7);
    while (s.isEmpty()==0) {
        cout << "size:"<<s.Size() << endl;
        cout << "top:"<<s.Top() << endl;
        s.Pop();
    }
    return 0;
}
