//list是一个双向链表容器，可以高效的进行插入删除元素
//list不能随机存取元素，所以不支持at.(pos)和[]
#include <iostream>
#include <list>
using namespace std;

//list容器头尾元素操作
#if 0
int main()
{
    list<int> lst;

    //头尾添加、移除操作
    lst.push_back(1);   //尾部插入
    lst.push_front(2);  //头部插入

    list<int>::iterator it = lst.begin();
    for(it;it != lst.end();it++)
    {
        cout << *it << ' ';
    }
    cout << endl;

    lst.pop_back();     //删除最后一个元素
    lst.pop_front();    //删除第一个元素

    //返回第一个节点
    lst.push_back(1);   
    lst.push_front(2); 

    int x =lst.front();
    cout << "front:" << x << endl;

    //返回最后一个节点
    int y =lst.back();
    cout << "back:" << y << endl;

    lst.front() = 100;  //将第一个元素赋值为100
    lst.back() = 200;   //将最后一个元素赋值为200

    for(it= lst.begin();it != lst.end();it++)
    {
        cout << *it << ' ';
    }
    cout << endl;



    return 0;
}
#endif

//list迭代器
#if 0
iterator:
list.begin();   //返回容器中第一个元素的迭代器
list.end()      //返回容器中最后一个元素之后的迭代器

reverse_iterator:
list.rbegin();  //返回容器中最后一个元素的迭代器
list.rend();    //返回容器中第一个元素之前的迭代器
#endif

#if 0
int main()
{
    list<int> lst;
    lst.push_back(10);   //尾部插入
    lst.push_front(20);  //头部插入
    lst.push_back(30);
    lst.push_back(40);

    //list容器的反向迭代器
    list<int>:: reverse_iterator rit;
    for(rit = lst.rbegin(); rit !=lst.rend();rit++)
    {
        cout << *rit << " " ;
    }
    cout << endl;


    return 0;
}
#endif

//list容器带参数构造
#if 0
list(n,elem);   //构造函数䩕n个elem拷贝给本身
list(beg,end);  //构造函数将[beg,end)区间中的元素拷贝给本身
list(const list &list);     //拷贝构造函数
#endif

#if 0
int main()
{
    list<int> lst1;
    lst1.push_back(10);   //尾部插入
    lst1.push_front(20);  //头部插入
    lst1.push_back(30);
    lst1.push_back(40);

    // list<int> lst2(lst1.begin()+1,lst1.begin()+2);  //list容器没有迭代器+n的用法

    list<int> ::iterator beg = lst1.begin();
    beg++;

    list<int>::iterator end = lst1.end();
    end--;

    list<int> lst2(beg,end);    //左闭右开

    list<int> ::iterator it;
    for(it = lst2.begin(); it != lst2.end();it++)
    {
        cout << *it << ' ';
    }
    cout << endl;

    list<int> lst3(lst2);

    list<int> ::iterator it3;
    for(it3 = lst3.begin(); it3 != lst3.end();it3++)
    {
        cout << *it3 << ' ';
    }
    cout << endl;


    return 0;
}
#endif

//list容器赋值
#if 0
list.assign(beg,end);   //将[beg,end)区间中的元素拷贝给本身
list.assign(n,elem);
list.swap(lst);     //将lst与本身元素互换
list& operator =(const list &lst)    //重载等号操作符
#endif

//list容器大小
#if 0
list.size();    //返回容器中元素的个数
list.empty(); //判断容器是否为空
list.resize(num); //重新指定容器的长度为num，变长默认值填充，变短末尾元素被删除
list.resize(num,elem);
#endif

//list容器插入
#if 0
list.insert(pos,elem);
list.insert(pos,n,elem);
list.insert(pos,beg,end);   //左闭右开
#endif

//list容器删除
#if 0
list.clear();   //删除容器中所有元素
list.erase(beg,end);    //删除左闭右开区间的数据，返回下一个元素的位置
list.erase(pos);    //删除指定位置pos上的元素，返回下一个元素的位置（元素前移）
list.remove(elem);  //删除容器中所有与elem值匹配的元素
#endif

#if 0
int main()
{
    list<int> lst1;
    lst1.push_back(10);   //尾部插入
    lst1.push_front(20);  //头部插入
    lst1.push_back(30);
    lst1.push_back(40);    

    list<int>:: iterator it1;

    for(it1 = lst1.begin(); it1 !=lst1.end();it1++)
    {
        cout << *it1 << " " ;
    }
    cout << endl;

    list<int> lst2;
    lst2 = lst1;

    //删除指定位置
    it1=lst1.begin();
    it1++;
    it1++;

    it1 = lst1.erase(it1);
    cout << *it1 <<endl;

    for(it1 = lst1.begin(); it1 !=lst1.end();it1++)
    {
        cout << *it1 << " " ;
    }
    cout << endl <<endl;

    //删除指定区间
    list<int> :: iterator beg=lst2.begin();
    beg++;

    list<int> :: iterator end=lst2.end();
    end--;

    cout <<"now end is " << *end <<endl;
    cout <<"delete [" << *beg <<","<<*end << ")" <<endl;

    list<int> :: iterator it2;

    it2 = lst2.erase(beg,end);
    cout << "erase(it2) return the *it2 is " << *it2 <<endl;

    for(it2 = lst2.begin(); it2 !=lst2.end();it2++)
    {
        cout << *it2 << " " ;
    }
    cout << endl <<endl;

    //移除匹配元素
    list<int> lst3;
    lst3.push_back(80);   
    lst3.push_front(30);  
    lst3.push_back(30);
    lst3.push_back(40); 

    list<int> :: iterator it3;
    for(it3 = lst3.begin(); it3 !=lst3.end();it3++)
    {
        cout << *it3 << " ";
    }   
    cout << endl;

    lst3.remove(30);

    for(it3 = lst3.begin(); it3!=lst3.end();it3++)
    {
        cout<< *it3 << " ";
    }
    cout << endl <<endl;

    lst3.clear();
    if(lst3.empty())
    {
        cout << "lst3 is none "<<endl;
    }

    if(lst3.size()==0)
    {
        cout <<"lst3 is none again"<<endl;
    }

    return 0;
}
#endif

//list容器的反转
#if 0
list的反序排列
list.reverse();     //反转链表
#endif

#if 0
int main()
{
    list<int> lst1 ={1,2,3,4};

    //反转list容器
    lst1.reverse();
    list<int> :: iterator it;

    for(it = lst1.begin();it != lst1.end();it++)
    {
        cout << *it << ' ';
    }
    cout <<endl;

    //与list<int> :: reverse_iterator it; 效果相同
    return 0;
}
#endif

//list容器迭代器失效

int main()
{
    //删除节点导致迭代器失效
    //erase()函数将pos位置的空间释放，使it成为野指针
    //erase()函数返回的是被删节点的next指针，即被删除节点的下一个节点的位置
    list<int> lst={1,2,3,3,5,3,6};
    list<int> :: iterator it;


    for(it = lst.begin(); it != lst.end();)
    {
        if(*it == 3)    it=lst.erase(it);
        else    it++;
    }

    for(it =lst.begin();it != lst.end();it++)
    {
        cout << *it <<' ';
    }
    cout <<endl;

    return 0;
}


