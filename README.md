# InfluxDB

## Initialization

The file influx_init.iql is only executet if no DB exists. To rerun this file again execute this command:

~~~~
docker-compose exec influxdb /usr/bin/influx -username admin -password influx_pw -import -path /docker-entrypoint-initdb.d/influx_init.iql
~~~~
