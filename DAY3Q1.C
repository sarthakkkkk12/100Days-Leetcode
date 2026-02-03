int missingNum(int *arr, int size) {
     int xorAll = 0, xorArr = 0;

    for (int i = 1; i <= size + 1; i++)
        xorAll ^= i;

    for (int i = 0; i < size; i++)
        xorArr ^= arr[i];

    return xorAll ^ xorArr;
    
    
}
