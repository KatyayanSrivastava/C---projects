statement = input('>').lower()
statusOfStarting = False
while statement != "quit":
    if statement == "help":
        print("""
start ---> to start car
stop ---> to stop car
quit ---> to exit
""")
    elif statement == "start":
        print("Already started" if statusOfStarting else "Started")
        statusOfStarting = True
    elif statement == "stop":
        print("Stopped" if statusOfStarting else "Already stopped")
        statusOfStarting = False
    else :
        print("I don't understand this...")
    statement = input('>').lower()
print("I think you enjoy the game")