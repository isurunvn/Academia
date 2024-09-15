install.packages("ggplot2")
library(ggplot2)

birthweight <- read.csv("BIRTHWEIGHT.csv")

str(birthweight)
head(birthweight)

ggplot(birthweight, aes(x=AGE)) + 
geom_histogram(fill="blue", color="black", bins=10) +
labs(title="Histogram of Mother's Age", x="Age", y="Frequency")

ggplot(birthweight, aes(x=SMOKE)) + 
geom_bar(fill="purple") +
labs(title="Smoking Status during Pregnancy", x="Smoking Status", y="Count")

ggplot(birthweight, aes(y=BWT)) +
geom_boxplot(fill="orange") +
labs(title="Boxplot of Birth Weight", y="Birth Weight (g)")

ggplot(birthweight, aes(x=LWT, y=BWT)) + 
  geom_point() + 
  geom_smooth(method="lm") +
  labs(title="Scatter Plot of Mother's Weight vs Birth Weight", x="Mother's Weight (LWT)", y="Birth Weight (BWT)")

ggplot(birthweight, aes(x=factor(RACE), y=BWT, fill=factor(RACE))) + 
  geom_boxplot() +
  labs(title="Boxplot of Birth Weight by Race", x="Race", y="Birth Weight (g)", fill="Race")

ggplot(birthweight, aes(x=SMOKE, fill=LOW)) + 
  geom_bar(position="dodge") +
  labs(title="Smoking Status by Low Birth Weight", x="Smoking Status", y="Count", fill="Low Birth Weight")

ggplot(birthweight, aes(x=AGE, fill=SMOKE)) + 
  geom_density(alpha=0.4) +
  labs(title="Density Plot of Mother's Age by Smoking Status", x="Age", fill="Smoking Status")
