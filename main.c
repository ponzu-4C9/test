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
        if(!(0 < a && a < 4)){
            continue;
        }
        printf("いくつ減らしますか？ int>>");
        int b;
        scanf("%d",&b);
        char stringyou[256];
        char dialog[256];
        switch (a)
        {
        case 1:
            strcpy(stringyou, "左");
            break;
        case 2:
            strcpy(stringyou, "中央");
            break;
        case 3:
            strcpy(stringyou, "右");
            break;
        }
        printf("YOU>%sの数を%dに減らします\n",stringyou,b);
        printf("%d %d %d\n",x,y,z);
        
        
    }

    return 0;
}
