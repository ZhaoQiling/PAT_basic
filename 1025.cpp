#include <iostream>
#include <stdio.h>
using namespace std;
struct Node
{
    int address;
    int data;
    int next;
};
Node nodeList[100500];
void prNode(int order);
int main()
{
    int head;
    int nNode;
    int k;
    cin >> head >> nNode >> k;
    for(int i = 1; i <= nNode; i++)
    {
        scanf("%d%d%d",&nodeList[i].address,
             &nodeList[i].data,
             &nodeList[i].next);
    }
    for(int i = 1; i <= nNode; i++)
    {
        Node n;
        for(int j = i; j <= nNode; j++)
        {
            if(nodeList[j].address == head)
            {
                n = nodeList[i];
                nodeList[i] = nodeList[j];
                nodeList[j] = n;
                head = nodeList[i].next;
                break;
            }
        }
    }
   // cout << endl;
    //for(int i = 1; i <= nNode; i++)
    //    prNode(i);
    //cout << endl << endl;

    for(int i = k; i >= 1; i--)
    {
        if(i != 1)
        {
            nodeList[i].next = nodeList[i - 1].address;
        }
        else{
            nodeList[i].next = nodeList[k + 1].address;
        }
        if(k == nNode) nodeList[nNode].next = -1;
        prNode(i);
    }
    for(int i = k + 1; i <= nNode; i++)
    {
        prNode(i);
    }
/*
    for(int i = 1; i <= nNode; i++)
    {
        printf("%d %d %d\n",nodeList[i].address,
             nodeList[i].data,
             nodeList[i].next);
    }*/
    return 0;
}
void prNode(int i)
{
    int address = nodeList[i].address;
    if(address < 10000) printf("0");
    if(address < 1000) printf("0");
    if(address < 100) printf("0");
    if(address < 10) printf("0");
    printf("%d ", address);

    printf("%d ", nodeList[i].data);
    if(nodeList[i].next == -1)
    {
        printf("-1");
        return;
    }
    if(nodeList[i].next < 10000) printf("0");
    if(nodeList[i].next < 1000) printf("0");
    if(nodeList[i].next < 100) printf("0");
    if(nodeList[i].next < 10) printf("0");
    printf("%d\n", nodeList[i].next);

}
