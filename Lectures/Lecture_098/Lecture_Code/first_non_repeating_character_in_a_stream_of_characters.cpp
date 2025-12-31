string Solution::solve(string A)
{
    string B = "";
    queue<int> q;
    vector<int> markedArr(26, 0);

    for (int i = 0; i < A.size(); i++)
    {
        int value = A[i] - 'a';
        markedArr[value]++;

        if (markedArr[value] < 2)
            q.push(value);

        while (!q.empty() && markedArr[q.front()] >= 2)
            q.pop();

        if (q.empty())
            B += "#";
        else
            B += (char)(q.front() + 'a');
    }

    return B;
}
