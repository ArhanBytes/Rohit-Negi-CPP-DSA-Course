class Solution
{
public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {

        for (int i = n - 2; i >= 0; i--)
        {
            bool isSwap = 0;
            for (int j = 0; j <= i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    isSwap = 1;
                }
            }
            if (!isSwap)
                break;
        }
    }
}