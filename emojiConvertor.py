message = input(">")
words = message.split(' ')
emojis ={
    ":)" : "😊",
    ":(" : "😟",
}
output = ""
for word in words:
    if word in emojis.keys():
        output += emojis[word] + " "
    else:
        output += word + " "
print(output)