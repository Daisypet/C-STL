//map是一个关联容器，用于存储键值对，并根据键的顺序自动对键进行排序。
//map保证每个键在容器中是唯一的，实现通常基于红黑树（或其他自平衡二叉搜索树）。这使得插入、查找和删除操作的时间复杂度为 O(log n)。
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

//map的构造
#if 0
map<键类型,值类型,比较器> mp;

#endif
int main()
{
    map<int,int> mp;
    map<char,int> mp2;
    cout << mp[2] <<endl;

    mp[2] =1; 
    cout << mp[2] <<endl;
 
    if(mp.find(2) != mp.end())
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    mp.erase(2);
    cout << mp[2] <<endl;

    mp[2] =1;
    cout << mp.count(2)<< endl;

    mp.clear();
    if(mp.empty())
    {
        cout << mp.empty() <<endl;
    }


    map<string,int> a;
    a["awa"] =1;
    a["bwb"] =2;
    //一个键指只能在映射中出现一次

    mp[2]=1;
    mp[3]=2;
    mp[4]=4;
    mp[6]=6;
    
    for(auto pr:mp) //pair对组
    {
        cout << pr.first <<' '<<pr.second<<endl;
    }

    cout <<endl;

    map<string,int> m;
    vector<string> word;
    word.push_back("awa");
    word.push_back("awa");
    word.push_back("awa");
    word.push_back("awa");
    word.push_back("bwb");
    word.push_back("bwb");

    for(int i=0;i<word.size();i++)
    {
        m[word[i]]++;
    }

    for(auto pr:m) 
    {
        cout << pr.first <<' '<<pr.second <<endl;
    }

    return 0;
}


