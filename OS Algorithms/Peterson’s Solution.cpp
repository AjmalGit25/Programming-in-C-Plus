#include <iostream>
#include <thread>
#include <atomic>
using namespace std;

// Shared variables for Peterson's Solution
atomic<bool> flag[2] = {false, false};
atomic<int> turn{0};

int counter = 0;

// Enter the critical section
void lock(int self) {
    int other = 1 - self;

    flag[self] = true;
    turn = other;

    while (flag[other] && turn == other) {
        // Busy waiting
    }
}

// Exit the critical section
void unlock(int self) {
    flag[self] = false;
}

void incrementCounter(int self) {
    for (int i = 0; i < 100000; i++) {
        lock(self);

        // Critical Section
        counter++;

        unlock(self);
    }
}

int main() {
    thread t1 (incrementCounter, 0);
    thread t2 (incrementCounter, 1);

    t1.join();
    t2.join();

    cout << "Final Counter: " << counter << endl;

    return 0;
}
