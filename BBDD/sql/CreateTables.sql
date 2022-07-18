--CREACION DE LAS TABLAS EN POSTRE SQL

-- Table: san_cayetano.productos
-- DROP TABLE IF EXISTS san_cayetano.productos;

CREATE TABLE IF NOT EXISTS san_cayetano.productos
(
    id_producto integer NOT NULL DEFAULT nextval('san_cayetano.productos_id_producto_seq'::regclass),
    nombre character varying(40) COLLATE pg_catalog."default" NOT NULL,
    precio real,
    cantstock smallint,
    CONSTRAINT productos_pkey PRIMARY KEY (id_producto),
    CONSTRAINT productos_precio_check CHECK (precio >= 0::double precision),
    CONSTRAINT productos_cantstock_check CHECK (cantstock >= 0)
)

-- Table: san_cayetano.clientes
-- DROP TABLE IF EXISTS san_cayetano.clientes;

CREATE TABLE IF NOT EXISTS san_cayetano.clientes
(
    id_cliente integer NOT NULL DEFAULT nextval('san_cayetano.clientes_id_cliente_seq'::regclass),
    nombre character varying(40) COLLATE pg_catalog."default" NOT NULL,
    telefono character varying(20) COLLATE pg_catalog."default" DEFAULT 'vacio'::character varying,
    direccion character varying(50) COLLATE pg_catalog."default" DEFAULT 'vacio'::character varying,
    CONSTRAINT clientes_pkey PRIMARY KEY (id_cliente)
)

-- Table: san_cayetano.ventas
-- DROP TABLE IF EXISTS san_cayetano.ventas;

CREATE TABLE IF NOT EXISTS san_cayetano.ventas
(
    id_venta integer NOT NULL DEFAULT nextval('san_cayetano.ventas_id_venta_seq'::regclass),
    id_producto integer NOT NULL,
    id_cliente integer NOT NULL,
    precio_producto real,
    cant_producto smallint,
    CONSTRAINT ventas_pkey PRIMARY KEY (id_venta),
    CONSTRAINT ventas_id_cliente_fkey FOREIGN KEY (id_cliente)
        REFERENCES san_cayetano.clientes (id_cliente) MATCH SIMPLE
        ON UPDATE NO ACTION
        ON DELETE NO ACTION,
    CONSTRAINT ventas_id_producto_fkey FOREIGN KEY (id_producto)
        REFERENCES san_cayetano.productos (id_producto) MATCH SIMPLE
        ON UPDATE NO ACTION
        ON DELETE NO ACTION,
    CONSTRAINT ventas_precio_producto_check CHECK (precio_producto >= 0::double precision),
    CONSTRAINT ventas_precio_producto_check1 CHECK (precio_producto >= 0::double precision)
)