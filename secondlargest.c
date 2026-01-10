int getSecondLargest(int *arr, int n) {

    // EDGE CASE 1:
    // If array has fewer than 2 elements,
    // second largest does NOT exist.
    if (n < 2) return -1;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {

        // CASE 1:
        // Current element becomes the new largest.
        // Old largest shifts down to secondLargest.
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }

        // CASE 2:
        // Current element is strictly between
        // largest and secondLargest.
        // We use STRICT inequalities to avoid duplicates.
        else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }

        // CASE 3 (implicitly handled):
        // arr[i] == largest  → ignore duplicate max
        // arr[i] <= secondLargest → ignore smaller values
    }

    // EDGE CASE 2:
    // If secondLargest was never updated,
    // it means all elements were equal OR no valid second largest exists.
    if (secondLargest == INT_MIN)
        return -1;

    return secondLargest;
}
