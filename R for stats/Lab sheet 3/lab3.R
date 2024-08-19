#1) How many individuals are in the dataset?
birthweight <- read.csv("BIRTHWEIGHT.csv")
nrow(birthweight)

#2) Identify all the quantitative variables.
quantitative_vars <- sapply(birthweight, is.numeric)
names(birthweight)[quantitative_vars]

#3) Construct a simple bar graph for the variable LOW.
barplot(table(birthweight$LOW), main="Barplot of Low Birth Weight", xlab="LOW", ylab="Frequency")

#4) Draw a pie chart for the variable RACE. What percent of mothers were white?
pie(table(birthweight$RACE), main="Pie Chart of RACE")
# Percentage of mothers who were white
white_percent <- prop.table(table(birthweight$RACE))[1] * 100
white_percent

#5) Examine the distribution of the AGE graphically using a stem and leaf plot.
stem(birthweight$AGE)

#6) From the stemplot, what is the age of the oldest mother?
 # Answer: The age of the oldest mother can be observed from the top value in the stem-and-leaf plot.

#7) Explain where you would place an observation (by hand) to the stem-and-leaf plot that would represent a new mother who is 37 years old.
#Answer: In a stem-and-leaf plot, "3 | 7" would represent a mother aged 37, where 3 is the stem and 7 is the leaf.

#8) Describe the distribution of AGE using a histogram.
hist(birthweight$AGE, main="Histogram of AGE", xlab="Age of the Mother", breaks=10)

#9) Describe the shape of this distribution.
#Answer: The shape of the distribution can be observed from the histogram. You might describe it as symmetric, skewed, etc.

#10) What information about the data values could you see in a stem-and-leaf plot that you are not able to see in a histogram?
 # Answer: A stem-and-leaf plot provides exact values and their frequencies, whereas a histogram provides a visual distribution but lacks exact numerical details.

#11) How does this change the information conveyed by your histogram?
 # Answer: The histogram provides a more general view of the data's distribution, making it easier to see patterns or shapes but at the cost of specific data points.

#12) Construct a box plot of the distribution of LWT by RACE.
boxplot(LWT ~ RACE, data=birthweight, main="Boxplot of LWT by RACE", xlab="RACE", ylab="LWT")

#13) Find the mean and the median for LWT.
mean_LWT <- mean(birthweight$LWT, na.rm=TRUE)
median_LWT <- median(birthweight$LWT, na.rm=TRUE)
mean_LWT
median_LWT

#14) Write a paragraph summarizing how the variable behaves.
#Answer: Based on the calculated mean, median, histogram, and boxplot, you would summarize the center, spread, and shape of the LWT distribution. You can mention if the distribution is symmetric, skewed, and whether the mean is higher or lower than the median.