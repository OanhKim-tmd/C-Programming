n=int(input("n="))  
if (n<1):
    print("Not exit") 
else: 
    t=0
    for i in range (1 , n+1):
        if ( i%2==0):
         t=t+i
    print(t)