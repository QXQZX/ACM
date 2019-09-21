#include <bits/stdc++.h>
using namespace std;
struct node
{
    int xue;
    int gong;
    int fang;
    int su;
};
int main()
{
    char s[13], s1[14];
    node wo[5], di[10];
    int sum = 0;
    for (int i = 1; i <= 4; i++)
    {
        cin >> s >> wo[i].xue >> wo[i].gong >> wo[i].fang >> wo[i].su >> s1;
        sum += wo[i].xue;
        if (strcmp(s1, "Perseval") == 0)
            wo[i].gong += 78;
        if (strcmp(s1, "Ceniolis") == 0)
            wo[i].gong += 43;
        if (strcmp(s1, "Valgaris") == 0)
            wo[i].gong += 110;
        if (strcmp(s1, "Insania") == 0)
            wo[i].gong += 23;
    }
    di[9].xue = 2333, di[9].gong = 100, di[9].fang = 7;
    di[8].xue = 600, di[8].gong = 34, di[8].fang = 4;
    di[7].xue = 200, di[7].gong = 24, di[7].fang = 3;
    di[6].xue = 400, di[6].gong = 43, di[6].fang = 9;
    di[5].xue = 500, di[5].gong = 34, di[5].fang = 3;
    di[4].xue = 1100, di[4].gong = 65, di[4].fang = 6;
    di[3].xue = 1400, di[3].gong = 90, di[3].fang = 2;

    for (int i = 9; i >= 3; i--)
        cin >> di[i].su;

    int cnt = 0; // 记录回合数
    int k = 9;
    while (1)
    {
        int cntt = 0;
        for (int i = 1; i <= 4; i++)
        {
            if (wo[i].xue > 0)
            {
                for (k = 9; k >= 3; k--)
                {
                    if (di[k].xue > 0)
                    {
                        cnt++;
                        di[k].xue = di[k].xue - (wo[i].gong - di[k].fang);
                        wo[i].xue = wo[i].xue - (di[k].gong - wo[i].fang);

                        if (wo[i].su > di[k].su && di[k].xue > 0)
                        {
                            di[k].xue = di[k].xue - (wo[i].gong - di[k].fang);
                        }
                        else if (wo[i].su < di[k].su && wo[i].xue > 0)
                        {
                            wo[i].xue = wo[i].xue - (di[k].gong - wo[i].fang);
                        }
                        break;
                    }
                }
            }
            else
                cntt++; // 标记我方精灵是否全死掉

            if (k == 2 || cntt == 4) // 兽全挂 k==2 我方全挂 cntt == 4
                break;
        }
        if (cntt == 4 && di[3].xue > 0)
        {
            cout << "BOOM!" << endl;
            break;
        }
        if (di[3].xue <= 0)
        {
            cout << cnt << endl;
            break;
        }
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// #define maxn 12
// int ans;
// map<string,int>jian;
// struct node
// {
//     string str;
//     double xue,gong,fang,su;
//     int big;
//     bool operator<(const node &c)const
//     {
//         return big<c.big;
//     }
// } b[maxn],cp;
// struct edg
// {
//     string ss,dao;
//     double xue,gong,fang,su;
// } data[maxn],tp;
// int main()
// {
//     jian["Perseval"]=78;
//     jian["Ceniolis"]=43;
//     jian["Valgaris"]=110;
//     jian["Insania"]=23;
//     bool flag;
//     queue<edg>que;
//     priority_queue<node>q;
//     for(int i=0; i<4; i++)
//     {
//         cin>>data[i].ss>>data[i].xue>>data[i].gong>>data[i].fang>>data[i].su>>data[i].dao;
//         que.push(data[i]);
//     }
//     for(int i=6; i>=0; i--)
//     {
//         cin>>b[i].su;
//         b[i].big=i;
//     }
//     b[6].xue=2333,b[6].gong=100,b[6].fang=7;
//     b[5].xue=600,b[5].gong=34,b[5].fang=4;
//     b[4].xue=200,b[4].gong=24,b[4].fang=3;
//     b[3].xue=400,b[3].gong=43,b[3].fang=9;
//     b[2].xue=500,b[2].gong=34,b[2].fang=3;
//     b[1].xue=1100,b[1].gong=65,b[1].fang=6;
//     b[0].xue=1400,b[0].gong=90,b[0].fang=2;
//     for(int i=6; i>=0; i--)
//         q.push(b[i]);
//     while(1)
//     {
//         tp=que.front();
//         que.pop();
//         cp=q.top();
//         q.pop();
//         if(tp.su<cp.su)
//         {
//             cp.xue-=(tp.gong+jian[tp.dao]-cp.fang);
//             tp.xue-=(cp.gong*2-2*tp.fang);
//         }
//         else if(tp.su>cp.su)
//         {
//             cp.xue-=(tp.gong+jian[tp.dao]-cp.fang)*2;
//             tp.xue-=(cp.gong-tp.fang);
//         }
//         else
//         {
//             cp.xue-=(tp.gong+jian[tp.dao]-cp.fang);
//             tp.xue-=(cp.gong-tp.fang);
//         }
//         if(cp.xue>0)q.push(cp);
//         if(tp.xue>0)que.push(tp);
//         ans++;
//         if(q.size()==0)
//         {
//             flag=1;
//             break;
//         }
//         if(que.empty())
//         {
//             flag=0;
//             break;
//         }
//     }
//     if(flag)
//         printf("%d\n",ans);
//     else printf("BOOM!\n");
//     return 0;
// }
