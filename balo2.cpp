#include<iostream>
using namespace std;
int main()
{
    int f[100][100];
    int a[100], c[100], kq[100];
    int n, i, j;
    int w;
    float fl = true;
    cin >> n >> w;                      //so luong do vat ca khoi luong cua balo

    for (int i = 1; i <= n; i++)
        cin >> a[i] >> c[i];            //trong luong ca gia tri cua tung do vat


    for (i = 1; i <= w; i++)
        f[0][i] = 0;


    for (int i = 1; i <= n; i++)
    {
        for (j = 0; j <= w; j++)
        {
            f[i][j] = f[i - 1][j];
            if (a[i] <= j && f[i][j] < c[i] + f[i - 1][j - a[i]])
            {
                f[i][j] = c[i] + f[i - 1][j - a[i]];
                if (fl) kq[j] = 1;
            }
            else kq[j] = 0;
        }
    }


    cout << f[n][w] << endl;
    for (int x = 1; x <= n; x++) {

        cout << kq[x] << " ";
    }


    return 0;
}