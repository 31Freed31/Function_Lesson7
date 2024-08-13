#include <iostream>
#include <vector>
using namespace std;

void swapvec(vector<int>& a, int* b)
{
    vector<int> arr;

    for (int i = 0; i < a.size(); i++)
    {
        arr.push_back(a[i]);
    }

    a.clear();

    for (int i = 0; i < arr.size(); i++)
    {
        a.push_back(b[i]);
    }

    for (int i = 0; i < a.size(); i++)
    {
        b[i] = arr[i];
    }

}

int main() {
    setlocale(LC_CTYPE, "rus");

    vector<int> a = { 1,2,3,4 };
    int b[] = { 2,4,6,8 };

    swapvec(a, b);

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < a.size(); i++)
    {
        cout << b[i] << " ";
    }
}