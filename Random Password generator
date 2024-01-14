import random

alphabet = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'
           'q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F'
,'G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']

numbers = ['1','2','3','4','5','6','7','8','9','0']

symbols = ['!','@','#','$','%','*','&','(',')','=']

letters = int(input("How many letters you want in your password: "))

sym = int(input("How many symbols you want in your password: "))

num = int(input("How many numbers you want in your password: "))

password = ""
for char in range (1 , letters + 1): 
  password += random.choice(alphabet)

for n in range (1 , num + 1):
  password += random.choice(numbers)

for s in range (1 , sym + 1):
  password += random.choice(symbols)
  
password_list = list(password)
random.shuffle(password_list)
pass_shuffel = ''.join(password_list)

print(pass_shuffel)
