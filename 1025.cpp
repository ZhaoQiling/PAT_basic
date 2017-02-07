#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
using namespace std;
struct Node{
    int address;
    int data;
    int next;
};
pair<int, int> arr[100500];
int main()
{
    int pMove, total, aim;
    cin >> pMove >> total >> aim;
    vector<Node> nodelist;
    for(int i = 0; i < total; i++)
    {
        int address, data, next;
        cin >> address >> data >> next;
        pair<int, int> p;
        p.first = data;
        p.second = next;
        arr[address] = p;
    }
    if(pMove == -1)
    {
        cout << "-1" << endl;
        return 0;
    }
    while(pMove != -1)
    {
        Node n;
        n.address = pMove;
        n.data = arr[pMove].first;
        n.next = arr[pMove].second;
        nodelist.push_back(n);
        pMove = n.next;
    }
    int start = 0;
    for(int i = 0; i < nodelist.size() / aim; i++)
    {
        reverse(nodelist.begin() + start, nodelist.begin() + start + aim);
        start += aim;
    }
    total = nodelist.size();
    for(int i = 0; i < total; i++)
    {
        if(i != total - 1)
            printf("%05d %d %05d\n", nodelist[i].address, nodelist[i].data, nodelist[i + 1].address);
        else
            printf("%05d %d -1\n", nodelist[i].address, nodelist[i].data);
    }
    return 0;
}
