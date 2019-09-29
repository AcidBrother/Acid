#include <iostream>
#include <iomanip>

using namespace std;

int n, m, c, i, j;

const unsigned int nmax = 10;
const unsigned int mmax = 10;


int a[nmax][mmax];
int at[nmax][mmax];

int main() {
    cout<<"Input matrix n and m (<10)\n";
    cin >> n;
    cin >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = (i + 1) * 10 + (j + 1);
            cout<<a[i][j]<<"\t";
        }
        cout <<" \n";
    }
    
    cout <<" \n";
    cout <<" \n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            at[i][j] = a[j][i];
            
            cout<<at[i][j]<<"\t";
        }
        cout <<" \n";

    }
    
}
