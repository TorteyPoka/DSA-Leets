#include<iostream>

using namespace std;

int n;

int Hash(int key)
{
    return key % n;
}

int main()
{
    int key, h, flag(0);
    cout << "Enter the size of the hash table: ";

    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        a[i] = -1;

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> key;
        h = Hash(key);
        if(a[h] == -1)
            a[h] = key;
        else
        {
            while(a[h] != -1)
            {
                h = (h + 1) % n;
                if(h == Hash(key))
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
                break;
            else
                a[h] = key;
        }
    }
    if(flag == 1)
        cout << "Hash table is full.";
    else
    {
        cout << "Hash table is: ";
        for(int i = 0; i < n; i++)
            cout << a[i] << " ";
    }
    return 0;
}