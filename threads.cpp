#include <iostream>
#include <algorithm>
#include <vector>
#include <thread>
#include <stdlib.h>

int s=0;

int sum(int *x)
{
    s = s + x;    
}

int main()
{
    int n,m;
    cout << "Введите размер массива: "; 
    cin >> n;
	int* arr = new int[n];
    cout << "Введите количество частей, на которые будет разбит массив"; 
    cin >> m;
    
	for (i = 0; i < n; i++)
		arr[i] = std::rand();
	int* a = arr;
 
    std::vector<std::thread> threads;
    for (int i = 0; i <= m; i++)
    {
        std::thread &t(sum, a);
		t.join();
    }
    return 0;
}