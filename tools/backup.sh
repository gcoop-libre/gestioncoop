#!/bin/bash

drush='/home/deb/drush/drush'
$drush watchdog-delete all
$drush cc all
$drush sql-dump > database.sql
