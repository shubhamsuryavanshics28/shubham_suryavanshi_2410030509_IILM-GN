#include<iostream>
#include<vector>
using namespace std;

// Function to compute sum of elements inside rectangle (l1, r1) to (l2, r2)
int rectanglesum(vector<vector<int> >& matrix, int l1, int r1, int l2, int r2) {
    int n = matrix.size();
    int m = matrix[0].size();

    // Step 1: Build prefix sum row-wise
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < m; j++) {
            matrix[i][j] += matrix[i][j - 1];
        }
    }

    // Step 2: Build prefix sum column-wise
    for (int j = 0; j < m; j++) {
        for (int i = 1; i < n; i++) {
            matrix[i][j] += matrix[i - 1][j];
        }
    }

    // Step 3: Optional — Print prefix sum matrix
    cout << "Prefix Sum Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Step 4: Compute the rectangle sum using inclusion-exclusion
    int total_sum = matrix[l2][r2];

    int top_sum = 0;
    if (l1 > 0) {
        top_sum = matrix[l1 - 1][r2];
    }

    int left_sum = 0;
    if (r1 > 0) {
        left_sum = matrix[l2][r1 - 1];
    }

    int topleft_sum = 0;
    if (l1 > 0 && r1 > 0) {
        topleft_sum = matrix[l1 - 1][r1 - 1];
    }

    int result = total_sum - top_sum - left_sum + topleft_sum;

    return result;
}

int main() {
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    // Input matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Input rectangle coordinates
    int l1, r1, l2, r2;
    cout << "Enter rectangle top-left (l1 r1) and bottom-right (l2 r2) indices: ";
    cin >> l1 >> r1 >> l2 >> r2;

    // Show original matrix
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Compute and print rectangle sum
    int sum = rectanglesum(matrix, l1, r1, l2, r2);
    cout << "Sum of rectangle: " << sum << endl;

    return 0;
}
