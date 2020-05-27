# 4. Count the Word Frequency in a Text (Unique String). Don’t forget to: normalize to lower case and delete special chars. 
input_string = input('Input the text: ')
word = input('Input the word you want to check for: ')
output_string = ""

input_string = input_string.lower() #Turn string to lower case

#Process: Loops through string and adds alphanumeric characters to output_string
for char in input_string:
    if char.isalnum():              #Checks if a char is alphanumeric
        output_string += char      #If so it adds it to output_string

print(word, "word frequency:", output_string.count(word), "times") #prints word count of string
