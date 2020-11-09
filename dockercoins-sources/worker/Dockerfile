FROM python:3.10.0a2-alpine3.12
RUN apk add curl
RUN pip install redis
RUN pip install requests
COPY worker.py /
CMD ["python", "worker.py"]
