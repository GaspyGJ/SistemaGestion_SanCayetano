CREATE TABLE "Clientes" (
	"id_Cliente"	INTEGER,
	"nombre"	TEXT NOT NULL UNIQUE,
	PRIMARY KEY("id_Cliente" AUTOINCREMENT)
);

CREATE TABLE "DireccionC" (
	"direccion"	TEXT,
	"id_Cliente"	INTEGER,
	FOREIGN KEY("id_Cliente") REFERENCES "Clientes"("id_Cliente"),
	PRIMARY KEY("direccion","id_Cliente")
);

CREATE TABLE "TelefonosC" (
	"telefono"	TEXT,
	"id_Cliente"	INTEGER,
	"direccion"	TEXT,
	PRIMARY KEY("telefono","id_Cliente"),
	FOREIGN KEY("id_Cliente") REFERENCES "Clientes"("id_Cliente")
);

CREATE TABLE "Productos" (
	"id_Producto"	INTEGER,
	"nombre"	TEXT NOT NULL UNIQUE,
	"precio"	REAL NOT NULL,
	"cant_Stock"	INTEGER DEFAULT 0,
	"fecha_Ultima_Incorporacion"	TEXT,
	PRIMARY KEY("id_Producto" AUTOINCREMENT)
);


CREATE TABLE "Ventas" (
	"id_Venta"	INTEGER,
	"cantidad_Producto"	REAL NOT NULL CHECK(cantidad_Producto>0),
	"precio_Producto"	REAL NOT NULL CHECK(precio_Producto>0),
	"fecha_Venta"	TEXT NOT NULL,
	"id_Producto"	INTEGER,
	"id_Cliente"	INTEGER,
	PRIMARY KEY("id_Venta" AUTOINCREMENT),
	FOREIGN KEY("id_Producto") REFERENCES "Productos"("id_Producto"),
	FOREIGN KEY("id_Cliente") REFERENCES "Clientes"("id_Cliente")
);