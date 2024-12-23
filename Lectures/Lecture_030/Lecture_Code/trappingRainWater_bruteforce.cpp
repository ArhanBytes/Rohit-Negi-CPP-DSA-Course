#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int height[8] = {4, 2, 0, 5, 2, 6, 2, 3};
    int n = sizeof(height) / sizeof(height[0]);

    // making an array of maximum left
    vector<int> leftMax(n);
    leftMax[0] = 0;
    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], height[i - 1]);
    }

    // making an array of maximum right
    vector<int> rightMax(n);
    rightMax[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], height[i + 1]);
    }

    // evaluation of total unit water
    int water = 0, miniHeight;
    for (int i = 0; i < n; i++)
    {
        miniHeight = min(leftMax[i], rightMax[i]);

        if (miniHeight > height[i])
            water += miniHeight - height[i];
    }

    cout << "Total unit of water: " << water << endl;

    return 0;
}