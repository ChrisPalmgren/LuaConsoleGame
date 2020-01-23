Event41 = "Ineffective move. The window is screwed shut. Perhaps so that patients don't try and jump out?\n\n"
Option1 = "Use the nurse's HAIRPIN to open it."
Option2 = "Try to break it open with your elbow."

function Event()
    print("Event: 37\n")
    value = EnterDialouge(Event41, Option1, Option2)
    if value == 0.0 then
        NextEvent("NewEvents/Event29.lua")
    elseif value == 1.0 then
        NextEvent("NewEvents/Event38.lua")
    end
end

