#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter Number of elements ";
    cin >> N;
    int LA[N];
    for (int i = 0; i < N; i++)
    {
        cin >> LA[i];
    }
    cout << "Traversing array \n";

    for (int i = 0; i < N; i++)
    {
        cout << LA[i] << " ";
    }
}
