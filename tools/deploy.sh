#!/bin/bash
# deploy.sh funciona unicamente contra sugar-mant.gcoop.com.ar

if [ $# -lt 2 ]; then
    echo "uso: $0 user nombre-repositorio"
    exit
fi    

user=$1
site=$2
modulos=tools/listado-modulos.txt
features=tools/listado-features.txt
DB_HOST="localhost"
DB_NAME=$site
DB_USER="root"
DB_PASS=""

drush=/root/drush/drush

#borrar el repositorio
if [ -d $site ]; then
    echo "Borrando $site"
    rm -rf $site
fi

#clonar el repositorio
echo "Clonando $site read-only"
git clone git://github.com/gcooplibre/gestioncoop.git

#copiar default.settings.php a settings.php editando la conexion a la db 
conexion_db="\$db_url = 'mysql:\/\/$DB_USER:$DB_PASS@$DB_HOST\/$DB_NAME';"

echo "Copiando default.settings.php a settings.php"
echo "Conexión a la db: $conexion_db"
sed "92s/.*/$conexion_db/" $site/sites/default/default.settings.php > $site/sites/default/settings.php
chmod go-w $site/sites/default/settings.php

#crear directorio files
echo "Creando directorio sites/default/files"
mkdir -p $site/sites/default/files
#crear directorio tmp
echo "Creando directorio sites/default/tmp"
mkdir -p $site/sites/default/tmp

#restaurar la base de datos inicial 
echo "Drop database anterior"
echo "DROP database $DB_NAME;" | mysql -h $DB_HOST --user=$DB_USER --password=$DB_PASS
echo "Create database"
echo "CREATE database $DB_NAME;" | mysql -h $DB_HOST --user=$DB_USER --password=$DB_PASS
#restaurar la base de datos inicial 
echo "Restaurando la base de datos inicial"
mysql -h $DB_HOST --user=$DB_USER --password=$DB_PASS --database=$DB_NAME < $site/tools/database.sql

# Entro a $site para poder ejecutar linea drush
cd $site
#habilitar modulos
echo "Habilitando módulos"
##########cat $modulos | cut -d"(" -f2 | cut -d")" -f1 | xargs /root/drush/drush en -y
xargs -a $modulos $drush en -y

#habilitar features
echo "Habilitando features"
xargs -a $features $drush en -y

echo "Revert configuraciones generales de nuestra feature"
$drush fr gcoop_conf_basicas

# Borrar .git
# Borrar directorios de modulos contrib NO usados
