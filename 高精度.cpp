/*典型的高精度算法，使用stl容器存储，相比使用数组效率更高*/
//高精加
vector<int> add(vector<int> &a,vector<int> &b){
    vector<int> c;
    int t=0;
    for(int i=0;i<a.size()||i<b.size();i++){
        if(i<a.size()) t+=a[i];
        if(i<b.size()) t+=b[i];
        c.push_back(t%10);
        t/=10;
    }
    if(t) c.push_back(t);
    return c;
}
//高精乘
vector<int> mul(vector<int> &a,int b){
    vector<int> c;
    int t=0;
    for(int i=0;i<a.size()||t;i++){
        if(i<a.size()) t+=a[i]*b;
        c.push_back(t%10);
        t/=10;
    }
    while(c.size()>1&&c.back()==0) c.pop_back();
    return c;
}
//高精打印
void print(vector<int> &a){
    for(int i=a.size()-1;i>=0;i--){
        cout<<a[i];
    }
    cout << endl;
}
