n=int(input())
x2=n
x_2=''
while x2>0:
    x_2=str(x2%2)+x_2
    x2//=2

x8=n
x_8=''
while x8>0:
    x_8=str(x8%8)+x_8
    x8//=8

x16=n
x_16=''
sim="0123456789ABCDEF"
while x16>0:
    x_16=sim[x16%16]+x_16
    x16//=16
print(x_2,x_8,x_16)