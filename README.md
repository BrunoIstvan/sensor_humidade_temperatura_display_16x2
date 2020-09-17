## DHT11 e Display 16x2 - Arduino Mega

Este exemplo de aplicação irá mostrar no display 16x2 os dados de humidade e temperatura recuperados através do sensor DHT11.

----

## Pinagem:

### Display:
|Terminais|Arduino|
|-|-|
|VSS|GND|
|VDD|5V|
|V0|Pino do meio do Potenciômetro|
|RS|D7|
|RW|GND|
|E|D6|
|D0|-|
|D1|-|
|D2|-|
|D3|-|
|D4|D5|
|D5|D4|
|D6|D3|
|D7|D2|
|A|5V|
|K|Terminal Resistor 220Ohms -> GND|
 
----- 

### Potenciômetro:
|Terminais|Arduino|
|-|-|
|1|5V|
|2|Ligado ao V0 do Display 16x2|
|3|GND|


----


### DHT11:
|Terminais|Arduino|
|-|-|
|1 > resistor 10K Ohms ao terminal 2 do DHT11|5V|
|2|D30|
|3|-|
|4|GND|

----
