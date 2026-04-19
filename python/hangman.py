# Topic: Python - Dictionaries, Lists, Loops and Random
# Description: A hangman game with category selection.
#              Uses a dictionary to store word categories, randomly selects
#              a word, and tracks correct guesses using a list.
#              Demonstrates nested loops, random module, and list manipulation.

import random

words = {
    "animals":  ["cat", "bird", "rabbit", "mouse", "cow", "lizard", "bull", "crab", "donkey"],
    "objects":  ["bottle", "glass", "pen", "eraser", "paper", "notebook", "lighter", "glasses", "clock"],
    "vehicles": ["car", "plane", "bus", "train", "ferry", "truck", "tractor", "motorcycle", "scooter"]
}

category = ""
count = 0
dashes = []
game = True

for key in words.keys():
    count += 1
    print(f"{count} - {key}")

choice = input("Your choice: ")

if choice == "1":
    category = "animals"
elif choice == "2":
    category = "objects"
elif choice == "3":
    category = "vehicles"
else:
    print("Please enter a valid option.")
    category = False

while category != False:
    index = random.randint(0, len(words[category]) - 1)
    word = words[category][index]

    dashes = ["-"] * len(word)

    for i in range(len(word) + 5):
        print(" ".join(dashes))
        guess = input("Enter a letter: ")

        for j in range(len(word)):
            if guess == word[j]:
                dashes[j] = guess

        if "-" not in dashes:
            game = False
            print("Congratulations, you won!")
            break
    else:
        print(f"Sorry, the word was: {word}")

    if game == False:
        break
