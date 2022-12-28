# FibonacciSequence
Nazwa: FibonacciSequence<br>
Autor: Wojciech Podmokły<br>
Grupa dziekńska: 2.3<br>

# Program [Ad. p1]

Program fibonacciSequence.c wczytuje ze standardowego wejścia numer i zwraca wartość ciągu Fibonacciego o tym numerze z przedziału <1,60>.<br>
Program wykorzystuje w tym celu programowanie dynamiczne, czyli zmodyfikowaną wersje algorytmu rekurencyjnego. Polega ona na tym, że zapisujemy wyniki do tablicy dla kolejnych poziomów zagnieżdżania rekurencyjnego, dzięki czemu unikamy wielokrotnego liczenia wartości dla tych samych numerów sekwencji.<br>

# Utworzenie repozytorium [Ad. p1]

W celu utworzenia repozytorium lokalnie, w folderze projektu, używamy komendy `git init`.<br>

![](local_rep.png)

Następnie logujemy się przy pomocy `gh auth login`.<br>

![](auth.png)

Ostatecznie dodajemy lokalne repozytorium na GitHub przy pomocy komendy `gh repo create`.<br>

![](repocreate.png)

W efekcie otrzymujemy powyższe repozytorium.<br>

# Stworzenie i uruchomienie obrazu dockera z apliakcją [Ad. p2]

Tworzymy Dockerfile jak powyżej.<br><br>
Następnie poleceniem `docker build -t fibonacci-sequence .` tworzymy obraz o nazwie fibonacci-sequence.<br>
Aby uruchomić obraz używamy komendy `docker run -i -a stdout -a stdin fibonacci-sequence`. 

![](test.png)

Jak widzimy powyższy kod działa poprawnie.

# Plik fib.yml [Ad. p3]

Plik fib.yml zapewnia poprawne dziłanie akcji GitHub. Po wykonaniu push z tagiem uruchamia się pipline który powoduje zbudowanie obrazu i dodanie go z odpowiednią wersją na docker hub. <br>

![](addvarsion.png)

Po dodaniu wersji. <br>

![](actions.png)

![](packages.png)

# Docker hub [Ad. p4]

Po wykonaniu pipeline odpowiednia wersja trafia na docker hub. <br>

![](dockerhub.png)

# Sprawdzenie obrazu [Ad. p4]

W celu uruchomienia obrazu używamy komendy `docker run -i -a stdout -a stdin wojtekpodmokly/fibonaccisequence:1.0.0`, która (pobieże nam obraz jeśli nie istnieje) uruchomi nam kontener.




