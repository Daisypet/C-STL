//priority_queue优先队列，提供常数时间的最大元素查找，对数时间的插入与提取，底层原理是二叉堆
//仅堆顶可读，堆中所有元素不可读，所有元素不可写
#include <queue>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*`priority_queue<类型, 容器, 比较器> pque`*/

    priority_queue<int> pque;   //默认大顶堆
    pque.push(1);
    cout << pque.top() << endl;
    pque.push(2);
    cout << pque.top() << endl;
    pque.push(4);
    cout << pque.top() << endl;
    pque.push(3);
    cout << pque.top() << endl; //输出最大值

    pque.pop(); //弹掉最大值
    cout << pque.top() << endl << endl;

    //小顶堆
    priority_queue<int,vector<int>,greater<int>> p;
    p.push(1);
    cout << p.top() << endl;
    p.push(3);
    cout << p.top() << endl;
    p.push(4);
    cout << p.top() << endl;
    p.push(5);
    cout << p.top() << endl <<endl;

    //修改元素
    int x = p.top();
    p.pop();
    p.push(x+1);
    cout << p.top() << endl;
    return 0;
}

