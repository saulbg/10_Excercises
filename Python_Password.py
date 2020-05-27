# 3. Check the validity of a password (input from users). Validation: • At least 1 letter between [a-z] and 1 letter between [A-Z]. • At least 1 number between [0-9]. • At least 1 at least one punctuation sign. • Minimum length 6 characters. • Maximum length 16 characters.
c1, c2, c3, c4 = 0, 0, 0, 0
password = input('Enter your password: ')
if ((len(password) >= 6) and (len(password) <= 16)): # Check if password has between 6 to 16 characters
	if ((any(c.islower() for c in password)) == True): # Check if it contains a lower case letter
		c1+=1
	if ((any(c.isupper() for c in password)) == True): # Check if it contains an upper case letter
		c2+=1 
	if ((any(c.isdigit() for c in password)) == True): # Check if it contains a number
		c3+=1
	for i in password: #Loop through the string to check for punctuation marks
		if(i=='.'or i=='?' or i=='!' or i==',' or i==';' or i==':' or i=='-' or i=='(' or i==')' or i=='[' or i==']' or i=='{' or i=='}' or i=="'" or i=='"' or i=='*'):
			c4+=1
if (c1>=1 and c2>=1 and c3>=1 and c4>=1): #If all conditions are met, password is valid
	print("Valid Password")
else: 
    print("Invalid Password") # Else its invalid
