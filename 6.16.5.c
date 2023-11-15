#include <stdio.h>
int main(void)
{
    char ch_end, ch;
    int space, line;

    printf("输入一个大写字母：\n");
    scanf("%c", &ch_end);
    getchar();
    for(line = 0; line <= ch_end - 'A'; line++)     // 控制行数
    {
        for(space = ch_end - 'A' - line; space >= 0; space--)      // 控制空格
            printf(" ");
        for(ch = 'A'; ch <= line + 'A'; ch++)       // 升序
            printf("%c", ch);
        for(ch = line + 'A' - 1; ch >= 'A'; ch--)       // 降序
            printf("%c", ch);
        printf("\n");
    }

    getchar();
    return 0;
}