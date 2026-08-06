class Solution {
public:
    void pattern18(int n) {
        for (int i = 0; i < n; i++) {
            char ch = 'A' + (n - 1 - i);

            while (ch <= 'A' + (n - 1)) {
                cout << ch << " ";
                ch++;
            }

            cout << endl;
        }
    }
};