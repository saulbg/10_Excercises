# 1. Calculate the Euler constant e using the series: https://wikimedia.org/api/rest_v1/media/math/render/svg/698f402ad56c5162a9280b6aaa8eb79acbc49550
#Initiates variables and prompts user input
n=int(input("Input the number of terms:"))
eu=1

#Process: Calculates Euler
for i in range(1,n+1):              #Loops through the range to calculate Euler
	factorial=1
	for j in range(1,i + 1):    #Process: Calculates the factorial of i
		factorial = factorial*j
	eu=eu+(1/factorial)   

#Output    
print("Euler is:",round(eu,2))
