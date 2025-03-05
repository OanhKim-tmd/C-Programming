int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    //bien dem: count variable
    int count = 0; //so luong uoc
    for (int i = 1;i<=n;i++){
        if (n%i==0){
            // printf("%d ",i);
            count = count +1;
        }
    }

    if (count == 2){ //chi co hai uoc la 1 va n
        printf("%d la so nguyen to",n);
    }
    else{
        printf("%d khong phai la so nguyen to",n);
    }

    return 0;
}