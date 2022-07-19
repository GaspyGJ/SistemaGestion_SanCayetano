INSERT INTO Clientes (nombre)
VALUES ('Particular');


INSERT INTO Clientes (nombre)
VALUES ('Empresa Gasparin y Amigos');

INSERT INTO DireccionC (direccion,id_Cliente)
VALUES ('Calle 1',2);

INSERT INTO DireccionC (direccion,id_Cliente)
VALUES ('Calle 2',2);

INSERT INTO TelefonosC (telefono,id_Cliente,direccion)
VALUES ('3424863355',2 ,'Calle 1');

INSERT INTO TelefonosC (telefono,id_Cliente,direccion)
VALUES ('1234567891',2,'Calle 2');


INSERT INTO Clientes (nombre)
VALUES ('Empresa Juanjin SA');

INSERT INTO DireccionC (direccion,id_Cliente)
VALUES ('Calle 3',3);

INSERT INTO TelefonosC (telefono,id_Cliente,direccion)
VALUES ('3426666666',3,'Calle 3');


/*
select C.id_Cliente , C.nombre, T.telefono , D.direccion
from   (Clientes C left join TelefonosC T on  C.id_Cliente=T.id_Cliente)
		left join DireccionC D on T.direccion=D.direccion;
*/