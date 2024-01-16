import random

from hangman_words import word_list
#here words are getting added from the word file hangman-words
end_of_game = False 
chosen_word = random.choice(word_list).lower()
word_length = len(chosen_word)

print(f"the solution is {chosen_word}")
lives = 6

from hangman_arts import logo
print(logo)

print(f"You have {lives} lives to complete the game.")

display = []
for _ in range(word_length):
  display += "_"
print(display)

game_over = False

while not game_over:
  
  guess = input("Guess a letter : ").lower()

  if guess in display:
    print(f"You have already guessed the letter {guess}.")
  
  for position in range(word_length):
    word = chosen_word[position]
    
    if word == guess:
      display[position] = word

  if guess not in chosen_word :
    print(f"The guessed letter {guess} is not in the word, You loose a life")
    lives -= 1
    print(f"Now you {lives} lives left to complete the game.")
    if lives == 0 :
      game_over = True
      print("Kya bhai tu itna easy word bhi guess nai kar skta kya")

  print(f"{''.join(display)}")
  
  if "_" not in display:
    game_over = True
    print("Yay bhai maja agaya bhai maja agaya woohoooooooo.")
    
  from hangman_arts import stages
  print(stages[lives])
