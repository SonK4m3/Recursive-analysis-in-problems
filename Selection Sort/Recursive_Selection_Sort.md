            Recursive Selection Sort

Like the selection sort algorithm, we will find the position of the smallest part from position i to n. Then we will swap position i with the position of the smallest element.

We use the recursive function to find the position of the smallest part as follows: We will recursively call from position i + 1 until i is equal to the last position, then we will return the value, otherwise we will compare 2 recursively called value and position value i.

Recursive selector function: We will call to find the position of the smallest element from position i to n, if i equals n, the array is sorted, otherwise we will swap the 2 smallest elements with element under review. Continue calling recursively to the next element.