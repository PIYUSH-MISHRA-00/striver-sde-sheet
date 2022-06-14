int search(int *arr, int n, int key)
{
    int low = 0, high = n - 1, mid{};

    if (n > 1 && arr[0] > arr[n - 1])
    {
        while (low <= high)
        {
            mid = low + (high - low) / 2;

            if (arr[mid - 1] > arr[mid])
                break;

            else if (arr[mid] < arr[high])
                high = mid - 1;
            else
                low = mid + 1;
        }
    }

    if (key == arr[mid])
        return mid;

    if (key <= arr[n - 1])
    {
        low = mid + 1;
        high = n - 1;
    }
    else
    {
        low = 0;
        high = mid - 1;
    }

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}