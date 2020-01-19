Event33 = "You get to the beginning of the bridge that separates the hospital from the mainland.\nTo your dismay you can see your car on the bridge speeding towards you and the hospital.\nWill you make it in time?\n\n"
Option1 = "Run faster."

function Event()
    print("Event: 33\n")
    value = EnterDialouge1(Event33, Option1)
	life = GetLife()
	if life > 0.0 then
		NextEvent("NewEvents/Event34.lua")
	elseif life == 0.0 then
		NextEvent("NewEvents/Event43.lua")
	end
end
--THIS IS WILL-RELATED