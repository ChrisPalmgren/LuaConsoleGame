Event39 = "You flex as much as you can and eventually the restraints break. You are finally free to move around.\n\n"
Option1 = "Observe the window."
Option2 = "Lock the door."

function Event()
    print("Event: 39\n")
    value = EnterDialouge(Event39, Option1, Option2)
    if value == 0.0 then
        NextEvent("NewEvents/Event28.lua")
    elseif value == 1.0 then
        NextEvent("NewEvents/Event40.lua")
    end
end

