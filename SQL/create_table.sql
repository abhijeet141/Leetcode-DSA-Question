--First SQL Query
/*Creating a Table */

CREATE TABLE student_record(
    RegistrationNumber int,
    StudentName varchar(255),
    StudentNumber int
);


-- USUING AS

CREATE TABLE record AS SELECT StudentName,StudentNumber FROM student_record;

CREATE TABLE Record AS SELECT column1,column2 FROM student_record

--Drop

DROP TABLE Record1;

--Truncate

CREATE TABLE newTable(
  Name varchar(255)
);

TRUNCATE TABLE TABLENAME;

--ALTER

ALTER TABLE Student_record
ADD phoneNumber int;

ALTER TABLE Student_record
DROP Column phoneNumber;
--Or we can use
DROP phoneNumber;

--ALTER TO MODIFY DATATYPE 
ALTER TABLE Student_record
ALTER COLUMN RegistrationNumber varchar(255);

--BACKUP DATABASE

BACKUP DATABASE DatabaseName
TO DISK = 'filepath'

--Constraints Used in DataBase

--NOT NULL

CREATE TABLE TableName (
  Name varchar(255) NOT NULL,
  RegistrationNumber int NOT NULL,
  PhoneNumber int NOT NULL
  Age int NOT NULL
);

--NOT NULL ON ALTER TABLE
ALTER TABLE TableName
MODIFY RegistrationNumber int NOT NULL;

ALTER TABLE TableName
MODIFY RegistrationNumber int Not Null;

--UNIQUE

CREATE TABLE TableName(
  RegistrationNumber int NOT NULL UNIQUE,
  PhoneNumber int NOT NULL,
  Name varchar(255)
);

--Unique on Multiple Tables

CREATE TABLE TableName(
  RegistrationNumber int,
  PhoneNumber int,
  StudentName varchar(255)
  UNIQUE(PhoneNumber,StudentName)
);

CREATE TABLE Persons (
  ID int NOT NULL,
  LastName varchar(255) NOT NULL,
  FirstName varchar(255),
  Age int,
  CONSTRAINT UC_PERSON UNIQUE(ID, LastName)
  CONSTRAINT UC_Person UNIQUE(ID, LastName)
  CONSTRAINT UC_PERSON UNIQUE(ID, LastName)
);

--ALTER ON UNIQUE

ALTER TABLE Persons
ADD UNIQUE(Number)

ALTER TABLE Persons
ADD UNIQUE (ID);

ALTER TABLE Persons
ADD CONSTRAINT UC_Person UNIQUE (ID,LastName);

ALTER TABLE TableName
ADD CONSTRAINT UC_PERSON UNIQUE (Id, LastName);

ALTER TABLE Persons
ADD CONSTRAINT UC_Person UNIQUE (Id, LastName);

ALTER TABLE TableName
DROP CONSTRAINT UC_TableName;

--CHECK - constraint specifies that all the values in a column should satisfy a specific condition

CREATE TABLE TableName(
  Id int NOT NULL,
  Name varchar(255),
  PhoneNumber int,
  City varchar(255),
  Country varchar(255) CHECK (Country = 'India' AND City = 'Varanasi')
);

CREATE TABLE TableName(
  ID int NOT NULL,
  Name varchar(255),
  PhoneNumber int,
  City varchar(255),
  Country varchar(255)
  CHECK (Country == 'India' AND City == 'Varanasi')
);

ALTER TABLE Orders
ADD CHECK (item='Keyboard');

ALTER TABLE TableName
ADD CHECK (ITEM == 'KEYBOARD')

--to give a name to check constrint

ALTER TABLE TableName
ADD CONSTRAINT CheckConstraintName CHECK (Country = 'India')

ALTER TABLE TableName
ADD CONSTRAINT CheckConstraintName CHECK (Country = 'India')

-- To drop a consttraint

ALTER TABLE TableName
DROP CONSTRAINT CheckConstraintName;

--DEFAULT

CREATE TABLE TableName(
  Id int NOT NULL,
  Nmae varchar(255),
  phoneNumber int,
  Country varchar(255) DEFAULT 'India'
);

ALTER TABLE TableName
ADD CONSTRINT default_country DEFAULT 'India' for Country;

ALTER TABLE TableName
ADD CONSTRAINT Constraint_Name DEFAULT 'India' fro country

ALTER TABLE TableName 
ADD CONSTRAINT default_country DEFAULT 'INDIA' for Country;

ALTER TABLE TableName
ALTER COLUMN Country DROP DEFAULT


--INDEX

CREATE INDEX IndexName
ON TableName (Column1, Column2, ... , ColumnN);

CREATE UNIQUE INDEX IndexName
ON TableName (Column1, Column2, ... , ColumnN);

CREATE TABLE IndexName 
ON TableName (Column1, Column2, ... , ColumnN);

DROP INDEX TableName.IndexName;

--USE It selects database on which we want to perform operations

USE DatabaseName; -- Select database on which we have to perform operations

--INSERT INTO - INSERT NEW RECORDS INTO THE TABLE

INSERT INTO TableName (Column1,Column2,Column3,Column4)
VALUES(Value1,value2,value3,value4)

INSERT INTO TableName
VALUES (Value1, Value2, Value3, ...);

INSERT INTO TableName
VALUES (Value1,Value2,...,ValueN);

--UPDATE

--This statement is used to modify the records already present in the table

UPDATE TableName
SET Column1 = Value1, Column2 = Value2, ...
WHERE Condition;

UPDATE TableName
SET Coulumn1 = Value1
WHERE Id = 2;

UPDATE TableName
SET Name='Alex'
WHERE Id = '2';

DELETE FROM TableName WHERE Condition;

DELETE FROM TableName WHERE Name = 'Abhijeet Sinha';

DELETE FROM TableName
WHERE Name = 'Abhijeet'

-- SELECT - IT IS USED TO SELECT DATA FROM A DataBase and the data returned is stored in result table

SELECT *FROM TableName

SELECT Column1,Column2 FROM TableName

-- To select number of records to return

SELECT TOP 3 * FROM TABLENAME


CREATE TABLE StudentRecord(
  RegistrationNumber int NOT NULL,
  Name varchar(255) NOT NULL,
  Age varchar(255) CHECK(Age>=18 and Age<=25),
  Number int,
  Stream varchar(255) NOT NULL,
  CGPA int,
  CONSTRAINT UC_RegistrationNumber UNIQUE(RegistrationNumber)
);


-- SELECT DISTINCT

--It will return only different values

SELECT Column1, Column2, .... , ColumnN
FROM TableName;

SELECT DISTINCT Column1,Column2,...,ColumnN
FROM TableName;

--Order By
--It is used to sort the records in ascending or descending order
--by default the result are sorted in ascending order

-- for descending we can use DESC

SELECT Column1, Column2, ... , ColumnN FROM TableName
ORDER BY Column1, Column2,... ASC|DESC;


SELECT CGPA FROM StudentRecord 
ORDER BY CGPA DESC;

SELECT *FROM StudentRecord
ORDER BY Age DESC;

SELECT *FROM StudentRecord
ORDER BY Age ASC, CGPA DESC;

--GROUP BY
/*It is used with the aggregate function to group the result
set by one or more column
*/
SELECT Column1, Column2, ... ,  ColumnN
FROM TableName
WHERE Condition
GROUP BY ColumnName(s)

--To list number of employee from each city

SELECT COUNT(EmployeeID), City
FROM TableName
GROUP BY City


SELECT COUNT(Id) Rank
FROM StudentRecord
GROUP BY Rank;

SELECT COUNT(Rank) Rank
FROM StudentRecord
GROUP BY Rank;

--HAVING Clause is used in sql because WHERE Clause is not used everywhere

SELECT ColumnName
FROM TABLENAME
WHERE Condition
GROUP BY ColumnName
HAVING Condition
ORDER BY ColumnName

SELECT Rank
FROM StudentRecord
GROUP BY Rank
HAVING COUNT(RANK)>1
ORDER BY COUNT(RANK) DESC;

SELECT  Name
FROM StudentRecord
GROUP BY Rank
HAVING COUNT(RANK)>1
ORDER BY COUNT(RANK) DESC;


--SELECT INTO STATEMENT IS USED TO COPY Data from one table to another

SELECT *
INTO newTable
FROM OldTable
WHERE Condition;

--To create a backup of database
SELECT *
INTO BackupEmploye
FROM Employee;

SELECT Column1,Column2 INTO NewTableName
FROM TableName;

SELECT * INTO NewTableName
FROM TableName
WHERE City = 'Bangalore';

--OPERATORS

--1- ARTHIMETIC OPERATOR
-- %,/,*,-,+
--2- BITWISE OPERATOR
-- ^,|,&
--3- COMPARISON OPERATOR
--<> >= <= > < =
--4- COMPOUND OPERATOR
--  |*= -> BitwiseOR
--  ^-= -> BITWISE EXCLUSIVE
--  &= bitwise AND
--  %=  /= *= -=  +=
--5- LOGICAL OPERATOR
--AND OPERATOR - This operator displays the record which is satisfied by all condition seperated by AND
SELECT * FROM StudentRecord
WHERE CGPA>'9' AND RANK<2;

--OR Operator - This operator displays the record if any of the conddition is satisffied
SELECT * FROM StudentRecord
WHERE Rank>3 OR CGPA>9;

--NOT OPERATOR - When we want to display the record which did'nt satisfy the condition

SELECT * FROM StudentRecord
WHERE NOT CGPA>'9';