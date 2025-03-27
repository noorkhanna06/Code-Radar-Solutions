

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {

        // swapped variable to signal if there is a
        // swap happened in the inner loop
        // initially set to false
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr + j, arr + j + 1);

                // swapped is set to true if the swap is
                // done
                swapped = true;
            }
        }

        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}

int printArray()
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
