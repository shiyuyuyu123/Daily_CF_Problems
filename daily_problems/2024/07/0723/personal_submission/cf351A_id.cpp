void solve()
{
	int n;
	cin>>n;
	int tot=0,cnt=0;
	for(int i=1;i<=2*n;i++){
		string s;
		cin>>s;
		int num=0;
		for(int j=s.size()-3;j<s.size();j++){
			num=num*10+(s[j]-'0');
		}
		tot+=num;
		if(!num) cnt++;
	}
	int ans=1e18;
	for(int i=max(n-cnt,0LL);i<=min(n,2*n-cnt);i++){
		ans=min(ans,abs(1000*i-tot));
	}
	cout<<ans/1000<<"."<<ans/100%10<<ans/10%10<<ans%10;
}
