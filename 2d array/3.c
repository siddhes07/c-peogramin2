#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Rows आणि Columns enter करा: ";
    cin >> rows >> cols;

    int arr[10][10]; // 10x10 पेक्षा जास्त नको, demo साठी

    // Array मध्ये values घेणे
    cout << "Array values enter करा:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Array print करणे
    cout << "2D Array:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Row-wise sum
    for(int i = 0; i < rows; i++) {
        int sum = 0;
        for(int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        cout << "Row " << i+1 << " sum: " << sum << endl;
    }

    return 0;
}
