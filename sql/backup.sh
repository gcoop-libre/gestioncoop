#!/bin/bash

DB_HOST="localhost"
DB_NAME="gestion"
DB_USER="root"
DB_PASS="latribu"

mysqldump -h $DB_HOST --user=$DB_USER --password=$DB_PASS -B $DB_NAME --opt > $DB_NAME.sql
gzip $DB_NAME.sql
