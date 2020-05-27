# Function that do the multiplication
def matrix_multiplication(m1,m2):
    m3 = [] # Initialize the variable
    for i in range(len(m1)): # Creating a matrix C with the size of A and B
        m3.append([])
        for j in range(len(m2[0])): 
            m3[i].append(0)
                
    for i in range (len(m1)): # Pass through the number of rows in A
        for j in range(len(m2[0])): # Pass through the number of Columns in B
            for k in range(len(m1[0])): # Pass through the index of A and  B
                m3[i][j] += m1[i][k] * m2[k][j] # Multiply and save the value
                    
    return m3 # Return the matrix C with its values
    
# Asking for values for the size in matrix a and b
ra = int(input("Type the number of rows in matrix A: "))
ca = int(input("Type the number of columns in marrix A: "))
rb = int(input("Type the number of rows in matrix B: "))
cb = int(input("Type the number of columns in marrix B: ")) 

if(ca == rb): # We continue if has the rule of a matrix
    # Saving the values in matrix B
    print("Type the elements for matrix A: ")
    a = [[int(input(f"[{j+1},{i+1}]: ")) for i in range(ca)] for j in range (ra)]
    print("\n")
    # Saving the values in matrix B
    print("Type the elements for matrix B: ")
    b = [[int(input(f"[{j+1},{i+1}]: ")) for i in range(cb)] for j in range (rb)]
    
    print("\nMatrix C:\n")
    # Call the function
    c = matrix_multiplication(a,b)
    # Print the matrix
    for row in c:
        print("[",end = " ")
        for element in row: 
            print(element, end = " ")
        print("]")
else: # If it doesn't follow the rule of a matrix print the error
    print("The action cannot be reach")
