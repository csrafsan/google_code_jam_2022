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
            int j,v[10][10];

            vector<int> v1;
            vector<int> v2;
            vector<int> v3;
            vector<int> v4;

            rep(i,0,3){
            	rep(j,0,4)
            	cin>>v[i][j];
            }

            rep(i,0,3){
            v1.push_back(v[i][0]);
            v2.push_back(v[i][1]);
            v3.push_back(v[i][2]);
            v4.push_back(v[i][3]);

            }

            sort(v1.begin(),v1.end());
            sort(v2.begin(),v2.end());
            sort(v3.begin(),v3.end());
            sort(v4.begin(),v4.end());

            int s1 = v1[0]+v2[0];
            int s2 = s1+v3[0];
            int s3 = s2+v4[0];

            if(v1[0]>=1000000){
            	cout<<1000000<<" "<<0<<" "<<0<<" "<<0<<endl;
            }
            else if(s1>=1000000){
            	cout<<v1[0]<<" "<<1000000-v1[0]<<" "<<0<<" "<<0<<endl;

            }
            else if(s2>=1000000){
            	cout<<v1[0]<<" "<<v2[0]<<" "<<1000000-s1<<" "<<0<<endl;
            }
            else if(s3>=1000000){
            	cout<<v1[0]<<" "<<v2[0]<<" "<<v3[0]<<" "<<1000000-s2<<endl;

            }
            else{
            	cout<<"IMPOSSIBLE"<<endl;
            }









           
            


           
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