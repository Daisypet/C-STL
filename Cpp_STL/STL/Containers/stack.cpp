//stack是堆栈容器，遵循"先进后出"
//stack容器没有迭代器，因为栈不允许遍历
//stack容器默认使用deque作为底层容器，而且不能直接列表初始化
//但可以将数据导入序列式容器中，再用序列式容器初始化stack
#include <iostream>
#include <stack>
#include <vector>
#include <deque>
using namespace std;

//stack容器的入出栈和大小
#if 0
stack.push(elem);   //在栈顶加入元素
stack.pop();    //在栈顶删除元素，返回void类型(即没有返回值)  ps:C数据结构中的pop()函数可以返回栈顶元素
stack.size();
stack.empty();
#endif

#if 0
int main()
{
    // 使用vector进行初始化
    vector<int> data = {10, 20, 40, 50, 20};

    // 将vector导入到stack中
    stack<int> stk(deque<int>(data.begin(), data.end()));

    // 输出stack内容以确认（注意：stack只能从顶部依次弹出元素）
    while (!stk.empty())    // while(stk.empty() != true)
    {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;

}
#endif

//stack对象的拷贝构造与赋值
#if 0
stack(const stack &stk);    //拷贝构造函数
#endif

int main()
{
    //默认构造法
    stack<int> stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);

    stack<int> stk2(stk);
    while(!stk2.empty())
    {
        cout << stk2.top() <<' ';
        stk2.pop();
    }
    cout << endl;

    stack<int> stk3 = stk;  //等于调用拷贝构造函数stk3(stk)

    stack<int> stk4 ;
    stk4 =stk;  //调用=符号的重载
}

