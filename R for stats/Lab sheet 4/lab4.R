# Calculate P(X > 1000)
p_greater_than_1000 <- 1 - pnorm(1000, mean=1010, sd=218)
p_greater_than_1000

# First Quartile (25th percentile)
first_quartile <- qnorm(0.25, mean=1010, sd=218)
first_quartile

# Median (50th percentile)
median <- qnorm(0.50, mean=1010, sd=218)
median

# Generate 100 random values with mean 50 and standard deviation 10
random_values <- rnorm(100, mean=50, sd=10)

# Plot the histogram
hist(random_values, breaks=10, col="blue", xlab="Values", main="Histogram of 100 Random Normal Values")
