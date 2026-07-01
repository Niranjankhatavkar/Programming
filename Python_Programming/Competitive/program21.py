def ChkVowel(ch):

    if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u'):
        return True
    else:
        return False

def main():

    Alpha = str(input("Enter Alphabet : "))

    Ret = ChkVowel(Alpha)

    if(Ret == True):
        print("Alphabet is Vowel")
    else:
        print("Alphabet is Consonant")  

if __name__ == "__main__":
    main()