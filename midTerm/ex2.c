/*:
Fibonacci là một dãy số nguyên trong đó giá trị của số là tổng của hai số liền trước trong dãy. Quy
tắc này được áp dụng từ số thứ ba: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55. Viết hàm nhập số nguyên n
(n≤30) và xuất Fibonacci thứ n. Lưu ý sinh viên phải sử dụng vòng lặp để tính dãy số Fibonacci và
không được phép sử dụng thuật toán đệ quy*/
#include <stdio.h>
int main() {

  int i, n;
  int f[50];

  f[0] = 0, f[1] = 1;
  
  scanf("%d", &n);

  for (i = 2; i < n; ++i) {
    f[i] = f[i-1] + f[i-2];
  }

  printf("%d", f[n-1]);
  return 0;
}