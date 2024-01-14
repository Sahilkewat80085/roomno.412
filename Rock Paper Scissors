import random

rock = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''

paper = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''

scissors = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''
image = [rock , paper , scissors]

user_choice = int(input("Enter your choice: Type 0 for Rock, 1 for Paper, 2 for Scissors ?: "))


if user_choice > 2:
  print("Invalid Entry")

else:
  print(image[user_choice])
  

computer_choice = random.randint(0 , 2)

print("Computer Choose :")
print(image[computer_choice])

if user_choice >= 3 or user_choice < 0:
  print("Its a invalid entry")

elif user_choice == computer_choice :
  print("It's a tie!")

elif user_choice == 0 and computer_choice == 2:
  print("You win!")

elif computer_choice == 0 and user_choice == 2:
  print("You Loose")

elif user_choice > computer_choice:
  print("You win!")

elif computer_choice > user_choice:
  print("You Loose")



