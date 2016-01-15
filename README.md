METRO
=====================

Metro library for Arduino or Wiring that facilitates the implementation of recurring timed events
by Thomas Ouellet Fredericks
with contributions from: Paul Bouchier and Benjamin.soelberg, and Alexander Martin

Download the latest version here : https://github.com/thomasfredericks/Metro-Arduino-Wiring/archive/master.zip

Documentation can be found here : https://github.com/thomasfredericks/Metro-Arduino-Wiring/wiki

This fork adds changes the functionality of the timer by implementing multiple varieties of check functions which allow for different behavior.

check()	        -- if the timer is expired, resets the time by updating the base time to the current time
expired()	-- simply checks the timer and returns true or false.
checkCatchUp()  -- if the timer is expired, increments the base time by the interval. Reduces buildup of lag.
running()	-- if the timer is still running, returns true.

Forked for Particle.io board use. Scott Beasley 2016.
