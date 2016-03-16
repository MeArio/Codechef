#include <iostream>
#include <string>

using namespace std;

int main()
{
    string balloons;
    int t;
    cin >> t;
    for(int i = 1;i <= t;i++){
        cin >> balloons;
        int a = 0;
        int b = 0;
        for(int j = 0;j <= balloons.size();j++){
            if(balloons[j] == 'a'){
                a++;
            }else if(balloons[j] == 'b'){
                b++;
            }
        }
        if(a < b){
            cout << a << endl;
        }else{
            cout << b << endl;
        }
    }
    return 0;
}
