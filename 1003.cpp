#include <iostream>
using namespace std;
int main()
{
	int nInp;
	cin >> nInp;
	while(nInp)
	{
		string s;
		cin >> s;
		bool isC = false;
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] != 'P' && s[i] != 'A' && s[i] != 'T')
			{
				isC = true;
			}
		}
		if(isC)
		{
			cout << "NO" << endl;
			nInp--;
			continue;
		}

        int P1 = 0;
        int P2 = 0;
        int P3 = 0;
        int aP1, aP2, aP3;
        bool isB = false;
        //获得P1 P2 P3
        for(int i = 0; i < s.length(); i++)
        {
            P1 = 0; P2 = 0; P3 = 0;
            if(s[i] == 'P')//找到一个P
            {
                //向前计算P1
                for(int j = i - 1; j >= 0; j--)
                {
                    if(s[j] == 'P' || s[j] == 'T')
                    {
                        break;
                    }
                    else
                        P1++;
                }
                //要向后找到T， 并且计算P2
                bool isFindT = false;
                for(int j = i + 1; j < s.length(); j++)
                {
                    if(s[j] == 'P')
                        break;
                    else if((s[j] == 'A') && (isFindT == false))
                    {
                        P2++;
                        continue;
                    }
                    else
                    {
                        //已找到T并且向后计算P3
                        isFindT = true;
                        for(int k = j + 1; k < s.length(); k++)
                        {
                            if(s[k] == 'P' || s[k] == 'T')
                            {
                                break;
                            }
                            P3++;
                        }
                        break;
                    }
                }
            }
 //           cout << "P1:" << P1 << " P2:" << P2 << " P3:" << P3 << endl;
            if(P2 != 0 && (P1 * P2 == P3))
            {
                isB = true;
                aP1 = P1; aP2 = P2; aP3 = P3;
            }
        }

        for(int i = 0; i < s.length() - 2; i++)
        {
            if(s[i] == 'P' && s[i + 1] == 'A' && s[i + 2] == 'T')
            {
                if(aP1 != aP3)
                    isB = false;
                for(int j = i - 1; j >= 0; j--)
                {
                    if(s[j] != 'A')
                        isB = false;
                }
                for(int j = i + 3; j < s.length(); j++)
                {
                    if(s[j] != 'A')
                        isB = false;
                }
            }
        }
        int tP = 0;
        int tT = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'P')
                tP++;
            if(s[i] == 'T')
                tT++;
        }
        if(tP > 1 || tT > 1 || tP == 0 || tT == 0)
            isB = false;

        if(isB)
        {
            cout << "YES" << endl;
            nInp--;
            continue;
        }

        nInp--;
        cout << "NO" << endl;
	}
	return 0;
}
