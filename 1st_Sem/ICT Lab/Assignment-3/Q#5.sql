CREATE DATABASE MyDatabase;
USE MyDatabase;
CREATE TABLE Customer (
    CustomerID INT PRIMARY KEY AUTO_INCREMENT,
    FirstName VARCHAR(50) NOT NULL,
    LastName VARCHAR(50) NOT NULL,
    Email VARCHAR(100) UNIQUE NOT NULL,
    Phone VARCHAR(15),
    Address VARCHAR(255)
);

CREATE TABLE `Order` (
    OrderID INT PRIMARY KEY AUTO_INCREMENT,
    OrderDate DATE NOT NULL,
    OrderAmount DECIMAL(10, 2) NOT NULL,
    CustomerID INT,
    FOREIGN KEY (CustomerID) REFERENCES Customer(CustomerID)
        ON DELETE CASCADE
        ON UPDATE CASCADE
);
INSERT INTO Customer (FirstName, LastName, Email, Phone, Address)
VALUES ('Fast', 'Uni', 'fast.uni@example.com', '123-456-7890', '123 Elm Street');

INSERT INTO `Order` (OrderDate, OrderAmount, CustomerID)
VALUES ('2024-12-01', 100.50, 1);
SELECT * FROM Customer;
SELECT * FROM `Order`;
