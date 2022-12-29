# FibonacciSequence
Nazwa: FibonacciSequence<br>
Autor: Wojciech Podmokły<br>
Grupa dziekńska: 2.3<br>

# Program [Ad. p1]

Program fibonacciSequence.c wczytuje ze standardowego wejścia numer i zwraca wartość ciągu Fibonacciego o tym numerze z przedziału <1,60>.<br>
Program wykorzystuje w tym celu programowanie dynamiczne, czyli zmodyfikowaną wersje algorytmu rekurencyjnego. Polega ona na tym, że zapisujemy wyniki do tablicy dla kolejnych poziomów zagnieżdżania rekurencyjnego, dzięki czemu unikamy wielokrotnego liczenia wartości dla tych samych numerów sekwencji.<br>

# Utworzenie repozytorium [Ad. p1]

W celu utworzenia repozytorium lokalnie, w folderze projektu, używamy komendy `git init`.<br>

![H](local_rep.png)

Następnie logujemy się przy pomocy `gh auth login`.<br>

![H](auth.png)

Ostatecznie dodajemy lokalne repozytorium na GitHub przy pomocy komendy `gh repo create`.<br>

![H](repocreate.png)

W efekcie na GitHub pojawiło sie obecje repozytorium.<br>

# Stworzenie i uruchomienie obrazu dockera z apliakcją [Ad. p2]

Do zbudowania obrazu należy wykorzystać dockerfile znajdujący się na tym repozytorium.<br><br>
Zbudować obraz należy poleceniem `docker build -t fibonacci-sequence .`, które tworzy obraz o nazwie fibonacci-sequence.<br>
Aby uruchomić obraz używamy komendy `docker run -i -a stdout -a stdin fibonacci-sequence`. 
Efektem jest uruchomienie kontenera z aplikacją która oczekuje na podanie numeru ciągu Fibonacciego.

![H](test.png)

Przeprowadzone testy pokazują, że aplikacja działa zgodnie z założeniami.

# Plik fib.yml [Ad. p3]

Plik fib.yml zapewnia poprawne dziłanie akcji GitHub. Po wykonaniu push z tagiem wersji uruchamia się workflow który powoduje zbudowanie obrazu i dodanie go z odpowiednią wersją (zgodną z semver) na docker hub i ghcr.io. <br><br>

Dodanie wersji.<br>

![H](addversion.png)

# Cache [Ad. p4]

Dzięki użyciu cache'a, kolejny build wykonał się o około 30% szybciej.<br>

![H](actions.png)

# ghcr.io [Ad. p4]

Z ghcr obraz możemy pobrac przy pomocy komendy `docker pull ghcr.io/ozel981/fibonaccisequence:1.0.1`.

![H](packages.png)

# Docker hub [Ad. p4]

Po wykonaniu pipeline odpowiednia wersja trafia na docker hub. <br>

![H](dockerhub.png)

# Sprawdzenie obrazu [Ad. p4]

W celu uruchomienia obrazu używamy komendy `docker run -i -a stdout -a stdin wojtekpodmokly/fibonaccisequence:1.0.0`, która pobieże nam obraz jeśli nie istnieje lokalnie i uruchomi nam kontener. <br>

![H](finaltest.png)

Jak widzimy na powyższym obrazku po przeprowadzeniu podobnego testu jak poprzednio otrzymaliśmy wyniki potwierdzające poprawne działanie kontenera z aplikacją.<br>




