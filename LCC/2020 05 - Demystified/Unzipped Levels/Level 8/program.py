print("Enter Password")
while True:
    password = list(map(int,list(input())))
    if set(password) in [{0,1},{1,0},{1},{0}] and len(password) == 8:
        if not password[0]:
            if password[1]:
                if not password[2]:
                    if not password[3]:
                        if not password[4]:
                            if password[5]:
                                if not password[6]:
                                    if password[7]:
                                        print("Access Granted :P")
                                        break
    print("Incorrect Password, try again!")
