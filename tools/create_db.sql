-- Convencion:
-- Nombre de DB, user, pass sean iguales.
-- Nombre DB: appnombreproyecto

create database RE;
create user RE;
grant all on RE.* to 'RE'@'localhost';
set password for 'RE'@'%'=password('RE');
