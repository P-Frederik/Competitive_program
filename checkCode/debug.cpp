#include<bits/stdc++.h>
#define endl '\n'
#define NAME "file"
#define FOR(l,r,i) for(int i = l; i <= r; i++)
#define ROF(l,r,i) for(int i = r; i >= l; i--)
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)
using namespace std;
const int NTEST = 100;
mt19937_64 gen(time(0));
long long rand(long long l, long long r){
    return uniform_int_distribution<long long>(l,r) (gen);
}
void MakeTest()
{
    ofstream inp("file.inp");
    int n=rand(1,5);
    int m=rand(1,5);
    inp << n << " " << m << '\n';
    //FOR(1,n,i) inp << rand(1,m) << " ";
}
signed main(){
    srand(time(NULL));
    FOR(1, NTEST,i) {
        MakeTest();
        system("file_trau.exe");
        system("file_check.exe");
        if(system("fc file.ans file.out")){
            cout << "TEST " << i << ": Wrong!\n";
            exit(0);
        }
        cout << "TEST "<< i << ": Correct!\n";
        cerr << "time run: " << TIME << "\n";
    }
    return 0;
}
