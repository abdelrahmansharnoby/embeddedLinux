import calendar

# Input the year and month
year = int(input("Enter the year: "))
month = int(input("Enter the month (1-12): "))

# Create a TextCalendar object
cal = calendar.TextCalendar(calendar.SUNDAY)  


print(f"Calendar for {calendar.month_name[month]} {year}:")
cal.prmonth(year, month)
