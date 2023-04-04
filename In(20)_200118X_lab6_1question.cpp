#include <iostream>
#define MAX_SIZE 100 // Maximum size of stack

using namespace std;

class Stack {
    private:
        int arr[MAX_SIZE];
        int top;
    public:
        Stack() {
            top = -1;
        }
        void push(int x) {
            if (top >= MAX_SIZE - 1) {
                cout << "Stack_Overflow" << endl;
                return;
            }
            arr[++top] = x;
        }
        int pop() {
            if (top < 0) {
                cout << "Stack_Underflow" << endl;
                return -1;
            }
            int x = arr[top--];
            return x;
        }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    return 0;
}
