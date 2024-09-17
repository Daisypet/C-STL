//pair (二元组)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,int> p1 ={1,3};
    pair<int,int> p2 =make_pair(1,3);
    cout << p1.first << " " << p1.second << endl;

    if(p1 == p2)    cout << "yes" << endl;

    pair<char,int> p{'a',2};
    cout << p.first << " " << p.second << endl;

    //三元组
    pair<pair<int,int>,int> p3;


    return 0;
}



