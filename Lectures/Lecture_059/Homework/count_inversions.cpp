class Solution
{
public:
    int merge(vector<int> &arr, int s, int mid, int e)
    {
        vector<int> temp(e - s + 1);
        int left = s, right = mid + 1, index = 0, count = 0;

        while (left <= mid && right <= e)
        {
            if (arr[left] <= arr[right])
            {
                temp[index] = arr[left];
                left++;
            }
            else
            {
                count += mid - left + 1;
                temp[index] = arr[right];
                right++;
            }
            index++;
        }

        while (left <= mid)
        {
            temp[index] = arr[left];
            left++, index++;
        }

        while (right <= e)
        {
            temp[index] = arr[right];
            right++, index++;
        }

        index = 0;
        while (s <= e)
        {
            arr[s] = temp[index];
            s++, index++;
        }

        return count;
    }

    int mergeSort(vector<int> &arr, int s, int e)
    {
        if (s == e)
            return 0;

        int mid = s + (e - s) / 2;
        int count1 = mergeSort(arr, s, mid);     // left part
        int count2 = mergeSort(arr, mid + 1, e); // right part

        return count1 + count2 + merge(arr, s, mid, e);
    }

    int inversionCount(vector<int> &arr)
    {
        return mergeSort(arr, 0, arr.size() - 1);
    }
};