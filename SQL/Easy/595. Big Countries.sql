-- Write your MySQL query statement below

-- Notes:
-- - Big country if: Area >= 3,000,000 OR Popution >= 25,000,000

SELECT name, population, area FROM World WHERE area >= 3000000 OR population >= 25000000;