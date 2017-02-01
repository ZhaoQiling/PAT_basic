#include <stdio.h>
using namespace std;
char afP[10100];
int main()
{
    char sOfN;  scanf("%c", &sOfN);
    int beforeP;    scanf("%d", &beforeP);
    char point;    scanf("%c", &point);
    int lenAfP = 0;
    char count1;
    while(scanf("%c", &count1))
    {
        if(count1 == 'E')
            break;
        afP[lenAfP] = count1;
        lenAfP++;
    }
    char sOfI;  scanf("%c", &sOfI);
    int index;  scanf("%d", &index);
    if(index == 0)
    {
        if(sOfN == '-')
            printf("-");
        printf("%d.", beforeP);
        for(int i = 0; i < lenAfP; i++)
            printf("%c", afP[i]);
        return 0;
    }
    if(sOfN == '-')
        printf("-");

    if(sOfI == '+')
    {
 //       cout << beforeP << afP;
        printf("%d", beforeP);
        for(int i = 0; i < lenAfP; i++)
        {
            if(i == index) printf(".");//+9.123456E+2
            printf("%c", afP[i]);
        }
        for(int i = 0; i < index -lenAfP; i++)
            printf("%d", 0);
    }
    else{//sOfI == '-'
        printf("0.");
        for(int i = 1; i <= index - 1; i++)
        {
            printf("%d", 0);
        }
        //cout << beforeP << afP;
        printf("%d", beforeP);
        for(int i = 0; i < lenAfP; i++)
            printf("%c", afP[i]);
    }
    return 0;
}
