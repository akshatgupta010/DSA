# Write your MySQL query statement below

SELECT uni.product_name , uni.year , uni.price
FROM (
    SELECT p.product_name , s.year , s.price
    FROM Sales AS s
    LEFT JOIN Product AS p
    ON s.product_id = p.product_id
) AS uni;