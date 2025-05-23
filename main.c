#include <stdio.h>
#include <string.h> // strcat
int main(int argc, char const *argv[])
{
    int x = 5;
    int y = 7;
    int z = 9;
    printf("%d %d %d\n",x,y,z);
    while (1)
    {
        printf("どの数を減らしますか？1:左 2:中央 3:右 int>>");
        int a;
        scanf("%d",&a);
        if(!(0 < a && a < 4)){
            continue;
        }
        printf("いくつ減らしますか？ int>>");
        int b;
        scanf("%d",&b);
        if(b < 0){
            printf("正の値を入力してください\n");
            continue;
        }
        char stringyou[256];
        char dialog[256];
        switch (a)
        {
        case 1:
            strcpy(stringyou, "左");
            if(x - b < 0){
                printf("大きすぎです。");
                continue;
            }
            x = x - b;
            printf("YOU>%sの数を%dに減らします\n",stringyou,x);
            break;
        case 2:
            strcpy(stringyou, "中央");
            if(y - b < 0){
                printf("大きすぎです。");
                continue;
            }
            y = y - b;
            printf("YOU>%sの数を%dに減らします\n",stringyou,y);
            break;
        case 3:
            strcpy(stringyou, "右");
            if(z - b < 0){
                printf("大きすぎです。");
                continue;
            }
            z = z - b;
            printf("YOU>%sの数を%dに減らします\n",stringyou,z);
            break;
        }
        printf("%d %d %d\n",x,y,z);
        if (x == y && y == z && z == 0){
            printf("あなたの負けです。\n");
            break;
        }

        if(x != 0){
            x = 0;
            printf("COM>xを%dに減らします。\n",x);
        }else if (y != 0){
            y = 0;
            printf("COM>yを%dに減らします。\n",y);
        }else if (z != 0){
            z = 0;
            printf("COM>zを%dに減らします。\n",z);
        }
        printf("%d %d %d\n",x,y,z);
        if (x == y && y == z && z == 0){
            printf("COM WIN\n");
            break;
        }
    }

    return 0;
}
