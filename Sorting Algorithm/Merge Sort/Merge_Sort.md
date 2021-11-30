                                                Merge Sort

1. Tổng quan về Merge Sort

    - Merge Sort là một thuật toán chia để trị. Nó chia mảng thành 2 nửa và hợp nhất theo thứ tự sắp xếp. Nếu mảng có 1 phần tử thì hiển nhiên không chia được thành 2 nửa.

    - Hàm hợp nhất (merge) được sử dụng để hợp nhất 2 nửa. Hợp nhất (arr, l, m, r) là một cách sắp xếp arr[l..m] và arr[m+1...r] được sắp xếp và hợp nhất thành mảng con được sắp xếp.

2.  Kỹ thuật đệ quy trong thuật toán Merge Sort

    - Sau mỗi lần gọi đệ quy cho mảng tử vị trí l đến r thì mảng arr[l..r] sẽ được sắp xếp. 
        
    - Để gọi đệ quy cho mảng arr[l..r], ta gọi đệ quy đến 2 mảng arr[l..m] và arr[m+1..r] điều kiện là l < r, đến khi nào mảng chỉ còn 1 phần tử. đến khi nào mảng chỉ còn một phần tử thì ta sẽ bắt đầu gọi đến hàm merge để trộn hai mảng với nhau.

3. Độ phức tạp thuật toán

    - Khác với QuickSort, Merge Sort có độ phức tạp thuật toán ở cả 3 trường hợp đều là O(nlogn).

    - Và độ phức tạp bộ nhớ là O(n).



