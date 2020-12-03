FROM golang AS mybuildstage
WORKDIR /build/
COPY memLeak.c .
RUN gcc -o memLeak memLeak.c -static
RUN ls

FROM alpine
COPY --from=mybuildstage /build/memLeak .
CMD ["./memLeak"]
