#include <stdio.h>

int inputnum[5];

int findmin(int arr[]) {
    int min = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    printf("첫째 정수를 입력하세요. ");
    scanf("%d", &inputnum[0]);
    printf("둘째 정수를 입력하세요. ");
    scanf("%d", &inputnum[1]);
    printf("셋째 정수를 입력하세요. ");
    scanf("%d", &inputnum[2]);
    printf("넷째 정수를 입력하세요. ");
    scanf("%d", &inputnum[3]);
    printf("다섯째 정수를 입력하세요. ");
    scanf("%d", &inputnum[4]);
    
    int min = findmin(inputnum);  // 함수 리턴값을 저장

    printf("입력하신 값 중에서 최소값은 %d입니다.\n", min);
    
    return 0;
}
