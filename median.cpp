#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    srand(time(0));
    int n, temp, median;
    float sum;
    cout << "Masukkan banyak data: ";
    cin >> n;
    int data[n];
    for (int i = 0; i < n; i++)
    {
        data[i] = rand()%100+1;
        cout << data[i] << " ";
    }
    cout << endl;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (data[i] < data[j])
            {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
    if (n % 2 == 0)
    {
        median = (data[n/2] + data[n/2-1]);
        sum = median / 2.0;
        cout << "Median adalah: "<<sum;
    } else {
        median = n / 2;
        sum = data[median];
        cout << "Median adalah: "<< sum;
    }
    cin.get();
    return 0;
}