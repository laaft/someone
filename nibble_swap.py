x = int(input("Enter a number "))
a=[]
bits = 1 << 7
while(bits > 0):
  if((x & bits)!=0):
    a.append(1)
  else:
      a.append(0)
  bits=bits//2

b =[]
c =[]
for i in range(0,4):
  b.append(a[i])
for i in range(4,8):
    c.append(a[i])
new = c + b
num = 0
k = 7
for i in range(0,8):
  num = num + (new[i]*pow(2,k))
  k =  k-1
print("Resulting number after swapping of two nibbles: "+str(num))  
