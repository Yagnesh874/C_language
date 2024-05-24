#include <iostream>
using namespace std;
int main()
{
    int n1;
    int n2;

    cout << "Enter number 1 : ";
    cin >> n1;

    cout << "Enter number 2 : ";
    cin >> n2;

    int ans = 0;
    int ans2 = 0;
    for (int i = 1; i <= 10; i++)
    {
        ans = n1 * i;
        cout << ans;
        cout << "\n";
    }
    for (int i = 1; i <= 10; i++)
    {
        ans2 = n2 * i;
        cout << ans2;
        cout << "\n";
    }
    if(ans == ans2){
        cout<<ans;

    }
    return 0;
}