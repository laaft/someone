print('Number encryption')
num = int(input("Enter a number"))
primary_key = 1111111112
en = num ^ primary_key
print("Encrypted number "+str(en))
den = en ^ primary_key
print("Decrypted number "+str(den))
