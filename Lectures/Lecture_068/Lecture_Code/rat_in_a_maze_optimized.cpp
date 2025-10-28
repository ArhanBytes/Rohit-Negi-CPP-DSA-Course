class Solution
{
public:
    int row[4] = {-1, 1, 0, 0}; // up, down, left, right
    int col[4] = {0, 0, -1, 1}; // up, down, left, right
    string dir = "UDLR";        // up, down, left, right

    bool valid(int i, int j, int n)
    {
        return i >= 0 && j >= 0 && i < n && j < n;
    }

    void generatePath(vector<vector<int>> &maze, int row_index, int col_index, int n, string &path, vector<vector<int>> &isVisited, vector<string> &ans)
    {
        // base case
        if (row_index == n - 1 && col_index == n - 1)
        {
            ans.push_back(path);
            return;
        }

        // recursive approach
        isVisited[row_index][col_index] = 1;
        // shortened the code
        for (int i = 0; i < 4; i++)
        {
            if (valid(row_index + row[i], col_index + col[i], n) && maze[row_index + row[i]][col_index + col[i]] && !isVisited[row_index + row[i]][col_index + col[i]])
            {
                path.push_back(dir[i]);
                generatePath(maze, row_index + row[i], col_index + col[i], n, path, isVisited, ans);
                path.pop_back();
            }
        }

        isVisited[row_index][col_index] = 0;
    }

    vector<string> ratInMaze(vector<vector<int>> &maze)
    {
        // code here
        int n = maze.size(); // no of rows and cols
        if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0)
            return {};

        vector<string> ans;                                  // storing paths
        vector<vector<int>> isVisited(n, vector<int>(n, 0)); // 2d vector that stores the track
        string path;                                         // path string

        generatePath(maze, 0, 0, n, path, isVisited, ans);

        sort(ans.begin(), ans.end()); // arrange in lexicographically smallest order

        return ans;
    }
};