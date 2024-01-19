int indexOfFirstOne(int arr[], int low, int high)
{
    while (low <= high) {
        int mid = low+(high-low) / 2;
        if (arr[mid] == 1 && 
            (mid == 0 || arr[mid - 1] == 0))
            return mid;
        else if (arr[mid] == 1)
            high = mid - 1;
        else
            low = mid + 1;
    }
 
    // required index
    return mid;
}

int posOfFirstOne(int arr[])
{
    int l = 0, h = 1, inc=4;
    while (arr[h] == 0) {
        int temp=h;
        h+=inc;
        l=temp+1;
        inc *= 2;
    }
    return indexOfFirstOne(arr, l, h);
}
