import serial.tools.list_ports

def vypis_serialova_zarizeni():
    ports = serial.tools.list_ports.comports()
    for port in ports:
        print(port)

vypis_serialova_zarizeni()
