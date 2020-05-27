# 2. Given a list of strings delete all special chars in each one (non-alphanumeric chars). 
# Initiates variables and prompts user input
input_string = input('Input a string: ')
output_string = ""

#Process: Loops through string and adds alphanumeric characters to output_string
for char in input_string:
    if char.isalnum():              #Checks if a char is alphanumeric
        output_string += char       #If so it adds it to output_string

#Output
print(output_string)
