int getSecondLargest(int *arr, int n) {
    // Edge case: less than 2 elements → no second largest
    if (n < 2) return -1;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {

        // CASE 1:
        // If current > largest:
        // update BOTH.
        // (Earlier mistake: forgot that secondLargest must become old largest)
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }

        // CASE 2:
        // Current should be:
        // STRICTLY < largest (to avoid duplicates)
        // STRICTLY > secondLargest (to maintain order)
        // (Earlier mistake: used <= or >= → duplicates broke logic)
        else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }

        // NEVER check secondLargest == INT_MIN inside loop
        // (Earlier mistake: premature check ruined correct updates)
    }

    // Final check AFTER full traversal
    // (Earlier mistake: used '=' instead of '==' → always true bug)
    if (secondLargest == INT_MIN) return -1;

    return secondLargest;
}
