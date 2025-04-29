int gcd(int a,int b){
    int c;
    for(int i=1;i<a;i++){
        if(a%i==0&&b%i==0){
            c=i;
        }
    }
    return c;
}