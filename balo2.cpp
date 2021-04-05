#include<iostream>
using namespace std;
int main()
{
    int f[101][101];
    int a[101], c[101];
    int n;
    int w;
    cin >> n >> w;//so luong do vat ca khoi' luong cua balo
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> c[i];//trong luong ca gia tri cua tung do vat
    for (int i = 1; i <= w; i++)
        f[0][i] = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= w; j++)
        {
            f[i][j] = f[i - 1][j];
            if (a[i] <= j && f[i][j] < c[i] + f[i - 1][j - a[i]])f[i][j] = c[i] + f[i - 1][j - a[i]];
        }
    cout << f[n][w] << endl;
    return 0;
}