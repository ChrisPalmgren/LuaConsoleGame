Event28 = "Behind the door is a horde of doctors, nurses and security guards. Not a viable escape route.\nThe window is screwed shut. Perhaps so that patients don't try and jump out?\n\n"
Option1 = "Use the nurse's HAIRPIN to unscew the screws."
Option2 = "Try to break it open with your elbow."

function Event()
    print("Event: 28\n")
    value = EnterDialouge(Event28, Option1, Option2)
    if value == 0.0 then
        NextEvent("NewEvents/Event29.lua")
    elseif value == 1.0 then
        NextEvent("NewEvents/Event38.lua")
    end
end

