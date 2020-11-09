FROM ruby:slim-buster
RUN apt-get update && apt-get install -y build-essential
RUN gem install sinatra
RUN gem install thin
ADD hasher.rb /
CMD ["ruby", "hasher.rb"]
EXPOSE 80
