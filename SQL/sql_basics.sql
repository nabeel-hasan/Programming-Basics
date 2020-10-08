-- -------------------------------SQL Tutorial Basics--------------------------

-- Creating a database
source /home/nabeel/Git/SQL/Databases/create-databases.sql


-- How to find databases
SHOW DATABASES;

-- Using a database
USE sql_store;

-- Select order table 
SELECT * 
FROM customers
WHERE customer_id > 3
ORDER BY points;

-- We can select columns in desired format as we type there name
-- SELECT DISTINCT enteries 
SELECT
    first_name,
    last_name,
    points,
    (points*10)/100 AS 'discount factor'
FROM customers;
    
-- Use of WHERE
SELECT *
FROM customers

WHERE birth_date > '1991-01-13';
WHERE birth_date != '1992-05-23';
WHERE birth_date > '1991-01-01' OR points > 
WHERE (birth_date > '1991-01-01' AND points > 1000) OR state = 'VA';
WHERE NOT (birth_date > '1991-01-01' AND points > 1000) OR state = 'VA';
WHERE state IN ('MA', 'FL', 'GA') 
WHERE state NOT IN ('MA', 'FL', 'GA');
WHERE birth_date BETWEEN '1990-01-01' AND '2000-01-01';
WHERE last_name LIKE '%b';
-- One can use '%y' ; '%a%' ; 'b____y"
WHERE last_name LIKE '%b' OR last_name LIKE '%a%';
WHERE last_name LIKE '%b' OR last_name LIKE '%a%';
WHERE last_name NOT LIKE '%a%';

-- Regular Expressions
WHERE last_name REGEXP 'field';
WHERE last_name REGEXP '^field';         -- Shows string starts with field
WHERE last_name REGEXP 'field$';         -- Shows string ends with field
WHERE last_name REGEXP 'field|mac|rose'; -- Shows either of the string occur in last_name
WHERE last_name REGEXP '[gim]e';         -- Shows strings with combination ge, ie, me , also 'e[gme]'
WHERE last_name REGEXP '[a-h]e';         -- Range of combinations from a to h

-- NULL VALUES
WHERE phone IS NULL;

-- ORDER BY
SELECT first_name, birth_date, points/10 AS 'discount_factor'
FROM customers
ORDER BY discount_factor DESC, first_name;

-- LIMIT
SELECT *
FROM customers
LIMIT 3;                                 -- Limits output table to three 

SELECT * 
FROM customers
LIMIT 6, 2;                              -- Skips first six outputs and prints next two


-- Joning Tables
SELECT od.order_id, od.customer_id, cu.first_name, cu.last_name
FROM orders od
JOIN customers cu
    ON od.customer_id = cu.customer_id;

-- Join map two columns either on different table or the same table
USE sql_hr
SELECT emp.employee_id, emp.first_name AS 'employee_name', mng.first_name AS 'manager_name'
FROM employees emp
JOIN employees mng
    ON emp.reports_to = mng.employee_id;

-- Joining multiple table
-- Join maps two columns to identify the keys
USE sql_store
SELECT o.order_id,
       o.order_date,
       c.first_name,
       c.last_name,
       os.name AS status
FROM orders o
JOIN customers c
    ON o.customer_id = c.customer_id
JOIN order_statuses os
    ON o.status = os.order_status_id;

-- Joining tables with multiple columns as Pkey
USE sql_store
SELECT oi.order_id, oi.product_id, oin.note_id
FROM order_items oi
JOIN order_item_notes oin
    ON oi.order_id = oin.order_id
    AND oi.product_id = oin.product_id;

-- OUTER JOIN shows even the NULL values assisiated with join columns
-- LEFT JOIN show all columns from mapping the default table
-- RIGHT JOIN shows all columns from join table
USE sql_store
SELECT c.customer_id,
       c.first_name,
       c.last_name,
       o.order_id
FROM customers c
LEFT JOIN orders o
    ON c.customer_id = o.customer_id
ORDER BY customer_id;

USE sql_store
SELECT c.customer_id,
       c.first_name,
       c.last_name,
       o.order_id
FROM customers c
RIGHT JOIN orders o
    ON c.customer_id = o.customer_id
ORDER BY customer_id;


-- Using outer join for multiple tables
USE sql_store
SELECT c.customer_id,
       c.first_name,
       c.last_name,
       o.order_id,
       sh.name AS shipper
FROM customers c
LEFT JOIN orders o
    ON c.customer_id = o.customer_id
LEFT JOIN shippers sh
    ON o.shipper_id = sh.shipper_id
ORDER BY customer_id;


SELECT o.order_date,
       o.order_id,
       c.first_name,
       sh.name AS shipper,
       os.name AS status
FROM orders o
JOIN customers c
    ON o.customer_id = c.customer_id
LEFT JOIN shippers sh
    ON o.shipper_id = sh.shipper_id
JOIN order_statuses os
    ON o.status = os.order_status_id;

-- USING clause
-- USING clause only works when columns name is same in both tables
USE sql_store
SELECT c.customer_id,
       c.first_name,
       c.last_name,
       o.order_id,
       sh.name AS shipper
FROM customers c
LEFT JOIN orders o
    USING (customer_id)
LEFT JOIN shippers sh
    USING (shipper_id)
ORDER BY customer_id;


USE sql_store
SELECT oi.order_id, oi.product_id, oin.note_id
FROM order_items oi
JOIN order_item_notes oin
    USING (order_id, product_id);

USE sql_invoicing;
SELECT p.date,
       c.name,
       p.amount,
       pm.name AS 'payment_method'
FROM payments p
JOIN clients c
    USING (client_id)
JOIN payment_methods pm
    ON p.payment_method = pm.payment_method_id;


-- NATURAL join all same columns
SELECT od.order_id, od.customer_id, cu.first_name, cu.last_name
FROM orders od
NATURAL JOIN customers cu;


-- CROSS JOIN
USE sql_invoicing
SELECT *
FROM clients c
CROSS JOIN payment_methods pm;


-- UNION clause
SELECT  customer_id, 
        first_name, 
        points,
        'bronze' AS customer_type
FROM customers 
WHERE points < 2000
UNION
SELECT  customer_id, 
        first_name, 
        points,
        'gold' AS customer_type
FROM customers
WHERE points BETWEEN 2000 AND 3000
UNION
SELECT  customer_id, 
        first_name, 
        points,
        'diamond' AS customer_type
FROM customers
WHERE points > 3000
ORDER BY points;









