WITH  blue_packages_and_year  as (select packages.year, packages.id_user_sender, packages.id_user_receiver from packages
where packages.color = 'blue' or packages.year = 2015), 

sender_names as (
  select blue_packages_and_year.year, users.name as sender, blue_packages_and_year.id_user_receiver FROM
  blue_packages_and_year join users on blue_packages_and_year.id_user_sender = users.id AND
  users.address != 'Taiwan'), 
  
  receiver_names as (
    select sender_names.year, sender_names.sender, users.name as receiver FROM
  sender_names join users on sender_names.id_user_receiver = users.id AND
  users.address != 'Taiwan')
select * from receiver_names order by receiver_names.year desc
