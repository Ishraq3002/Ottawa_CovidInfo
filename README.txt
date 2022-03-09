# Ottawa_CovidInfo
Created by: Md Ishraq Tanzim
Date      : January, 2022

The C program examines the number of weekly pandemic cases in Ottawa over a sequence of 63 consecutive weeks and displays them in a histogram and a 'smoothed' histogram.

1) The program displays the total number of cases in the data, using the setlocale() function.

2) The average number of cases per week over the period of time covered in the data is calculated in the program.

3) The program also displays the number of cases in the worst week (i.e., highest cases)

4) A histogram is constructed as output showing the number of cases each week as a sequence of stars such that the week with the highest number of cases has exactly 50 stars.

5) Finally, an averaged histogram is constructed which outputs a “smoothed” histogram.

6) Command for compiling the code in linux environment: gcc -o covidOttawa covidOttawa.c
7) Command for running the code after compiling	      : ./covidOttawa	 