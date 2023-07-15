#include <iostream>

using namespace std;

const int MAX = 100;

int knapsack(int capacity, int weights[], int values[], int n) {
    int max_value = 0;
    int curr_weight = 0;

    for (int i = 0; i < n; i++) {
        if (curr_weight + weights[i] <= capacity) {
            max_value += values[i];
            curr_weight += weights[i];
        } else {
            int remaining_capacity = capacity - curr_weight;
            max_value += values[i] * ((double)remaining_capacity / weights[i]);
            break;
        }
    }

    return max_value;
}

int main() {
    int capacity, n;
    int weights[MAX], values[MAX];

    cout << "Enter the capacity of the knapsack: ";
    cin >> capacity;

    cout << "Enter the number of items: ";
    cin >> n;

    cout << "Enter the weights and values of each item:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Item " << i+1 << ":" << endl;
        cin >> weights[i] >> values[i];
    }

    int max_value = knapsack(capacity, weights, values, n);

    cout << "The maximum value that can be obtained is: " << max_value << endl;

    return 0;
}
