#!/usr/bin/python3
import random

def main():
    number = random.randint(-10, 10)
    if number > 0:
        print(f"{number} is positive")
    elif number == 0:
        print(f"{number} is zero")
    else:
print(f"{number} is negative")

if __name__ == "__main__":
main()

