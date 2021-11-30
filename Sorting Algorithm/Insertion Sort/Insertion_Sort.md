            Recursive Insertion Sort

    We known Insertion Sort is a simple sorting algorithm that works the way we sort playing cards in our hands.

    when calling recursively to position n, we find the nth element so that we add to the end of the n - 1 sorted sequence into a sorted sequence. As long as the sequence has 1 or 0 elements left, the sequence is obviously sorted.

    Below is an iterative algorithm for insertion sort

    Algorithm:

        // Sort an arr[] of size n
        insertionSort(arr, n)
            Loop from i = 1 to n - 1
                a) Pick element arr[i] and insert 
                it into sorted sequence arr[0...i-1]

    Recursive algorithm:

        RecursiveInsertionSort(arr, n)
            if n <= 1 return arr[1...n]         // base case
            Let arr' = RecursiveInsertionSort(arr, n - 1)
            arr'.add(arr[n])
            Let j = n
            While arr[j] < arr[j - 1] and j >= 1 do:
                swap(j, j - 1)
                Let j = j - 1
            Endfor
        Return arr'[1....n - 1]



