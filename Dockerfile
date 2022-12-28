FROM gcc:12.2.0
COPY ./app /usr/src/fibonacciSequence
WORKDIR /usr/src/fibonacciSequence
RUN gcc -o fibonacciSequence fibonacciSequence.c
CMD ["./fibonacciSequence"]