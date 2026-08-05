#include <vector>
using namespace std;

class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        if (arr.empty() || arr[0].empty()) return -1;

        int R = arr.size();
        int C = arr[0].size();

        int row = 0;
        int col = C - 1;
        int max_row_index = -1;

        // Traverse from top-right corner
        while (row < R && col >= 0) {
            if (arr[row][col] == 1) {
                max_row_index = row; // Found a row with more 1s
                col--;               // Move left
            } else {
                row++;               // Move down
            }
        }

        return max_row_index;
    }
};