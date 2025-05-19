-- https://leetcode.com/problems/recyclable-and-low-fat-products

-- Write your PostgreSQL query statement below
SELECT product_id FROM Products WHERE low_fats = 'Y' AND recyclable = 'Y'
