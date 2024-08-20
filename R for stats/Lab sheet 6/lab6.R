#(a): Univariate Analysis
install.packages("openxlsx")
library(openxlsx)

# Load the dataset
data <- read.xlsx("Class.xlsx")

# Attach data for easy access
attach(data)

# Univariate analysis for Gender
gender_table <- table(Gender)
barplot(gender_table, main="Distribution of Gender", col="lightblue", xlab="Gender", ylab="Frequency")

# Univariate analysis for Ethnicity
ethnicity_table <- table(Ethnicity)
barplot(ethnicity_table, main="Distribution of Ethnicity", col="lightgreen", xlab="Ethnicity", ylab="Frequency")

# Univariate analysis for Degree Type
degree_table <- table(DegreeType)
barplot(degree_table, main="Distribution of Degree Type", col="lightcoral", xlab="Degree Type", ylab="Frequency")

# Univariate analysis for Class
class_table <- table(Class)
barplot(class_table, main="Distribution of Class", col="lightgoldenrod", xlab="Class", ylab="Frequency")

#(b): Proportion Calculations
#Proportion of Male First-Class Receivers:
male_first_class <- sum(Gender == "Male" & Class == "First")
total_males <- sum(Gender == "Male")
proportion_male_first_class <- male_first_class / total_males
proportion_male_first_class

#Class Distribution for Sinhala Graduates:
sinhala_graduates <- table(Class[Ethnicity == "Sinhala"])
barplot(sinhala_graduates, main="Class Distribution for Sinhala Graduates", col="lightblue", xlab="Class", ylab="Frequency")

#(c): Comparing Degree Types
degree_class_table <- table(DegreeType, Class)
barplot(degree_class_table, main="Class Distribution by Degree Type", col=c("lightblue", "lightgreen"), beside=TRUE, legend = rownames(degree_class_table))

#(d): Comparing Performance by Gender
gender_class_table <- table(Gender, Class)
barplot(gender_class_table, main="Class Distribution by Gender", col=c("lightblue", "lightcoral"), beside=TRUE, legend = rownames(gender_class_table))

#Proportion of Male First-Class Receivers: This code calculates the proportion of males who received a first-class.
#Class Distribution for Sinhala Graduates: The bar plot shows the distribution of classes among Sinhala students.
#Degree Type vs. Class: This plot helps to see if the type of degree (general vs. special) affects the class received.
#Gender vs. Class: This plot allows you to compare how well males and females performed