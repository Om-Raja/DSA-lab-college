# Python3 program to Calculate Waiting
# Time for given Processes

# Function to Calculate waiting time
# and average waiting time
def CalculateWaitingTime(at, bt, N):

	# Declare the array for waiting
	# time
	wt = [0]*N;

	# Waiting time for first process
	# is 0
	wt[0] = 0;
	ex=[0]*N;
	ex[0]=bt[0];
	tat=[0]*N;
	tat[0]=ex[0]-at[0];

	# Print waiting time process 1
	print("P.No.\tArrival Time\t" , "Burst Time\t\t exit\t\t\tT A Time\t\t\t\tWaiting Time");
	print("1" , "\t\t" , at[0] , "\t\t\t\t" , bt[0] ,  "\t\t\t\t" , ex[0] , "\t\t\t\t\t" , tat[0] ,"\t\t\t\t\t" , wt[0]);

	# Calculating waiting time for
	# each process from the given
	# formula
	for i in range(1,5):
	    
		wt[i] = (at[i - 1] + bt[i - 1] + wt[i - 1]) - at[i];
		ex[i]=ex[i-1]+bt[i];
		tat[i]=ex[i]-at[i];

		# Print the waiting time for
		# each process
		print(i + 1 , "\t\t" , at[i] , "\t\t\t\t" , bt[i] , "\t\t\t\t" , ex[i] ,"\t\t\t\t\t" , tat[i],"\t\t\t\t\t" , wt[i]);
	

	# Declare variable to calculate
	# average
	average = 0.0;
	sum = 0;
	sum2=0;

	# Loop to calculate sum of all
	# waiting time
	for i in range(5):
		sum = sum + wt[i];
		sum2= sum2+tat[i];
	
	# Find average waiting time
	# by dividing it by no. of process
	average = sum / 5;
	avg=sum2/5;

	# Print Average Waiting Time
	print("Average waiting time = " , average);
	print("Average turn around time = " , avg);


# Driver code
if __name__ == '__main__':
	# Number of process
	N = 5;

	# Array for Arrival time
	at = [ 0, 1, 2, 3, 4 ];

	# Array for Burst Time
	bt = [ 4, 3, 1, 2, 5 ];

	# Function call to find
	# waiting time
	CalculateWaitingTime(at, bt, N);
