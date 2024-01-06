print("WELCOME TO THE LOVE CALCULATOR")
print("LET'S CALCULATE YOUR LOVE SCORE WITH YOUR PARTNER")

name1 = input("Enter your name: ")
name2 = input("Enter their name: ")

combined_names = name1 + name2
lower_names = combined_names.lower()

t = lower_names.count("t")
r = lower_names.count("r")
u = lower_names.count("u")
e = lower_names.count("e")

first_digit = t + r + u + e

l = lower_names.count("l")
o = lower_names.count("o")
v = lower_names.count("v")
e = lower_names.count("e")

second_digit = l + o + v + e

score = int(str(first_digit) + str(second_digit))

if (score <= 10):
  print(f"Your love score is {score}, it will be better if you breakup.")

elif (score > 10) and (score < 100):
  print(f"Your love score is {score}, its a true love.")

else:
  print(f"Your love score is {score}.")
