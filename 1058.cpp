#include <iostream>
#include <vector>
using namespace std;
struct Problem{
    int nWrong;
    int score;
    int nChoice;
    int nRight;
    int weight;//用1 2 4 8 16 代表 a 到 e
                // 00001 00010 00100 01000 10000
};
int main()
{
    int nStu, nProb;
    cin >> nStu >> nProb;
    vector<int> stu(nStu);
    vector<Problem> pro(nProb);
    for(int i = 0; i < nProb; i++)
    {
        pro[i].nWrong = 0;
        cin >> pro[i].score >> pro[i].nChoice >> pro[i].nRight;
        pro[i].weight = 0;
        char c;
        for(int j = 0; j < pro[i].nRight; j++)
        {
            cin >> c;
            if(c == 'a') pro[i].weight += 1;
            if(c == 'b') pro[i].weight += 2;
            if(c == 'c') pro[i].weight += 4;
            if(c == 'd') pro[i].weight += 8;
            if(c == 'e') pro[i].weight += 16;
        }
    }
    for(int i = 0; i < nStu; i++)
    {
        stu[i] = 0;
        //cout << "flag" << i << endl;
        // i 为第i个学生
        for(int j = 0; j < nProb; j++)
        {
            //j 为第j道题
            int num;//学生写了几个选项
            char useless;
            cin >> useless >> num;
            int now_weight = 0;
            for(int k = 0; k < num; k++)
            {
                char c;
                cin >> c;
                if(c == 'a') now_weight += 1;
                if(c == 'b') now_weight += 2;
                if(c == 'c') now_weight += 4;
                if(c == 'd') now_weight += 8;
                if(c == 'e') now_weight += 16;
            }
            cin >> useless;
            //cout << now_weight << " ";
            if(now_weight !=  pro[j].weight)
            {
               pro[j].nWrong++;
               continue;
            }
            //cout << "score" << "(" << now_weight << ")";
            stu[i] += pro[j].score;
        }
        //cout << endl;
    }
    for(int i = 0; i < nStu; i++)
    {
        cout << stu[i] << endl;
    }
    int maxWrong = 0;
    //int countW = 0;
    for(int i = 0; i < nProb; i++)
    {
        //if(pro[i].nWrong == maxWrong)
        //    countW++;
        if(pro[i].nWrong > maxWrong)
            maxWrong = pro[i].nWrong;
    }
    if(maxWrong == 0)
        cout << "Too simple";
    else{
        cout << maxWrong;
        for(int i = 0; i < nProb; i++)
        {
            if(pro[i].nWrong == maxWrong)
                cout << " " << i + 1;
        }
    }
    return 0;
}
