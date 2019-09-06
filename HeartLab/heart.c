//Antonio Monteiro, Heart Lab

#include <stdio.h>

//Set up file
FILE* fp;

int main() {

	//Variable declarations
	int beatsPerSecond = 1;
	int secondsPerMinute = 60;
	int minutesPerHour = 60;
	int hoursPerDay = 24;
	int daysPerYear = 365;
	int secondsPerYear = 0;
	int beatsInFiveYears = 0;

	//Open text file
	fopen_s(&fp, "csis.txt", "w");

	//Find seconds per year
	secondsPerYear = daysPerYear * hoursPerDay * minutesPerHour * secondsPerMinute;
	
	//Find heartbeats 5 years
	beatsInFiveYears = secondsPerYear * 50;

	//Output answer
	printf("A heart will beat %d times in fifty years.\n", beatsInFiveYears);
	fprintf(fp, "A heart will beat %d times in fifty years.\n", beatsInFiveYears);

	//Close the file
	fclose(fp);

	system("pause");
	return 0;

}