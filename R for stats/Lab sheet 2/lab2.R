order_id <- c(10107, 10121, 10134, 10145, 10159, 10168, 10180, 10188, 10201, 10211)
quantity_ordered <- c(30, 34, 41, 45, 49, 36, 29, 48, 22, 41)
month <- c("February", "May", "July", "August", "October", "October", "November", "November", "December", "January")
contact_name <- c("Yu", "Henriot", "Da Cunha", "Young", "Brown", "Hirano", "Rance", "Oeztan", "Murphy", "Perrier")

# Creating the data frame and setting row names
sales <- data.frame(Order_ID = order_id, Quantity_Ordered = quantity_ordered, Month = month, Contact_Name = contact_name)
rownames(sales) <- sales$Order_ID

# View the data frame
print(sales)

# Increasing quantity ordered by 10 units
sales$Quantity_Ordered <- sales$Quantity_Ordered + 10

# View the updated data frame
print(sales)

# Sales data
sales_values <- c(2871, 2765.9, 3884.34, 3746.7, 5205.27, 3479.76, 2497.77, 5512.32, 2168.54, 4708.44)

# Adding the sales data to the data frame
sales$Sales <- sales_values

# View the updated data frame
print(sales)

# Increasing sales by 10%
sales$Sales <- sales$Sales * 1.10

# View the updated data frame
print(sales)

# Creating the new variable "Quantity_Type"
sales$Quantity_Type <- cut(sales$Quantity_Ordered,
                           breaks = c(-Inf, 10, 40, Inf),
                           labels = c("Low", "Medium", "High"))

# View the updated data frame
print(sales)

# Exporting the data frame to a CSV file
write.csv(sales, "sales_data.csv", row.names = TRUE)
