int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;
    while(i < j)
    {
        while(i < j && arr[j] >= pivot) j--;
        arr[i] = arr[j];
        while(i < j && arr[i] <= pivot) i++;
        arr[j] = arr[i];
    }
    arr[i] = pivot;
    return i;
}
void q_sort(int arr[], int low, int high)
{
    if(low >= high) return;
    int mid = partition(arr, low, high);
    q_sort(arr, low, mid-1);
    q_sort(arr, mid+1, high);
    return;
}
int main()
{
    int q[] = {3,4,5,7,6,7,9,0};
    q_sort(q, 0, 7);
    for (int i = 0; i < 8; i ++)
        cout << q[i] << ' ';
    return 0;
}
