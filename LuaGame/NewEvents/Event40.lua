Event40 = "Locking the door makes you feel safer. Hopefully this gives you more time to escape. You look at the window.\n\n"
Option1 = "Pull it open."
Option2 = "Yell at it."

function Event()
    print("Event: 40\n")
    value = EnterDialouge(Event40, Option1, Option2)
    NextEvent("NewEvents/Event41.lua")
end

