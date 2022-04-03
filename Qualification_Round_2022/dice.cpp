        #include <bits/stdc++.h>
        using namespace std;
        #define endl              "\n"
        #define int               long long
        #define mem1(x)           memset(x, -1, sizeof (x))
        #define M                 1000000007
        #define MM                998244353
        #define ff                first
        #define pb                push_back
        #define pii               pair<int,int>
        #define rep(i,a,b)        for(long long i=a;i<b;i++)
        #define ss                second
        #define mii               map<int,int>
        #define psi               pair<string,int>
        #define pis               pair<int,string>
        #define GCD(x,y)          (__gcd((x), (y)))
        #define LCM(x,y)          (((x)/__gcd((x), (y)))*(y))
        #define mem0(x)           memset(x, 0, sizeof (x))
        #define all(x)            (x).begin(),(x).end()
        #define IOS ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
        int powmod(int a, int l, int md) {int res = 1; while (l) {if (l & 1)res = res * a % md; l /= 2; a = a * a % md;} return res;}
         
         
        void solve()
        {
            int x,n,f=1;
            vector<int> v;
            vector<int> :: iterator it;

            cin>>n;
         

            rep(i,0,n){
            	cin>>x;
                v.push_back(x);

            }

            sort(v.begin(),v.end());
             

            for(it=v.begin();it<v.end();it++){

                if(*it >= f){
                    f++;
                }

                
            }

            cout<<f-1<<endl;
           
            


           
        }
         
        signed main() {
            IOS;
        
            //sieve();
            int t = 1,tt=1;
            cin >> t;
            while (t--) {
            	cout<<"Case #"<<tt<<": ";
            	solve();
            	tt++;
            }
            return 0;
        }