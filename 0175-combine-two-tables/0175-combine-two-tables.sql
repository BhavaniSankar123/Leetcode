SELECT 
    per.firstname,
    per.lastname,
    adr.city,
    adr.state 
FROM 
    person per
LEFT JOIN
    address adr 
ON 
    per.personid = adr.personid