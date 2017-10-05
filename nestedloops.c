#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int numDays, numTrips;
	int dayCount, j; // used as counters for the number of days, and number of trips.
	
	// temp variable is needed to allow us to sum up all of the trip lengths
	// to later find average.
	float averageTime, temp, tripTime;
	
	printf("How many days will you observe the landing crew?\n");
	scanf("%d", &numDays);
	
	for(dayCount = 1; dayCount <= numDays; dayCount++){
		
		printf("How many trips were completed on day #%d?\n", dayCount);
		scanf("%d", &numTrips);
		printf("\n");

		// loops through number of trips 
		for(j = 1; j <= numTrips; j++){
			
			printf("How long was trip #%d?\n", j);
			scanf("%f", &temp);
			tripTime += temp; // sums up the lengths of the trips						
		}
		// used for average time
		averageTime =  tripTime / numTrips;		
		printf("Day #%d: The Average time was %.3f\n", dayCount, averageTime);	
	}
	return 0;
}
