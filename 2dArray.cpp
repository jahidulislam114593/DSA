#include <bits/stdc++.h>
using namespace std;

#define return_loser return 0;

const int MAX_SIZE = 3; 


int maxRowSum(int matrix[][MAX_SIZE], int rows, int cols) {
    int maxSum = INT_MIN;
    for (int i = 0; i < rows; ++i) {
        int sum = 0;
        for (int j = 0; j < cols; ++j) {
            sum += matrix[i][j];
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int maxColSum(int matrix[][MAX_SIZE], int rows, int cols) {
    int maxSum = INT_MIN;
    for (int j = 0; j < cols; ++j) {
        int sum = 0;
        for (int i = 0; i < rows; ++i) {
            sum += matrix[i][j];
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int rows = 3, cols = 3;
    int matrix[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Output the maximum row and column sums
    cout<< maxRowSum(matrix, rows, cols) << '\n';
    cout<< maxColSum(matrix, rows, cols) << '\n';

    return_loser;
}
