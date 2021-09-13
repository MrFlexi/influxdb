#!/bin/bash
echo "down..."
docker-compose down
echo "up..."
docker-compose up -d
echo "Logs:"
docker-compose logs