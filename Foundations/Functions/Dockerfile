FROM gcc:latest

WORKDIR /app

COPY evenfunction.cpp .
COPY Even.cpp .

RUN g++ evenfunction.cpp Even.cpp -o evenfunction

CMD ["./evenfunction"]