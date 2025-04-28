toGuess = 9
guessingNum = int(input("Guess: "))
i = 0
while toGuess != guessingNum and i < 3:
    guessingNum = int(input("Guess: "))
    i += 1
print("You win" if i < 3 else "Sorry you failed")