import os
import sys
import socket
from os import listdir
from os.path import isfile, join


mypath = "./crashes/"

def listen():
    connection = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    connection.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    connection.bind(('0.0.0.0', 80))
    connection.listen(10)
    id = -1
    # enumerate files send them one by one
    onlyfiles = [f for f in listdir(mypath) if isfile(join(mypath, f))]
    total_files = len(onlyfiles)
    while True:
        current_connection, address = connection.accept()
        print ("Incoming connection #%d" % id)
        id += 1
        while True:
            data = current_connection.recv(2048)
            if len(data) == 0:
                continue
            else:
                 file_name = onlyfiles[id % total_files]
                 print "Sending %s\n" % file_name
                 packet = open(mypath + file_name, 'r').readlines()
                 packet = "".join(packet)
                 #packet = packet.replace("\n", "\r\n")
                 packet = packet + "\r\n"

            decoded = ":".join("{:02x}".format(ord(c)) for c in data)
            #print "Received %d bytes, content = %s" % (len(data), str(data)) 
            if len(data) > 0:
                print "Sending back %d bytes" % len(packet)
                try:
                    current_connection.send(packet)
                    #current_connection.send(data)
                except:
                    print "failed to send"
                break

if __name__ == "__main__":
    listen()
