#include <stdio.h>

void f(char *st, int i) {
    st[i] = '\0';              // 将字符串的第 i 个字符设置为结束符
    printf("%s\n", st);        // 输出当前截断的字符串
    if (i > 1) f(st, i - 1);   // 递归调用
}

int main() {
    char st[] = "abcd";        // 定义字符串
    f(st, 4);                  // 调用函数
    return 0;
}
