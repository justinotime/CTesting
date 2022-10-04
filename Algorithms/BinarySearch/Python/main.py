

from array import array
from asyncio.windows_events import NULL


def initArray(*userPlay):
    userPlay = 0 
    while userPlay != 1:
        userYesNo = input("Do you want to create an array? Y/N only: ") 
        if (userYesNo == 'Y'):
            userPlay += 1
            break
        elif (userYesNo == 'N'):
            userPlay = 0
            break
        else:
            print("Woops.. try again")
            continue
    
def putArray(userPlay, randArray):
    randArray = []
    while (userPlay == 1):
        for i in range(6):
            userValArray = input("Enter values for Array: ")
            randArray.append(userValArray)
            print(randArray)
        else:
            print("This is finished")
        userPlay -= 1

def main():
    Array = []
    usersPlay = NULL
    usersValues = 0
    # while userPlay != 1:
    #     userYesNo = input("Do you want to create an array? Y/N only: ") 
    #     if (userYesNo == 'Y'):
    #         userPlay += 1
    #         break
    #     elif (userYesNo == 'N'):
    #         userPlay = 0
    #         break
    #     else:
    #         print("Woops.. try again")
    #         continue   
    initArray(usersPlay)
    putArray(usersPlay, array)
    # while (userPlay == 1):
    #     for i in range(6):
    #         userValArray = input("Enter values for Array: ")
    #         randArray.append(userValArray)
    #         print(randArray)
    #     else:
    #         print("This is finished")
    #     userPlay -= 1
    
if __name__ == "__main__":
    main()





