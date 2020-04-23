-- select Email from (select Email, count(1) as ct from Person group by Email) t where ct > 1;
select Email from Person group by Email having count(1) > 1;