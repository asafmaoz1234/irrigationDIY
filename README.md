# irrigationDIY

A Do It Yourself irrigation system Arduino project.

Use Arduino Uno and a simple watter pump to set up

automated irrigation anywhere you need.

This project includes 

- A description of the needed components.

- A sketch of the connections in the system and a video of the system. 

- The source code used for activating the system.


[![video tutorial](https://img.youtube.com/vi/A6I3NKL1pUE/0.jpg)](https://youtu.be/uQyjRWnla7U)

- click to watch the [Connected system demo](https://youtu.be/uQyjRWnla7U)



* components I used:
	- Arduino Uno board
	- 12V Water pump
	https://www.ebay.com/itm/252557630084
	- 5V Relay
	https://www.ebay.com/itm/301924608045
	- 12V charger
	- 9V charger
	- A few connectors and cables (see video)
	
* Connections:

	Arduino - Relay
	
		PIN 13	-> Signal (VCC)
		
		PIN 10	-> Ground
		
		5V		-> 5V (IN)
		

		
	Relay - Pump/Power
	
		COM		-> Power (12V)
		
		ON 		-> Pump


![image](https://bitbucket.org/asafmaoz/irrigationdiy/raw/master/addedContent/System_components.PNG)