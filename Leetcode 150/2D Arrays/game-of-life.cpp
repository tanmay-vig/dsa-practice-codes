#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void gameOfLife(vector<vector<int>> &board)
    {
        int m = board.size(), n = board[0].size();

        vector<vector<int>> directions = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

        // Step 1: Apply rules in-place with encoding
        for (int r = 0; r < m; r++)
        {
            for (int c = 0; c < n; c++)
            {
                int liveNeighbors = 0;

                // Count live neighbors (only cells originally 1 or marked as 2)
                for (auto &dir : directions)
                {
                    int nr = r + dir[0], nc = c + dir[1];
                    if (nr >= 0 && nr < m && nc >= 0 && nc < n &&
                        (board[nr][nc] == 1 || board[nr][nc] == 2))
                    {
                        liveNeighbors++;
                    }
                }

                // Apply rules
                if (board[r][c] == 1 &&
                    (liveNeighbors < 2 || liveNeighbors > 3))
                {
                    board[r][c] = 2; // Alive → Dead
                }
                if (board[r][c] == 0 && liveNeighbors == 3)
                {
                    board[r][c] = -1; // Dead → Alive
                }
            }
        }

        // Step 2: Convert encoded states to final values
        for (int r = 0; r < m; r++)
        {
            for (int c = 0; c < n; c++)
            {
                if (board[r][c] == -1)
                    board[r][c] = 1;
                if (board[r][c] == 2)
                    board[r][c] = 0;
            }
        }
    }
};

int main()
{

    return 0;
}