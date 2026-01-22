echo "Podaj sciezke";

read sciezka;

if [ ! -d $sciezka ]; then
	echo "sciezka nie istnieje";
	exit 1
fi

if [ ! -w $sciezka ]; then
	echo "nie ma uprawnien";
	exit 1
fi

if ! gcc -o 1 1.c ; then
	echo "blad przy kompilacji";
	exit 1
fi

echo "export PATH=$PATH:/home/stas/1"
exit 0
