# Write your MySQL query statement below
select unique_id, name from Employees  left join EmployeeUNI on Employees.id=EmployeeUNI.id ;

-- select unique_id, name from Emloyees full outer join on EmployeeUNI on Employees.id=EmployeeUNI.id;