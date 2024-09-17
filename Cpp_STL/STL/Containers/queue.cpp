//queue是队列容器，是一种先进先出的容器
//queue容器默认使用deque作为底层容器，而且不能直接列表初始化
//但可以将数据导入序列式容器中，再用序列式容器初始化queue
#include <iostream>
#include <queue>
using namespace std;

//queue容器的出入队
#if 0
queue.back();   //返回最后一个元素
queue.front();  //返回第一个元素，同时该返回值还可以作为表达式的左值
queue.empty();
queue.size();
#endif

int main()
{
    queue<int> qe;
    qe.push(1);
    qe.push(2);
    qe.push(3);

    cout << qe.front() << endl;
    qe.pop();   //队首元素出队
    cout <<qe.front() << endl;

    while(!qe.empty())
    {
        cout << qe.front() << ' ';
        qe.pop();
    }
    cout << endl;

    return 0;
}

//queue容器的拷贝构造和赋值
#if 0
queue(const queue &que)
queue& operator =(const queue &que);
#endif



