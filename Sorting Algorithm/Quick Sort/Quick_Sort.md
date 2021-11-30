                            Quick Sort

1. Giới thiệu về QuickSort

    Giống như Merge Sort, Quick Sort là một thuật toán chia để trị. Nó chọn một phần tử làm chốt(pivot) và chia mảng đã cho xung quanh chốt. Có nhiều phiên bản Quick Sort khác nhau tùy theo các cách chọn pivot khác nhau:
        
        1. Luôn chọn phần tử đầu tiên làm chốt.
        2. Luôn chọn phần tử cuối cùng làm chốt.
        3. Chọn một phần tử bất kỳ làm chốt.
        4. Chọn phần tử trung tâm làm chốt.

    Trong phần source code, tôi sẽ dùng phân hoạch Lomuto và Hoare.

2. Đệ quy trong QuickSort

    Quá trình quan trọng trong Quick Sort là phân vùng. Mục tiêu của phân vùng là, cho một mảng và một phần tử x làm chốt, đặt x vào đúng vị trí của nó trong mảng đã sắp xếp và đặt tất cả các phần tử nhỏ hơn trước x và lớn hơn sau x. 

    Như vậy sau mỗi lần ta phân vùng thì vị trí x sẽ về đúng vị trí. Ta chỉ cần lặp lại tương tự ở 2 mảng trái phải của x cho đến khi mảng chỉ còn 1 phần tử. 

    Kỹ thuật đệ quy ở đây ta chỉ cần phân vùng cho vị trí từ l đến r tại phần tử chốt x rồi gọi đệ quy cho vị trí l đến (x - 1) và (x + 1) đến r.

3. Độ phức tạp thuật toán

    Tổng quát T(n) = T(k) + T(n - k - 1) + O(n)
    
    Worst case: T(n) = T(n - 1) + O(n)
        O(n^2)
    
    Best case:  T(n) = 2T(n/2) + O(n)
        O(nlogn)
    
    Average case: T(n) = T(n/9) + T(9n/10) + O(n) 

