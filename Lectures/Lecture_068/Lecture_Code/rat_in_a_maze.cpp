class Solution
{
public:
    void generatePath(vector<vector<int>> &maze, int row_index, int col_index, int n, string &path, vector<vector<int>> &isVisited, vector<string> &ans)
    {
        // base case
        if (row_index == n - 1 && col_index == n - 1)
        {
            ans.push_back(path);
            return;
        }

        // recursive approach
        // for upward direction
        if ((row_index > 0) && (maze[row_index - 1][col_index] == 1) && (isVisited[row_index - 1][col_index] == 0))
        {
            isVisited[row_index - 1][col_index] = 1;
            path.push_back('U');
            generatePath(maze, row_index - 1, col_index, n, path, isVisited, ans);
            isVisited[row_index - 1][col_index] = 0;
            path.pop_back();
        }
        // for downward direction
        if ((row_index < n - 1) && (maze[row_index + 1][col_index] == 1) && (isVisited[row_index + 1][col_index] == 0))
        {
            isVisited[row_index + 1][col_index] = 1;
            path.push_back('D');
            generatePath(maze, row_index + 1, col_index, n, path, isVisited, ans);
            isVisited[row_index + 1][col_index] = 0;
            path.pop_back();
        }
        // for left direction
        if ((col_index > 0) && (maze[row_index][col_index - 1] == 1) && (isVisited[row_index][col_index - 1] == 0))
        {
            isVisited[row_index][col_index - 1] = 1;
            path.push_back('L');
            generatePath(maze, row_index, col_index - 1, n, path, isVisited, ans);
            isVisited[row_index][col_index - 1] = 0;
            path.pop_back();
        }
        // for right direction
        if ((col_index < n - 1) && (maze[row_index][col_index + 1] == 1) && (isVisited[row_index][col_index + 1] == 0))
        {
            isVisited[row_index][col_index + 1] = 1;
            path.push_back('R');
            generatePath(maze, row_index, col_index + 1, n, path, isVisited, ans);
            isVisited[row_index][col_index + 1] = 0;
            path.pop_back();
        }
    }

    vector<string> ratInMaze(vector<vector<int>> &maze)
    {
        // code here
        int n = maze.size(); // no of rows and cols
        if (maze[n - 1][n - 1] == 0)
            return {};
        vector<string> ans;                                  // storing paths
        vector<vector<int>> isVisited(n, vector<int>(n, 0)); // 2d vector that stores the track
        string path;                                         // path string

        isVisited[0][0] = 1;
        generatePath(maze, 0, 0, n, path, isVisited, ans);

        sort(ans.begin(), ans.end()); // arrange in lexicographically smallest order

        return ans;
    }
};