#defining bot
def greet(bot_name, birth_year):
    print('Hello! My name is ' + bot_name + '.')
    print('I am your an interactive chat bot!')
    print('I was created in ' + birth_year + '.')

#getting name
def remind_name():
    print('Please, remind me your name.')
    name = input()
    print('What a great name you have, ' + name + '!')

#guessing the age
def guess_age():
    print('Let me guess your age.')
    print('Enter remainders of dividing your age by 3, 5 and 7.')

#taking input for age prediction
    rem3 = int(input())
    rem5 = int(input())
    rem7 = int(input())
    age = (rem3 * 70 + rem5 * 21 + rem7 * 15) % 105

    print("Your age is " + str(age) + "; that's a good time to start programming!")


def count():
    print('Now I will prove to you that I can count to any number you want.')

    num = int(input())
    curr = 0
    while curr <= num:
        print(curr)
        curr = curr + 1


def test():
    print("Let's test your programming knowledge.")
    print("Why do we use methods?")
    print("1. To repeat a statement multiple times.")
    print("2. To decompose a program into several small subroutines.")
    print("3. To determine the execution time of a program.")
    print("4. To interrupt the execution of a program.")
    answer = int(input())
    while answer != 3 :
        print("Please, try again.")
        answer = int(input())
    print('Completed, have a nice day!')


def end():
    print('Congratulations, have a nice day!')


greet('Nexus', '2021')  # change it as you need
remind_name()
guess_age()
count()
test()
end()


def solve(s):
   tokens=s.split(" ")
   string=""
   for word in tokens:
      if (word != "and" ):
         string += str(word[0])
   return string.upper()

print("Don't use special symbols like & ")
k=input("Enter the word whose acronym you want: ")
print("Acronym is:",solve(k))

#getting the name of player
name = input("Type your name: ")
print("Welcome", name, "to this adventure!")

#first question
answer = input(
    "You are on a dirt road, it has come to an end and you can go left or right. Which way would you like to go? ").lower()

# if left was answered
if answer == "left":
    answer = input(
        "You come to a river, you can walk around it or swim accross? Type walk to walk around and swim to swim accross: ")

    if answer == "swim":
        print("You swam acrross and were eaten by an alligator.")
    elif answer == "walk":
        print("You walked for many miles, ran out of water and you lost the game.")
    else:
        print('Not a valid option. You lose.')

#if right was answered
elif answer == "right":
    answer = input(
        "You come to a bridge, it looks wobbly, do you want to cross it or head back (cross/back)? ")

    if answer == "back":
        print("You go back and lose.")
    elif answer == "cross":
        answer = input(
            "You cross the bridge and meet a stranger. Do you talk to them (yes/no)? ")

        if answer == "yes":
            print("You talk to the stanger and they give you gold. You WIN!")
        elif answer == "no":
            print("You ignore the stranger and they are offended and you lose.")
        else:
            print('Not a valid option. You lose.')
    else:
        print('Not a valid option. You lose.')

#if something else was answered then showing invalid
else:
    print('Not a valid option. You lose.')

print("Thank you for trying", name)



#importing playsound module pip install playsound
import time
import pygame
pygame.init()
# SONG for the alarm
SONG = pygame.mixer.Sound("Related/wake_up.mp3")
SONG.set_volume(0.1)
print("Clock type - 24 hour system")
#input hr(hours) and min(minutes) with am or pm
hour = int(input("Enter hour: "))
minute = int(input("Enter minutes: "))
#n=1 and condition always be true 
n=1
while n>0:
    #here local hour is compare with given input hr(hour) and local minute is compare with given input min(minutes)
    if time.localtime().tm_hour == hour and time.localtime().tm_min == minute:
        print("wake up!!!")
        SONG.play()
        while True:
            inpt = input("Type 'Stop' to off the alram : ")
            if inpt.lower() == 'stop':
                break # Break the inner while loop
        n = 0
