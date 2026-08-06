class Solution {
public:
    void pattern22(int n) {
          int size = 2 * n - 1;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {

                int top = i;
                int left = j;
                int bottom = size - 1 - i;
                int right = size - 1 - j;

                int layer = min(min(top, bottom), min(left, right));

                cout << n - layer << " ";
            }
            cout << endl;
        }
    }
};