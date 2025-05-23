#include <stdio.h>
#include <string.h> // strcat
int main(int argc, char const *argv[])
{
    int x = 5;
    int y = 7;
    int z = 9;
    while (1)
    {
        printf("どの数を減らしますか？1:左 2:中央 3:右 int>>");
        int a;
        scanf("%d",&a);
        printf("いくつ減らしますか？ int>>");
        int b;
        scanf("%d",&b);
        char* stringyou;
        switch (a)
        {
        case 1:
            stringyou = "左";
            break;
        case 2:
            stringyou = "中央";
            break;
        case 3:
            stringyou = "右";
            break;
        }
        switch (b)
        {
        case 1:
            break;
        }
        printf("%s\n",stringyou);
    }

    return 0;
}
