#if 0
Double-Ended Queue ,deque为双端数组,#include <deque>
deque he vector在操作上几乎一模一样,deque多了两个函数
deque.push_front(elem);
deque.pop_front();
#endif

#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d={10,20,30,40};

    //在头部插入元素
    d.push_front(100);

    //构造迭代器
    deque<int> :: iterator it;

    for(it = d.begin(); it != d.end();it++)
    {
        cout << *it <<" ";
    }
    cout <<endl;

    //删除头部元素
    d.pop_front();  //与erase()效率相同

    for(it = d.begin(); it != d.end();it++)
    {
        cout << *it <<" ";
    }
    cout <<endl;

    return 0;
}



