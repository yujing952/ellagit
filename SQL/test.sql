#select * from Websites;
select * from access_log;

#insert into access_log values(10, 6, 111, '2016-03-09');
/*
select w.name, a.count, a.date
from Websites as w
right join access_log as a
on w.id= a.site_id
order by a.count desc;
*/