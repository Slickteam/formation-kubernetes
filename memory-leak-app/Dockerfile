FROM golang AS mybuildstage
WORKDIR /build/
COPY memLeak.c .
RUN gcc -o memLeak memLeak.c -static
RUN ls

FROM scratch
COPY --from=mybuildstage /build/memLeak .
CMD ["./memLeak"]