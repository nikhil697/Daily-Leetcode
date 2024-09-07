# Write your MySQL query statement below
select p.product_name,sum(o.unit) as unit from Products p Join Orders o on p.product_id = o.product_id where o.order_date like "2020-02%" AND o.product_id IN (
    SELECT o2.product_id 
    FROM Orders o2 
    WHERE o2.order_date LIKE '2020-02%'
    GROUP BY o2.product_id 
    HAVING SUM(o2.unit) >= 100
  )
GROUP BY o.product_id;