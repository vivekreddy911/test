#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(1);
    q.push(5);
    q.push(3);
    q.push(6);
    q.push(2);
    q.push(0);

    int sum = 0;
    while (!q.empty()) {
        sum += q.front(); 
        q.pop();         
    }
    cout << "Sum of all elements in the queue: " << sum <<endl;
    return 0;
    
