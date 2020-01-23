Event31 = "With your hands now hopefully protected from any rough or slippery surfances, you begin to descend carefully and eventually make it to the ground.\nThe bridge is in eyesight.\nYou are certain that as soon as you get there before the time of your partner's accident, you can change fate.\n\n"
Option1 = "Look for a vehicle."
Option2 = "Run towards the bridge."

function Event()
    print("Event: 31\n")
    value = EnterDialouge(Event31, Option1, Option2)
    if value == 0.0 then
        NextEvent("NewEvents/Event32.lua")
    elseif value == 1.0 then
        NextEvent("NewEvents/Event35.lua")
    end
end
