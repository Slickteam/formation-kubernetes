FROM rust:alpine as builder
COPY hello.rs /
RUN rustc hello.rs

FROM alpine
COPY --from=builder /hello .
CMD ["/hello"]
