            Recursive Bubble Sort

The usual iterative algorithm. After each for loop, the smallest element in turn will be pushed to the top of the array until the last element is left.

The recursive algorithm we will apply the idea that after each call, the largest element will be pushed to the end of the array. Until the array has only 1 element, it is definitely the smallest element.

        Recursive algorithm

        RecursiveBubbleSort(arr[], n):

            base case n == 1 return

            for loop i = 0 to n - 1 we move largest element to end

            RecursiveBubbleSort(arr[], n - 1)