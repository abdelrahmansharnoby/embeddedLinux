user_input = input("Please enter a letter: ")

if len(user_input) == 1 and user_input.isalpha():
    if user_input.lower() in ['a', 'e', 'i', 'o', 'u']:
        print("You entered a vowel.")
    else:
        print("Not Vowel")
else:
    print("Please enter a single letter.")
