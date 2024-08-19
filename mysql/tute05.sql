SHOW DATABASES;

CREATE DATABASE IF NOT EXISTS tute05;

USE tute05;

CREATE TABLE IF NOT EXISTS Products (
    pro_id INT PRIMARY KEY NOT NULL,
    pro_name VARCHAR(255) NOT NULL,
    brand VARCHAR(255) NOT NULL,
    category  VARCHAR(255) NOT NULL,
    price INT NOT NULL,
    stock_quantity INT NOT NULL
);

-- INSERT INTO  Products (
--     pro_id, pro_name, brand, category, price, stock_quantity
-- ) VALUES
--     (1, 'Laptop', 'Dell', 'Electronics', 220000, 50),
--     (2, 'Desktop PC', 'HP', 'Electronics', 60900.00, 30),
--     (3, 'Monitor', 'Samsung', 'Electronics', 12250.00, 40),
--     (4, 'Keyboard', 'Logitech', 'Accessories', 4050.00, 100);

CREATE TABLE IF NOT EXISTS Customers (
    cus_id INT PRIMARY KEY NOT NULL,
    customer_name VARCHAR(255) NOT NULL,
    email VARCHAR(255) NOT NULL,
    phone VARCHAR(255) NOT NULL
);

-- INSERT INTO Customers (cus_id, customer_name, email, phone)
-- VALUES
-- (101, 'John Smith', 'john@example.com', '+1234567890'),
-- (102, 'Emily Johnson', 'emily@example.com', '+1987654321'),
-- (103, 'Michael Brown', 'michael@example.com', '+1122334455');

CREATE TABLE IF NOT EXISTS Sales (
    sale_id INT PRIMARY KEY NOT NULL,
    cus_id INT NOT NULL,
    pro_id INT NOT NULL,
    quantity INT NOT NULL,
    sale_date DATE NOT NULL,
    FOREIGN KEY (cus_id) REFERENCES Customers(cus_id),
    FOREIGN KEY (pro_id) REFERENCES Products(pro_id)
);

-- INSERT INTO Sales (sale_id, cus_id, pro_id, quantity, sale_date)
-- VALUES
-- (201, 101, 1, 1, '2024-02-28'),
-- (202, 102, 2, 2, '2024-02-27'), 
-- (203, 103, 3, 1, '2024-02-25'),
-- (204, 101, 4, 3, '2024-02-24'); 


-- 1. Find the name of the customer who bought a monitor.
SELECT Customers.customer_name
FROM Customers INNER JOIN Sales ON Customers.cus_id = Sales.cus_id
WHERE Sales.cus_id = 
(SELECT Sales.cus_id
FROM Sales INNER JOIN Products ON Sales.pro_id = Products.pro_id
WHERE Products.pro_name = 'Monitor'); 

-- 2. Retrieve the total number of products sold to a John Smith
SELECT SUM(Sales.quantity) 
FROM Customers INNER JOIN Sales ON Customers.cus_id = Sales.cus_id
WHERE Customers.customer_name = 'John Smith';

-- 3. Find the names of customers who purchased products within a 50,000 -100000 price range.
SELECT DISTINCT Customers.customer_name
FROM Customers
INNER JOIN Sales ON Customers.cus_id = Sales.cus_id
INNER JOIN Products ON Sales.pro_id = Products.pro_id
WHERE Products.price BETWEEN 50000 AND 100000;

-- 4. Retrieve the brand and category of products bought by Michael Brown.
SELECT Products.brand, Products.category
FROM Products INNER JOIN Sales ON Products.pro_id = Sales.pro_id
INNER JOIN Customers ON Sales.cus_id = Customers.cus_id
WHERE Customers.customer_name = 'Michael Brown';

-- 5. Retrieve the brands of products purchased by customers who have made more than one purchase.
SELECT Products.brand
FROM Products INNER JOIN Sales ON Products.pro_id = Sales.pro_id
WHERE Sales.quantity>1;

-- 6. Retrieve the product names and prices where the price is greater than 50,000 in the 'Electronics' category
SELECT Products.pro_name, Products.price
FROM Products 
WHERE Products.category = 'Electronics' AND Products.price>50000;

-- 7. Retrieve the product names and quantities sold where the quantity sold is greater than 10
SELECT Products.pro_name, Sales.quantity
FROM Products INNER JOIN Sales ON Products.pro_id = Sales.pro_id
WHERE Sales.quantity>10 

-- 8. Retrieve the customer names along with the total amount they have spent, sorted by the total amount spent from highest to lowest.
SELECT Customers.customer_name, SUM(Products.price * Sales.quantity) AS total_spent
FROM Customers
INNER JOIN Sales ON Customers.cus_id = Sales.cus_id
INNER JOIN Products ON Sales.pro_id = Products.pro_id
GROUP BY Customers.customer_name
ORDER BY total_spent DESC;


-- 9. Retrieve the names of customers along with the product categories they purchased and the average quantity bought for each category.
