#include <stdio.h>
#include <stdlib.h>

// Hàm chuyển đổi thời gian từ chuỗi "HH:MM" sang số phút
int timeToMinutes(char *timeStr) {
    int hours, minutes;
    sscanf(timeStr, "%d:%d", &hours, &minutes);
    return hours * 60 + minutes;
}

// Hàm tính thời gian làm việc của nhân viên
char* calculateWorkingTime(int n, char **logIn, char **logOut) {
    int totalMinutes = 0;

    for (int i = 0; i < n; i++) {
        int logInMinutes = timeToMinutes(logIn[i]);
        int logOutMinutes = timeToMinutes(logOut[i]);
        totalMinutes += logOutMinutes - logInMinutes;

        // Kiểm tra nếu totalMinutes âm, thêm 24 giờ vào tổng thời gian
        if (totalMinutes < 0) {
            totalMinutes += 24 * 60;
        }
    }

    // Chuyển đổi tổng thời gian làm việc từ số phút sang chuỗi "HH:MM"
    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;
    char *workingTime = (char *)malloc(6); // Đủ chỗ lưu "HH:MM\0"
    sprintf(workingTime, "%d:%02d", hours, minutes);

    return workingTime;
}

int main() {
    int n;
    scanf("%d", &n);

    char **logIn = (char **)malloc(n * sizeof(char *));
    char **logOut = (char **)malloc(n * sizeof(char *));

    // Đọc mảng log vào
    for (int i = 0; i < n; i++) {
        logIn[i] = (char *)malloc(6); // Đủ chỗ lưu "HH:MM\0"
        scanf("%s", logIn[i]);
    }

    // Đọc mảng log ra
    for (int i = 0; i < n; i++) {
        logOut[i] = (char *)malloc(6); // Đủ chỗ lưu "HH:MM\0"
        scanf("%s", logOut[i]);
    }

    // Tính và xuất kết quả
    char *workingTime = calculateWorkingTime(n, logIn, logOut);
    printf("%s\n", workingTime);

    for (int i = 0; i < n; i++) {
        free(logIn[i]);
        free(logOut[i]);
    }
    free(logIn);
    free(logOut);
    free(workingTime);

    return 0;
}
