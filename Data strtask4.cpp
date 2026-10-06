#include <iostream>
using namespace std;

#define MAX 10

class BrowserHistory {
    string pages[MAX];
    int top;

public:
    BrowserHistory() {
        top = -1;
    }

    void visit(string page) {
        if (top == MAX - 1) {
            cout << "History is full\n";
            return;
        }

        pages[++top] = page;
        cout << "Visited: " << page << endl;
    }

    void goBack(int times) {
        while (times > 0 && top > 0) {
            top--;
            times--;
        }

        cout << "Current page: " << pages[top] << endl;
    }

    void display() {
        cout << "Browser history: ";

        for (int i = top; i >= 0; i--)
            cout << pages[i] << " ";

        cout << endl;
    }
};

int main() {
    BrowserHistory history;

    history.visit("Google.com");
    history.visit("Youtube.com");
    history.visit("ABCsc.com");
    history.visit("Facebook.com");

    history.display();

    history.goBack(2);

    return 0;
}
