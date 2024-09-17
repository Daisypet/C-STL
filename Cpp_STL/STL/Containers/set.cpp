//set容器 (集合) 是标准模板库（STL）的一部分，它是一种关联式容器，用于存储唯一元素，按照一定的顺序自动排序
//set 的底层实现通常是红黑树（自平衡二叉搜索树），因此插入、删除和查找操作的时间复杂度为 O(log n)
//set容器允许列表初始化
#include <iostream>
#include <set>
#include <string>
#include <utility>  // 包含 pair 的头文件

using namespace std;

//set容器的插入与迭代器
#if 0
set<类型，比较器> st;
set.insert(elem);
set.begin();
set.end();
set.rbegin();
set.rend();
#endif

#if 0
int main()
{
    set<int> set1;      //set容器默认升序排序
    set1.insert(2);
    set1.insert(1);
    set1.insert(5);
    set1.insert(4);

    set<int> :: iterator it;
    for(it = set1.begin();it !=set1.end();it++)
    {
        cout <<*it << ' ';
    }
    cout << endl;

    set<int> :: reverse_iterator it2;
    for(it2 =set1.rbegin();it2 !=set1.rend();it2++)
    {
        cout << *it2 <<' ';
    }
    cout << endl;

    return 0;
}
#endif

//set容器的拷贝构造和赋值
#if 0
set(const set &st);
set& operator=(const set &st);
#endif

//set容器的删除
#if 0
set.erase(pos);
set.erase(beg,end);
set.erase(elem);
set.clear();    //清空
set容器不支持使用反向迭代器进行删除元素
如果删除的元素不在set中,erase()函数会返回false,若在set中则返回true
#endif

//set容器的元素排序
#if 0
set<int,less<int>> setIntA;     //升序排序
set<int,greater<int>> setIntB;  //降序排序
set<int>相当于set<int,less<int>>
#endif

#if 0
int main()
{
    set<int> setA ={2,5,3,1};
    set<int,greater<int>> setB ={2,5,3,1};
    set<int> :: iterator ita,itb;

    for(ita =setA.begin();ita!=setA.end();ita++)
    {
        cout << *ita <<' ';
    }
    cout << endl;

    for(itb =setB.begin();itb!=setB.end();itb++)
    {
        cout << *itb <<' ';
    }
    cout << endl;
}
#endif

//set容器的查找
#if 0
set.find(elem);     //查找elem元素，返回指向elem元素的迭代器，如果找不到则返回end()
set.count(elem);    //返回容器中值为elem元素的个数，对set来说，返回值为1或0，对multiset来说，返回值可能大于1
set.lower_bound(elem);  //返回容器中第一个>=elem元素的迭代器
set.upper_bound(elem);  //返回容器中第一个>elem元素的迭代器
#endif

#if 0
int main()
{
    set<int> set={1,2,3,4,5,};
    set<int> :: iterator it;
    it = set.find(10);  //找不到则返回end()
    if(it == set.end())
    {
        cout << "no find" << endl;
    }
    else cout << *it;

}
#endif

//set容器的set.equal_range(elem)函数
#if 0
std::set容器中的 equal_range(elem) 函数用于同时获取一个特定元素在集合中的范围,返回一对迭代器,
分别指向第一个不小于 elem 的元素(lower_bound),以及第一个大于 elem 的元素(upper_bound)
----------------------------------------------------------------------------------------
std::pair 是 C++ 标准库中的一个模板类,用于存储一对相关的值,pair 可以将两个值组合在一起,形成一个二元组,这两个值可以是不同的类型
pair 常用于函数返回多个相关值时，也常用于关联容器(如 std::map)的元素.
#endif

#if 0
int main()
{
    set<int> s={1,3,5,7,9};
    pair<set<int>::iterator, set<int>::iterator> p = s.equal_range(12);

    //边界检查,避免容器为空或elem不存在
    if(p.first != s.end() && p.second != s.end())
    {
        cout << *(p.first) <<endl;
        cout << *(p.second) <<endl;
    }
    else
    {
        cout << "elem is not existent";
    }
   

    return 0;
}
#endif


//函数对象function的用法
#if 0
函数封装
typedef 
#endif


//学生类
class CStudent
{
public:
    CStudent(int ID,string NAME)
    {
        m_ID = ID;
        m_NAME = NAME;
    }
    int m_ID;
    string m_NAME;
};

//伪函数
class StuFunction
{
public:
    bool operator()(const CStudent &s1,const CStudent &s2)const
    {
        return s1.m_ID < s2.m_ID;
    }
};

int main()
{
    set<int> s1,s2;

    //定义一个容器实现存储学生信息
    set<CStudent,StuFunction> stu;
    stu.insert(CStudent(8,"James"));
    stu.insert(CStudent(24,"Kobe"));
    stu.insert(CStudent(10,"MIke"));

    set<CStudent,StuFunction> :: iterator it;
    for(it = stu.begin();it != stu.end() ;it++)
    {
        cout << it->m_ID << " ";
    }
    cout << endl;

    return 0;
}

