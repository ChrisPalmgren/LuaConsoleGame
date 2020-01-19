Event35 = "Thanks to your quick decision of simply dashing there, you arrive at the beginning of the bridge before your car is at the other end.\nThere should be time to do s o m e t h i n g, but what?\n\n"
Option1 = "Run towards the point of the where the accident was."

function Event()
    print("Event: 35\n")
    value = EnterDialouge1(Event35, Option1)
    NextEvent("NewEvents/Event36.lua")
end
