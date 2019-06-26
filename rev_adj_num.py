num=int(input())
p=1 
val=0
while num>=p:
    r=(num//p)%100
    num=num-(r)*p+(((r%10)*10)+r//10)*p 
    p*=100
print(num)
