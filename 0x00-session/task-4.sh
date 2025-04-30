mkdir syria-cities
mkdir Damascus Latakia Hama Aleppo Homs
rm -r *
mkdir egypt_cities
mkdir egypt_cities/Alexandria egypt_cities/Cairo egypt_cities/Port\ Said egypt_cities/Aswan egypt_cities/Delta
touch egypt_cities/Alexandria/data.txt egypt_cities/Cairo/data.txt egypt_cities/Port\ Said/data.txt egypt_cities/Aswan/data.txt egypt_cities/Delta/data.txt
rm -r egypt_cities
cp cities_script.sh backup_script.sh

