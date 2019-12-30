#include <iostream>
#include <string>
using namespace std;

int main(){
//tutorial
    // string s;
    // int a, b, c;

    // cin >> a;
    // cin >> b >> c;
    // cin >> s;

    // cout << a+b+c << " " << s << endl;

//ABCseleccted
//1
    // int a, b;
    // cin >> a >> b;
    // if((a*b)%2){
    //     cout << "Odd" << endl;
    // } else {
    //     cout << "Even" << endl;
    // }
//2
    // int s, cnt = 0;
    // cin >> s;
    // int s_100 = s / 100;
    // int s_10 = (s - (s_100 * 100)) / 10;
    // int s_1 = (s - ((s_100 * 100) + (s_10 * 10)));
    // if(s_100) cnt++;
    // if(s_10) cnt++;
    // if(s_1) cnt++;
    // cout << cnt << endl;
//2s
    string s;
    int cnt = 0;
    cin >> s;
    if(s[0] == '1') cnt++;
    if(s[1] == '1') cnt++;
    if(s[2] == '1') cnt++;
    cout << cnt << endl;
    return 0;
}