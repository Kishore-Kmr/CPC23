void rotateArr(int arr[], int d, int n){
        reverse(arr, arr+d%n);
        reverse(arr+d%n, arr+n);
        reverse(arr, arr+n);
}
