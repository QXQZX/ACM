#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

typedef struct snake
{
    int x, y;      //坐标
    int direction; //移动方向  上-1  左-2  下-3  右-4
    snake *next;
} * Msnake;

struct food
{
    int x, y;
} F;

char level[5]; //等级
int lengt = 4; //蛇长度
int t1;
int score = 0;
int l;
int n = 0;
snake *creat();
void gotoxy(int x, int y);
void c(int k);
int time();
void ycgb(int k);
void game();
void draw(snake *head);
void newfood(snake *head);
int random();
int direc(char ch);
void key(snake *head, snake *p);
void cls();

int direc(char ch)
{
    if (ch == -32)
    {
        ch = getch();
        if (ch == 72)
            return 1;
        if (ch == 80)
            return 3;
        if (ch == 75)
            return 2;
        if (ch == 77)
            return 4;
    }
    return 0;
}

snake *creat()
{
    snake *head, *p, *q;
    head = (snake *)malloc(sizeof(snake));
    head->x = 28;
    head->y = 10;
    head->direction = 4;
    head->next = NULL;
    p = head;
    for (int i = 0; i < 3; i++)
    {
        q = (snake *)malloc(sizeof(snake));
        p->next = q;
        q->next = NULL;
        q->x = p->x + 2;
        q->y = p->y;
        q->direction = p->direction;
        p = q;
    }
    return head;
}

void showMain()
{
    int i;
    system("title 贪吃蛇");
    system("mode con cols=80 lines=30");
    gotoxy(28, 10);
    c(3);
    printf("欢迎进入贪吃蛇的世界！！");
    gotoxy(0, 0);
    c(252);
    for (i = 0; i < 40; i++)
    {
        printf("▇");
        Sleep(30);
    }
    for (i = 1; i < 25; i++)
    {
        gotoxy(78, i);
        printf("▇");
        Sleep(30);
    }
    for (i = 39; i >= 0; i--)
    {
        gotoxy(2 * i, 25);
        printf("▇");
        Sleep(30);
    }
    for (i = 24; i >= 1; i--)
    {
        gotoxy(0, i);
        printf("▇");
        Sleep(30);
    }
    c(3);
    gotoxy(30, 11);
    printf("请选择难度（1~6）：");
    scanf("%s", level);
    if (level[0] == '1')
        l = 600;
    else if (level[0] == '2')
        l = 400;
    else if (level[0] == '3')
        l = 200;
    else if (level[0] == '4')
        l = 150;
    else if (level[0] == '5')
        l = 100;
    else if (level[0] == '6')
        l = 60;
    else if (level[0] == '0')
        l = 2333;
    cls();
    c(15);
    gotoxy(4, 26);
    printf("等级： %c", level[0]);
    gotoxy(20, 26);
    printf("分数： %d", score);
    gotoxy(4, 27);
    printf("当前长度： %d", lengt);
    gotoxy(20, 27);
    printf("已吃食物个数： %d", n);
    gotoxy(45, 26);
    printf("移动：↑↓←→");
    gotoxy(45, 27);
    printf("暂停or继续：空格");
    gotoxy(67, 27);
    c(2);
    printf("制作：MeiK");
}

void key(snake *head, snake *p)
{
    char ch;
    int i, j;
    if (kbhit())
    {
        ch = getch();
        if (ch == -32)
        {
            i = direc(ch);
            j = p->direction;
            if ((i == 1 && j == 3) || (i == 2 && j == 4) || (i == 3 && j == 1) || (i == 4 && j == 2))
                ;
            else
                p->direction = i;
        }
        else if (ch == 32)
        {
            cls();
            gotoxy(36, 10);
            printf("暂停中");
            while (1)
            {
                if (kbhit() && getch() == 32)
                {
                    gotoxy(36, 10);
                    printf("     ");
                    draw(head);
                    gotoxy(F.x, F.y);
                    c(14);
                    printf("●");
                    break;
                }
            }
        }
    }
}

void cls()
{
    gotoxy(2, 1);
    for (int i = 1; i < 26; i++)
    {
        for (int j = 2; j < 78; j++)
            printf(" ");
        gotoxy(2, i);
    }
}

void game()
{
    snake *head, *p, *q, *s;
    head = creat();
    p = head;
    s = head;
    while (p->next)
        p = p->next;
    draw(head);
    newfood(head);
    while (1)
    {
        q = (snake *)malloc(sizeof(snake));
        p->next = q;
        q->direction = p->direction;
        q->next = NULL;
        switch (p->direction)
        {
        case 1:
            q->x = p->x;
            q->y = p->y - 1;
            break;
        case 2:
            q->x = p->x - 2;
            q->y = p->y;
            break;
        case 3:
            q->x = p->x;
            q->y = p->y + 1;
            break;
        case 4:
            q->x = p->x + 2;
            q->y = p->y;
            break;
        }
        if (q->x == F.x && q->y == F.y)
        {
            gotoxy(p->x, p->y);
            c(15);
            printf("●");
            gotoxy(q->x, q->y);
            c(12);
            printf("◆");
            p = q;
            score = score + (level[0] - '0');
            lengt++;
            n++;
            c(15);
            gotoxy(20, 26);
            printf("分数： %d", score);
            gotoxy(4, 27);
            printf("当前长度： %d", lengt);
            gotoxy(20, 27);
            printf("已吃食物个数： %d", n);
            newfood(head);
        }
        else
        {
            gotoxy(head->x, head->y);
            printf(" ");
            head = head->next;
            free(s);
            gotoxy(head->x, head->y);
            c(12);
            printf("●");
            gotoxy(p->x, p->y);
            c(15);
            printf("●");
            gotoxy(q->x, q->y);
            c(12);
            printf("◆");
            p = q;
        }
        //newfood(head);
        Sleep(l);
        key(head, q);
        if (q->x == 0 || q->x == 78 || q->y == 0 || q->y == 25) //碰墙结束
        {
            cls();
            gotoxy(30, 10);
            printf("您的分数为%d", score);
            Sleep(2500);
            score = 0;
            n = 4;
            lengt = 0;
            return;
        }
        s = head;
        while (s->next)
        {
            if (q->x == s->x && q->y == s->y) //碰自己结束
            {
                cls();
                gotoxy(30, 10);
                printf("您的分数为%d", score);
                Sleep(2500);
                score = 0;
                n = 4;
                lengt = 0;
                return;
            }
            s = s->next;
        }
        s = head;
    }
}

int random() //用来输出随机值
{
    srand(time() + rand()); //将随机数种子初始化
    return rand();          //返回随机数
}

void newfood(snake *head)
{
    snake *p;
    p = head;
    int f = 1;
    F.x = random() % 76 + 1;
    if (F.x & 1)
        F.x++;
    F.y = random() % 24 + 1;
    while (p)
    {
        if (p->x == F.x && p->y == F.y)
        {
            f = 0;
            break;
        }
        p = p->next;
    }
    if (f)
    {
        c(14);
        gotoxy(F.x, F.y);
        printf("●");
    }
    else
        newfood(head);
}

void draw(snake *head)
{
    gotoxy(head->x, head->y);
    c(12);
    printf("●");
    c(15);
    head = head->next;
    while (head->next)
    {
        gotoxy(head->x, head->y);
        printf("●");
        head = head->next;
    }
    c(12);
    gotoxy(head->x, head->y);
    printf("◆");
}

void c(int k) //改变输出字体的颜色
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), k);
}

int time() //用来计时
{
    clock_t t = clock() / CLOCKS_PER_SEC;
    return t;
}

void gotoxy(int x, int y) //移动坐标
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void ycgb(int k) //隐藏光标
{
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    GetConsoleCursorInfo(hOut, &cci);
    cci.bVisible = k; //赋1为显示，赋0为隐藏
    SetConsoleCursorInfo(hOut, &cci);
}

int main()
{
    ycgb(0);
    showMain();
    game();
    while (1)
    {
        gotoxy(2, 1);
        for (int i = 1; i < 26; i++)
        {
            for (int j = 2; j < 78; j++)
                printf(" ");
            gotoxy(2, i);
        }
        gotoxy(32, 10);
        printf("按回车可重新开始游戏！");
        gotoxy(36, 11);
        printf("按Esc可离开游戏！");
        char ch;
        ch = getch();
        while (ch != 13 && ch != 27)
        {
            ch = getch();
        }
        if (ch == 13)
        {
            showMain();
            game();
        }
        else
            break;
    }
    return 0;
}
