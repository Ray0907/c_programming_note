/* Determines air mileage from NEW York to other cities. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct city_info
{
	char *city;
	int miles;
};

int compare_cities(const void *key_ptr, const void *element_ptr);

int main(void)
{
	char city_name[81];
	struct city_info *ptr;
	const struct city_info mileage[] =
		{
			{"Berlin", 3965}, {"Buenos Aires", 5297}, {"Cario", 5602}, {"Calcutta", 7918}, {"Cape Town", 7764}, {"Caracas", 2132}, {"Chicage", 713}, {"Hon Kong", 8054}, {"Honolulu", 4964}, {"Istanbul", 4875}, {"Lisbon", 3364}, {"Londa", 3458}, {"Los Angeles", 2471}, {"Manila", 8498}, {"Mexico City", 2084}, {"Montreal", 320}, {"Moscow", 4665}, {"Paris", 3624}, {"Rio de Janeiro", 4817}, {"Rome", 4281}, {"San Francisco", 2571}, {"Shanghai", 7371}, {"Stockholm", 3924}, {"Sydney", 9933}, {"Tokyo", 6740}, {"Warsaw", 4344}, {"Washington", 205}};

	printf("Enter city name: ");
	scanf("%80[^\n]", city_name);
	ptr = bsearch(city_name, mileage, sizeof(mileage) / sizeof(mileage[0]), sizeof(mileage[0]), compare_cities);

	if (ptr != NULL)
		printf("%s is %d miles from New York City.\n", city_name, ptr->miles);
	else
		printf("%s wasn't fouind\n", city_name);

	return 0;
}

int compare_cities(const void *key_ptr, const void *element_ptr)
{
	return strcmp((char *)key_ptr, ((struct city_info *)element_ptr)->city);
}