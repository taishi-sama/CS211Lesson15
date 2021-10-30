bool is_leap(int year)
{
	assert(year >= 0);
	return (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
}
//Возвращает true, если первый день ближе к новому году, иначе возвращает false
bool LaterInYear(int day1, int month1, int day2, int month2)
{
	if (month1 = month2)
		return (day1 > day2);
	else
		return month1 > month2;
}
int DaysInYear(int year)
{
	if (is_leap(year))
		return 366;
	else
		return 365;
}
int DaysInYearRange(int startYear, int endYear)
{
	int sum = 0;
	for (int i = startYear; i <= endYear; i++)
		sum += DaysInYear(i);
	return sum;
}