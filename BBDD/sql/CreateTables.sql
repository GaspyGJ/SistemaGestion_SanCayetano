PRAGMA foreign_keys = ON;

CREATE TABLE "Clientes" (
	"id_Cliente"	INTEGER,
	"nombre"	TEXT NOT NULL UNIQUE,
	PRIMARY KEY("id_Cliente" AUTOINCREMENT)
);

CREATE TABLE "DireccionC" (
	"id_Cliente"	INTEGER,
	"direccion"		TEXT,
	PRIMARY KEY("direccion","id_Cliente"),
	FOREIGN KEY("id_Cliente") REFERENCES "Clientes"("id_Cliente")
);

CREATE TABLE "TelefonosD" (
	"id_Cliente"	INTEGER,
	"direccion"		TEXT,
	"telefono"		TEXT,
	PRIMARY KEY("id_Cliente","direccion","telefono"),
	FOREIGN KEY("id_Cliente","direccion") REFERENCES "DireccionC"("id_Cliente","direccion") ON UPDATE CASCADE
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
	"cantidad_Producto"	INTEGER NOT NULL CHECK("cantidad_Producto" > 0),
	"precio_Producto"	REAL NOT NULL CHECK("precio_Producto" > 0),
	"fecha_Venta"	TEXT NOT NULL,
	"id_Producto"	INTEGER NOT NULL,
	"id_Cliente"	INTEGER NOT NULL,
	"total_Venta"	AS (cantidad_Producto*precio_Producto ),
	PRIMARY KEY("id_Venta" AUTOINCREMENT),
	FOREIGN KEY("id_Cliente") REFERENCES "Clientes"("id_Cliente"),
	FOREIGN KEY("id_Producto") REFERENCES "Productos"("id_Producto")
)
