# Write your MySQL query statement below
SELECT firstname , lastname , city , state from Person left join Address on Person.personId=Address.personId;
