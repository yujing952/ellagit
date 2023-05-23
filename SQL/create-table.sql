use RUNOOB;
/*
create table Websites(ID integer primary key, 
					  name text, 
                      url text, 
                      alexa  integer, 
                      country text);
insert into Websites values(1,'google', 'www.google.com', 1, 'USA'),
							(2,'taobao', 'www.taobao.com', 13, 'CN'),
							(3,'runoob', 'www.runoob.com', 4689, 'CN'),
							(4,'weibo', 'www.weibo.com', 20, 'CN');

 
create table access_log(aid integer not null auto_increment primary key,
					   site_id integer not null comment 'website id', 
                       count integer  comment 'access times',
                       `date` date not null);

insert into access_log values(1, 1, 45, '2016-05-10'),
							(2, 3, 100, '2016-05-13'),
							(3, 1, 230, '2016-05-14'),
							(4, 2, 10, '2016-05-14'),
							(5, 5, 205, '2016-05-14'),
							(6, 4, 13, '2016-05-15'),
							(7, 3, 220, '2016-05-15'),
							(8, 5, 545,'2016-05-16'),
							(9, 3, 201,'2016-05-17');
 */
 
 create table apps(id integer  not null auto_increment primary key, app_name text, url text, country text );
 


