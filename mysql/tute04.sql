SHOW DATABASES;

CREATE DATABASE IF NOT EXISTS tute04;

USE tute04;

CREATE TABLE IF NOT EXISTS Customer (
    CustomerID INT PRIMARY KEY,
    CustomerName VARCHAR(255),
    Address VARCHAR(255),
    City VARCHAR(255),
    PostalCode INT,
    Country VARCHAR(255)
);

INSERT INTO Customer 
    (CustomerID, CustomerName, Address, City, PostalCode, Country)
    VALUES 
    (1, 'John Doe', '123 Main St', 'Berlin', 12345, 'Germany'),
    (2, 'Jane Smith', '456 Elm st', 'London', 54321, 'UK'),
    (3, 'Alice Johnson', '789 Oak St', 'Paris', 98765, 'France'),
    (4, 'Bob Brown', '101 Pine St', 'New York', 10001, 'USA'), 
    (5, 'Charlie Davis', '202 Maple St', 'Berlin', 23456, 'Germany'),
    (6, 'Emily Wilson', '303 Birch St', 'Oslo', 45678, 'Norway'),
    (7, 'Michael Lee', '404 Cedar St', 'Oslo', 56789, 'Norway'),
    (8, 'Sophia Martinez', '505 Pine St', 'Madrid', 87654, 'Spain'),
    (9, 'Olivia Garcia', '606 Oak St', 'Rome', 76543, 'Italy'),
    (10, 'William Taylor', '707 Elm St', 'Berlin', 34567, 'Germany');

-- 1. Write the statement to get all the columns from the Customers table.
SELECT * FROM Customer;

-- 2. Write a statement that will select the City column from the Customers table.
SELECT City FROM Customer;

-- 3. Select all the different values from the Country column in the Customers table.
SELECT DISTINCT Country FROM Customer;

-- 4. Select all records where the City column has the value "Berlin".
SELECT * FROM Customer WHERE City = 'Berlin';

-- 5. Select all records from the Customers table, sort the result reversed alphabetically by the
-- Column City.
SELECT * FROM Customer ORDER BY City DESC;

-- 6. Select all records from the Customers table, sort the result alphabetically, first by the column
-- Country, then, by the Column City
SELECT * FROM Customer ORDER BY Country ASC, City ASC;

-- 7. Select all records where the City column has the value 'Berlin' and the PostalCode column
-- has the value '12209'.
SELECT * FROM Customer WHERE City = 'Berlin' AND PostalCode = 12209;

-- 8. Select all records where the City column has the value 'Berlin' OR 'London'
SELECT * FROM Customer WHERE City = 'Berlin' OR City = 'London';

-- 9. Use the NOT keyword to select all records where City is NOT "Berlin".
SELECT * FROM Customer WHERE NOT(City = 'Berlin');

-- 10. Insert a new record in the Customers table.
INSERT INTO Customer 
    (CustomerID, CustomerName, Address, City, PostalCode, Country)
    VALUES 
    (11, 'Steve Smith', '16 Main St', 'Toronto', 45343, 'Canada');

-- 11. Select all records from the Customers where the PostalCode column is NOT empty.\
SELECT * FROM Customer WHERE NOT(PostalCode = NULL);

-- 12. Set the value of the City columns to 'Oslo', but only the ones where the Country column has
-- the value "Norway".
SELECT * FROM Customer WHERE City = 'Oslo' AND Country = 'Norway';

-- 13. Use the correct function to return the number of records that have the Price value set to 18.
-- 14. Use an SQL function to calculate the average Price of all products. 

-- 15. Select all records where the value of the City column contains the letter "a".
SELECT * FROM Customer WHERE City LIKE '%a%';

-- 16. Select all records where the value of the City column starts with letter "a" and ends with the
-- letter "b"
SELECT * FROM Customer WHERE City LIKE 'm%d';

-- 18. Select all records where the first letter of the City starts with anything from an "a" to an "f".
SELECT * FROM Customer WHERE LEFT(City, 1) IN ('a', 'b', 'c', 'd', 'e', 'f');
