Event32 = "You spend a good 10 minutes looking for an unlocked bike.You find none and panic since you have now wasted precious time.\nYou peer your eyes towards the bridge. You can barely see it because of the rain.\nThe clouds are growing darker and darker and you can hear muffled sounds from thunder.\n\n"
Option1 = "Run towards the bridge."

function Event()
    print("Event: 32\n")
    value = EnterDialouge1(Event32, Option1)
    NextEvent("NewEvents/Event33.lua")
end

