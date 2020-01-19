Event25 = "No success.\n\n"
Option1 = "Use the KNIFE to cut yourself loose."

function Event()
    print("Event: 25\n")
    value = EnterDialouge1(Event25, Option1)
    NextEvent("NewEvents/Event26.lua")
end

