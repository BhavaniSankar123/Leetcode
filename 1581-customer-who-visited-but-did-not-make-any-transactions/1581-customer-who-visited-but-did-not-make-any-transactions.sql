# Write your MySQL query statement below
select v.customer_id,
count(v.visit_id)
 as count_no_trans 
 from visits as v left join transactions as t 
 on v.visit_id=t.visit_id
  where amount is null group by customer_id;