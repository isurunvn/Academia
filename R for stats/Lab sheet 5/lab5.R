#1: Load the dataset airquality
#(a) Compute summary measurements for the quantitative variables and interpret your results.
# Load the dataset
data(airquality)

# Compute summary measurements
summary(airquality)

#(b) Identify the shape of the distributions of the quantitative variables using a suitable graphical method and comment on your findings.
# Plot histograms for each quantitative variable
hist(airquality$Ozone, main="Histogram of Ozone", xlab="Ozone", col="blue")
hist(airquality$Solar.R, main="Histogram of Solar Radiation", xlab="Solar Radiation", col="green")
hist(airquality$Wind, main="Histogram of Wind", xlab="Wind", col="red")
hist(airquality$Temp, main="Histogram of Temperature", xlab="Temperature", col="orange")

#(c) According to the results obtained in part b, name a suitable variable that can be approximated to a normal distribution. Draw a normal curve for that variable.
# Assuming Temp is approximately normal
x <- airquality$Temp
hist(x, prob=TRUE, main="Histogram with Normal Curve", xlab="Temperature")
curve(dnorm(x, mean=mean(x, na.rm=TRUE), sd=sd(x, na.rm=TRUE)), add=TRUE, col="darkblue", lwd=2)

#2: Load the dataset iris
#Construct a matrix scatter plot for the data and interpret the relationships among variables.
# Load the dataset
data(iris)

# Matrix scatter plot
pairs(iris[1:4], main="Scatterplot Matrix for Iris Data", col=iris$Species)

#3: Load the dataset cats
#(a) Check whether there is any relationship between Bwt and Hwt using a suitable graphical method. Comment on your plot.
# Load the dataset
library(MASS)
data(cats)

# Scatterplot
plot(cats$Bwt, cats$Hwt, main="Scatterplot of Body Weight vs Heart Weight", xlab="Body Weight (kg)", ylab="Heart Weight (g)", pch=19, col="blue")

#(b) Fit a simple linear regression to model the Heart weight of the cats using Body weight as the independent variable. Write the equation of the fitted model.
# Linear regression model
model <- lm(Hwt ~ Bwt, data=cats)
summary(model)

#(c) Test the goodness of fit of the fitted model and justify your answer (R squared).
# R-squared value
summary(model)$r.squared

#(d) Test the significance of the relationship between the variables Bwt and Hwt. (Mention all the steps clearly).
# P-value for the slope
summary(model)$coefficients[2,4]

#(e) Predict the heart weight of a cat if its body weight is 2.52 kg.
# Prediction
new_data <- data.frame(Bwt = 2.52)
predicted_Hwt <- predict(model, newdata=new_data)
predicted_Hwt
