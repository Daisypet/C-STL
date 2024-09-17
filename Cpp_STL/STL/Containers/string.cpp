//字符串string
#include <string>
#include <iostream>
using namespace std;

int main()
{
    #if 0
    string s1="awa";
    string s2(5,'K');

    string s3;
    cin >> s3;  //有一次键盘输入

    cout << s2 <<endl;
    cout << s3 <<endl;
   

    string s;
    char buf[100];
    cin >> buf;
    s=buf;
    cout << s <<endl;
    #endif

    string s4(10,'0');
    s4="awa";
    cout << s4 <<endl;
    s4[0] ='t';
    cout << s4 <<endl;

    string s5="123",s6="123";
    if(s5==s6) cout << "equal" <<endl;

    cout << s5+s6 <<endl;
    cout << s5+"awa" <<endl;


    string s7 ="123456789";
    cout <<s7.substr(3)<<endl;
    cout <<s7.substr(3,4)<<endl;

    if(s7.find("312") != string::npos) cout <<"yes"<<endl;

    int x =stoi(s7);
    cout << x <<endl;
    int y =stoll(s7);
    cout << y <<endl;
    int z =stold(s7);
    cout << z <<endl;

    int a = 666;
    string b = to_string(a);
    cout << b <<endl;

    return 0;
}