Event19 = "She complies and soon returns with a fork and KNIFE.\nYou remember this KNIFE. Its sharpness. You look at the leather straps hanging from the bed, the ones that are usually restraining you.\n\n"
Option1 = "Look around the room."
Option2 = "Hide the KNIFE under your shirt."

function Event()
    print("Event: 19\n")
    value = EnterDialouge(Event19, Option1, Option2)
    if value == 0.0 then
        NextEvent("NewEvents/Event14.lua")
    elseif value == 1.0 then
        NextEvent("NewEvents/Event20.lua")
    end
end