#include <stdio.h>
#include <string.h>

struct universityDetails {
	int universityRanking;
	char university_Name[50];
};

struct studentDetails {
	int studentID;
	char studentName[50];
	float studentPercentage;
	struct universityDetails data;
};

int main() {
	struct studentDetails stdData = {
		1, "Arif", 80.5, 285, "NUCES"
	};
	
	printf("ID is: %d\n", stdData.studentID);
	printf("Name is: %s\n", stdData.studentName);
	printf("Percentage is: %.2f\n", stdData.studentPercentage);
	
	printf("University Ranking is: %d\n", stdData.data.universityRanking);
	printf("University Name is: %s\n", stdData.data.university_Name);
	
	return 0;
}