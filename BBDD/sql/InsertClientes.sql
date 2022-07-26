delete from TelefonosD;
delete from DireccionC;
delete from Clientes;

UPDATE sqlite_sequence SET seq = 0 WHERE name = 'Clientes';

INSERT INTO Clientes (nombre)
VALUES ('Particular');

INSERT INTO Clientes (nombre)
VALUES ('Empresa Gasparin y Amigos');

INSERT INTO Clientes (nombre)
VALUES ('Empresa Juanjin SA');


INSERT INTO DireccionC ( id_Cliente ,direccion)
VALUES ( 2 , 'Calle 2');

INSERT INTO DireccionC ( id_Cliente ,direccion)
VALUES ( 2 , 'Calle 2.2');

INSERT INTO DireccionC ( id_Cliente ,direccion)
VALUES ( 3 , 'Calle 3');


INSERT INTO TelefonosD (id_Cliente , direccion , telefono)
VALUES (2 , 'Calle 2' , '123456789');

INSERT INTO TelefonosD (id_Cliente , direccion , telefono)
VALUES (2 , 'Calle 2' , '987654321');

INSERT INTO TelefonosD (id_Cliente ,direccion , telefono)
VALUES ( 3 ,'Calle 3', '567891234');
