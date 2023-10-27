#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

int main() {
    queue<string> itemQueue;
    stack<string> foodStack, stationeryStack, sportsStack;

    while (true) {
        cout << "Enter an item (food, stationery, sports) or 'exit' to quit: ";
        string item;
        cin >> item;

        if (item == "exit") {
            break;
        }

        itemQueue.push(item);

        if (item == "food") {
            foodStack.push(item);
        } else if (item == "stationery") {
            stationeryStack.push(item);
        } else if (item == "sports") {
            sportsStack.push(item);
        }
    }

    cout << "Food items count: " << foodStack.size() << endl;
    cout << "Food items: ";
    while (!foodStack.empty()) {
        cout << foodStack.top() << " ";
        foodStack.pop();
    }
    cout << endl;

    cout << "Stationery items count: " << stationeryStack.size() << endl;
    cout << "Stationery items: ";
    while (!stationeryStack.empty()) {
        cout << stationeryStack.top() << " ";
        stationeryStack.pop();
    }
    cout << endl;

    cout << "Sports items count: " << sportsStack.size() << endl;
    cout << "Sports items: ";
    while (!sportsStack.empty()) {
        cout << sportsStack.top() << " ";
        sportsStack.pop();
    }
    cout << endl;

    return 0;
}
