Feature: Cars
	In order to ensure road safety
	As a driver
	I want to be certain all tires will work

@examples
Scenario Outline: Check tire and engine combinations
	Given I am driving a car with a transmission of type:
		| transmission |
		| manual       |
		| automatic    |
	And I have an engine of size:
		| engine |
		| 500cc  |
		| 1000cc |
		| 1200cc |
	When I press put on these tires:
		| tread  |
		| winter |
		| summer |
	Then the max speed should be <speed>, the grip should be <grip>, and mileage should be less than <mileage>

	Examples:
		| speed | grip | mileage |
		| 50    | 28   | 19.2    |
		| 100   | 99   | 18      |
		| 45    | 38   | 23      |
		| 12    | 43   | 12      |
