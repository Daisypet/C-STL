#include <iostream>
#include <vector>

using namespace std;

//vector构造
#if 0
int main()
{
    int iarr[]={1,2,3,4,5};

    vector<int> v1(iarr,iarr+5);    //左开右闭区间

    vector<int> v2(3,10);   //存储三个10

    vector<int> v3(v1);     //拷贝构造
    vector<int> v4 = v1;


    //输出检验
    for(int i=0;i<3;i++)
    {
        cout << v2[i] << " " ;
    }

    cout << endl;   //等于输出一个换行符\n 

    return 0;
}
#endif

//vector赋值
#if 0
int main()
{
    vector<int> vecIntA,vecIntB,vecIntC,vecIntD,vecIntE;
    int iarr[]={1,2,3,4,5};

    //将数组iarr中的所有的元素赋值给vectorIntA容器
    vecIntA.assign(iarr,iarr+5);    //assign会将容器原来的数值清空

    //将vecIntA中的所有的元素赋值给vecIntB
    vecIntB.assign(vecIntA.begin(),vecIntA.end());  //end()指向最后一个元素的下一个元素

    //将4个10拷贝到vecIntC
    vecIntC.assign(4,10);

    //使用swap进行交换
    vecIntD.assign(vecIntA.begin()+1,vecIntA.end()-1);

    vecIntD.swap(vecIntC);

    //使用等于号进行重载
    vecIntE = vecIntB;

    //输出检验
    for(int i=0;i<vecIntB.size();i++)
    {
        cout << vecIntB[i] << " ";
    }
    cout << endl;

    for(int i=0;i<vecIntD.size();i++)
    {
        cout << vecIntD[i] << " ";
    }
    cout << endl;

    for(int i=0;i<vecIntC.size();i++)
    {
        cout << vecIntC[i] << " ";
    }
    cout << endl;

    for(int i=0;i<vecIntE.size();i++)
    {
        cout << vecIntE[i] << " ";
    }
    cout << endl;

    

}
#endif

//vector函数
#if 0
vector.size(); //返回容器中元素的个数
vector.empty(); //判断容器是否为空
vector.resize(num); //重新指定容器长度为num，若容器变长则默认值值重新填充新位置，若变短则删除末尾超出长度的元素
vector.resize(num,elem);
#endif

#if 0
int main()
{
    vector<int> v1;
    cout << "v1.size:" << endl;

    if(v1.empty())  //判断是否为空
    {
        cout << "v1 is empty" << endl;
    }

    int iarr[] ={1,2,3,4,5};

    v1.assign(iarr,iarr +5);

    //让容器长度变长
    v1.resize(10);
    for(int i=0;i<v1.size();i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    return 0;
}
#endif


//访问vector元素
#if 0
vector.at(ide); //返回索引idx所指的数据，如果idx越界，则抛出out_of_range异常
vector[ide];
#endif

#if 0
int main()
{
    int a[]={1,2,3,4};
    vector<int> v1(a,a+4);

    v1.at(100) =100;


    return 0;
}
#endif


//vector插入操作
#if 0
vector.insert(pos,elem);
vector.insert(pos,n,elem);
vector.insert(pos,begin,end);   //仍为左闭右开
#endif

#if 0
int main()
{
    //vector 末尾插入元素
    int a[]={1,2,3,4};
    vector<int> v1(a,a+4);

    v1.push_back(10);
    v1.push_back(11);
    for(int i=0;i<v1.size();i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    //删除末尾元素
    v1.pop_back();

    //指定位置插入指定元素
    v1.insert(v1.begin()+3,100);    //第一个参数应为指针

    for(int i=0;i<v1.size();i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    //指定位置插入n个指定元素
    v1.insert(v1.begin()+3,3,200);

    for(int i=0;i<v1.size();i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    //指定元素插入到指定位置
    int b[] ={40,50,60,70,80,100};
    v1.insert(v1.begin()+7,b+1,b+5);    //将数组加入

    for(int i=0;i<v1.size();i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    vector<int> v2 (b,b+6);
    v1.insert(v1.begin(),v2.begin()+1,v2.begin()+4);    //将容器加入

    for(int i=0;i<v1.size();i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

}
#endif

//迭代器
#if 0
vector容器的iterator类型
vector<int> :: iterator iter;
vector容器的迭代器属于"随机访问迭代器"

成员函数:
begin(); 返回指向容器中第一个元素的正向迭代器
end(); 返回指向容器最后一个元素之后一个位置的正向迭代器
rbegin(); 返回指向最后一个元素的反向迭代器 
rend(); 返回指向第一个元素之前一个位置的反向迭代器

#endif

#if 0
int main()
{

    int a[]={1,2,3,4};
    vector<int> vecIntA(a,a+4);

    //构造一个迭代器
    vector<int > :: iterator it;   

    //让迭代器it指向vecIntA容器中的第一个元素
    it = vecIntA.begin();

    //验证
    cout << *it << endl;

    //通过循环的方式使用迭代器遍历元素
    for(it = vecIntA.begin();it != vecIntA.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    it = vecIntA.begin();
    it = it+2;
    cout << *it << endl;

    return 0;
}
#endif

//迭代器失效
int main()
{
    vector<int> vecIntA;
    vecIntA.push_back(1);
    vecIntA.push_back(2);
    vecIntA.push_back(3);
    vecIntA.push_back(4);

    vector<int> :: iterator it = vecIntA.begin()+3;

    //插入元素造成失效
#if 0
    vecIntA.insert(it,10);    //迭代器失效
//使用insert进行插入，容器可能需要扩容，而扩容本质是new一块新的空间，将数据全部迁移过去
//此时地址就会发生改变，原有数据（空间）会被释放，原迭代器就会成为野指针
#endif   

    it = vecIntA.insert(it,10);    //返回插入元素的位置
    cout << *it << endl;

    //删除元素造成失效
    vector<int> cont={1,2,3,3,3,3,4,5,5,5,6};

    vector<int> :: iterator iter;

    //删除元素3
#if 0
    for(iter = cont.begin(); iter != cont.end();iter++)
    {
        if(*iter == 3)    cont.erase(iter);
    }    
    //序列式容器（vector、deque），为数组式容器，删除当前的iterator会使后面所有的iterator失效，
    //删除一个元素会导致后面所有的元素向前移动一个位置，所以不能使用erase(iter++)的方式
#endif

    for(iter = cont.begin(); iter != cont.end();)
    {
        if(*iter == 3)    iter = cont.erase(iter);     //erase(iter)返回一个迭代器，指向原删除元素的位置（后一个元素会前移）
        else    iter++;
    }

    //验证
    for(iter = cont.begin(); iter != cont.end();iter++)
    {
        cout << *iter << " ";
    }   
    cout << endl;



    return 0;

}

//多维数组
#if 0
vector<vector<int>> arr{{1,3},{2,3}};
vector<vector<int>> arr(100,vector<int>(600,1));    //初始构造100行，初始600列的二维数组
#endif

