Event38 = "You make a lot of noise, but the window does not break.\nYou are bleeding from your elbow.\n\n"
Option1 = "Use HAIRPIN to open the window.\n"

function Event()
    print("Event: 38\n")
    value = EnterDialouge1(Event38, Option1)
    NextEvent("NewEvents/Event29.lua")
end


