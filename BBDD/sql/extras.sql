-- borrar sequencias -> 

UPDATE sqlite_sequence SET seq = 0 WHERE name = 'Clientes';

select * from sqlite_sequence;

-----------------------

delete from TelefonosD;
delete from DireccionC;
delete from Clientes;


-----------------------

select C.id_Cliente,C.nombre,D.direccion,T.telefono
from (Clientes C left join DireccionC D on C.id_Cliente=D.id_Cliente)
left join TelefonosD T on D.direccion=T.direccion and D.id_Cliente=T.id_Cliente;