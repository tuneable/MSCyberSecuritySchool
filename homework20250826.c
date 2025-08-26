# include <stdio.h>

int main() {
    printf("한 글자를 입력하세요. ");
    char c;
    char str[20] = "";

    scanf("%c", &c);
    if(c >= '0' && c <= '9') {
        strcpy(str, "숫자");
    } else if (c >= 'a' && c <= 'z') {
        strcpy(str, "소문자");
    } else if (c >= 'A' && c <= 'Z') {
        strcpy(str, "대문자");
    } else if (ispunct(c)) {
        strcpy(str, "특수문자");
    }
    printf("입력하신 글자는 %s입니다.\n", str);
    return 0;
}