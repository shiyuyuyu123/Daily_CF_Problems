void _Mo_On()
{
    int n;
    cin>>n;
    int g=0;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        g=__gcd(g,a[i]);
    }
    cout<<"YES"<<endl;
    if(g!=1){
        cout<<"0"<<endl;
    }else{
        int ans=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]&1){
                cnt++;
            }else{
                ans+=cnt/2+cnt%2*2;
                cnt=0;
            }
        }
        ans+=cnt/2+cnt%2*2;
        cout<<ans<<endl;
    }
}
