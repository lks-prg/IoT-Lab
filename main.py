from flask import Flask, render_template_string, request, render_template
import serial
import time

app = Flask(__name__)

# Otevření sériového portu (nastavte správný port a rychlost)
ser = serial.Serial('COM3', 9600, timeout=1)
time.sleep(5)  # Počkejte, až se sériový port inicializuje

# HTML šablona s přepínačem

@app.route('/')
def index():
    return render_template("index.html")

@app.route('/ledka/')
def led():
    return render_template("led.html")

@app.route('/led/<state>')
def led_control(state):
    if state == "on":
        ser.write(b'led - on\n')
        return 'LED je zapnuta.'
    elif state == "off":
        ser.write(b'led - off\n')
        return 'LED je vypnuta.'
    else:
        return 'Neplatný příkaz.'

@app.route('/teplota')
def teplota():
    ser.readline()
    teplota=0  # Odstranění případných zbytků v sériovém portu
    teplota = ser.readline().decode('utf-8').split(' - ')[1]  # Čtení teploty z sériového portu
    return render_template("teplota.html")

if __name__ == '__main__':
    app.run(debug=True)
