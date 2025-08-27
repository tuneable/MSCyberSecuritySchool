# include <stdio.h>
# include <string.h>
# include <ctype.h>
char c;
char str[20] = "";

char* separator(char ch) {
    if(ch >= '0' && ch <= '9') {
        strcpy(str, "숫자");
    } else if (ch >= 'a' && ch <= 'z') {
        strcpy(str, "소문자");
    } else if (ch >= 'A' && ch <= 'Z') {
        strcpy(str, "대문자");
    } else if (ispunct(ch)) {
        strcpy(str, "특수문자");
    }
    return str;
}

int main() {
    printf("한 글자를 입력하세요. ");
    

    scanf("%c", &c);
    separator(c);
    printf("입력하신 글자는 %s입니다.\n", str);
    return 0;
}