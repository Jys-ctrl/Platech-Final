#include<iostream>

using namespace std;

int main()
{

	int proc, bursttime[10], waittime[10], ave = 0, i, j;
	cout<<"Enter total number of processes(maximum 10): ";
	cin>>proc;
	
	cout<<"\nEnter Process Burst Time\n:";
	
	//input burst time
	for (i=0; i<proc; i++)
	{
		cout<<"P[" <<i+1<<"]: ";
		cin>>bursttime[i];
	}
	
	waittime[0]= 0; //waiting time for 1st process is 0
	
	//calculating waiting time
	for(i=1; i<proc; i++)
	{
		waittime[i]=0;
			for(j=0; j<i; j++)
				waittime[i]+= bursttime[j];
	}
	
	cout<<"\nProcess\t\tBurst Time\tWaiting Time";
	
	for(i=0; i<proc; i++)
	{
		ave+= waittime[i];
		cout<<"\nP[" <<i+1<< "]"<<"\t\t" <<bursttime[i]<< "\t\t" <<waittime[i]<<"";
	}
	
	ave/=i;
	cout<<"\n\nAverage Waiting Time: "<<ave;
	
	return 0;
	
}

