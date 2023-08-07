#!/usr/bin/python3

# Assign a string to the variable 'word'
word = "Holberton"

# Create a substring containing the first three letters of 'word'
word_first_3 = word[:3]

# Create a substring containing the last two letters of 'word'
word_last_2 = word[-2:]

# Create a substring containing the characters of 'word' from index 1 to the second-to-last index
middle_word = word[1:-1]

# Print the first 3 letters of 'word'
print(f"First 3 letters: {word_first_3}")

# Print the last 2 letters of 'word'
print(f"Last 2 letters: {word_last_2}")

# Print the middle word of 'word'
print(f"Middle word: {middle_word}")
