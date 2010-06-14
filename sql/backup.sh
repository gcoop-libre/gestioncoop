#!/bin/bash

DB_HOST="localhost"
DB_NAME="DBNAME"
DB_USER="DBUSER"
DB_PASS="DBPASS"

mysqldump -h $DB_HOST --user=$DB_USER --password=$DB_PASS -B $DB_NAME --opt > $DB_NAME.sql
gzip $DB_NAME.sql
