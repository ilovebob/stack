#include "Stack.h"
#include <vector>

using namespace std;

Stack::Stack() {

}

void Stack::Push(int n) {
    st.push_back(n);
}

void Stack::Pop() {
    st.pop_back();
}

int Stack::Size() {
    return st.size();
}

bool Stack::isEmpty() {
    return st.empty();
}

int Stack::Top() {
    return st.back();
}
