# FibonacciSequence
Nazwa: FibonacciSequence<br>
Autor: Wojciech Podmokły<br>
Grupa dziekńska: 2.3<br>

# Program

Program fibonacciSequence.c wczytuje ze standardowego wejścia numer i zwraca wartość ciągu Fibonacciego o tym numerze z przedziału <1,60>.<br>
Program wykorzystuje w tym celu programowanie dynamiczne, czyli zmodyfikowaną wersje algorytmu rekurencyjnego. Polega ona na tym, że zapisujemy wyniki do tablicy dla kolejnych poziomów zagnieżdżania rekurencyjnego, dzięki czemu unikamy wielokrotnego liczenia wartości dla tych samych numerów sekwencji.<br>

# Utworzenie repozytorium

W celu utworzenia repozytorium lokalnie, w folderze projektu, używamy komendy `git init`.<br>

![](local_rep.png =100x20)

Następnie logujemy się przy pomocy `gh auth login`.<br>

![](auth.png =100x20)

Ostatecznie dodajemy lokalne repozytorium na GitHub przy pomocy komendy `gh repo create`.<br>

![](repocreate.png =100x20)

W efekcie otrzymujemy powyższe repozytorium.<br>

# Stworzenie i uruchomienie obrazu dockera z apliakcją

Tworzymy Dockerfile jak powyżej.<br><br>
Następnie poleceniem `docker build -t fibonacci-sequence .` tworzymy obraz o nazwie fibonacci-sequence.<br>
Aby uruchomić obraz używamy komendy `docker run -i -a stdout -a stdin fibonacci-sequence`. 

![](test.png =100x20)

Jak widzimy powyższy kod działa poprawnie.

# Plik fib.yml

Plik fib.yml zapewnia poprawne dziłanie akcji GitHub. Po wykonaniu push z tagiem uruchamia się pipline który powoduje zbudowanie obrazu i dodanie go z odpowiednią wersją na docker hub. <br>

![](addvarsion.png =100x20)

Po dodaniu wersji. <br>

![](actions.png =100x20)

![](packages.png =100x20)

# Docker hub

Po wykonaniu pipeline odpowiednia wersja trafia na docker hub. <br>

![](dockerhub.png =100x20)

# Sprawdzenie obrazu

W celu uruchomienia obrazu używamy komendy `docker run -i -a stdout -a stdin wojtekpodmokly/fibonaccisequence:1.0.0`, która (pobieże nam obraz jeśli nie istnieje) uruchomi nam kontener.




