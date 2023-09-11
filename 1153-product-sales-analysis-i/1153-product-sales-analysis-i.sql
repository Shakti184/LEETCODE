# Write your MySQL query statement below
select Product.product_name , Sales.year , Sales.price
from Sales,Product where sales.product_id=product.product_id