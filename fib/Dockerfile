# Use an official Python runtime as a parent image
FROM python:3.10-slim

# Install g++ for C++ compilation
RUN apt-get update && \
    apt-get install -y --no-install-recommends g++ && \
    rm -rf /var/lib/apt/lists/*

# Set the working directory in the container
WORKDIR /usr/src/app

# Copy the current directory contents into the container at /usr/src/app
COPY . .

# Compile the C++ program
RUN g++ -o fibbin fib.cpp

# Run fib.py when the container launches
CMD ["python", "fib.py"]
