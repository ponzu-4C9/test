#include <stdio.h>
#include <string.h> // strcat
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    srand((unsigned int)time(NULL)); // 乱数の初期化
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
            printf("YOU WIN!\n");
            break;
        }
        // COMのターン
        a = 0;
        b = 0;
        int c = 0;

        if(x){
            a = 1;
        }
        if(y){
            b = 1;
        }
        if(z){
            c = 1;
        }

        int d = a + b*2 + c*4;
        
        switch (d)
        {
            case 1:
                x = 0;
                printf("COM>%sの数を%dに減らします\n","左",x);
                break;
            case 2:
                y = 0;
                printf("COM>%sの数を%dに減らします\n","中央",y);
                break;
            case 4:
                z = 0;
                printf("COM>%sの数を%dに減らします\n","右",z);
                break;
            case 3:
                int r = rand() % 2;// 0 or 1
                if(r == 0){
                    x--;
                    printf("COM>%sの数を%dに減らします\n","左",x);
                }else{
                    y--;
                    printf("COM>%sの数を%dに減らします\n","中央",y);
                }
                break;
            case 5:
                r = rand() % 2;// 0 or 1
                if(r == 0){
                    x--;
                    printf("COM>%sの数を%dに減らします\n","左",x);
                }else{
                    z--;
                    printf("COM>%sの数を%dに減らします\n","右",z);
                }
                break;
            case 6:
                r = rand() % 2;// 0 or 1
                if(r == 0){
                    y--;
                    printf("COM>%sの数を%dに減らします\n","中央",y);
                }else{
                    z--;
                    printf("COM>%sの数を%dに減らします\n","右",z);
                }
                break;
            case 7:
                r = rand() % 3;// 0 or 1 or 2
                if(r == 0){
                    x--;
                    printf("COM>%sの数を%dに減らします\n","左",x);
                }else if(r == 1){
                    y--;
                    printf("COM>%sの数を%dに減らします\n","中央",y);
                }else{
                    z--;
                    printf("COM>%sの数を%dに減らします\n","右",z);
                }
                break;
            
        }
        printf("%d %d %d\n",x,y,z);
        if (x == y && y == z && z == 0){
            printf("あなたの負けです。\n");
            break;
        }
    }

    return 0;
}
