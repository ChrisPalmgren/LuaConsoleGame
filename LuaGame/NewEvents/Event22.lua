Event22 = "Just as you are about to open your mouth, your body stiffens and pain is tearing through you.\nThe nurse sees your frozen expression and recognizes the sign.\nShe rushes over to fasten your straps around you, but she's too late.\nYou convulse into a violent flurry of spasms and knock over both your plate of breakfast as well as the nurse herself.\nBefore you know it you are given back control over your body, but you feel sore all over.\nThe nurse is slowly getting back on her feet; her nose if bleeding and her hair is a mess.\nYou notice that her HAIRPIN dropped on your bed.\n\n"
Option1 = "Give the HAIRPIN back to the nurse."
Option2 = "Hide the HAIRPIN under your shirt."

function Event()
    print("Event: 22\n")
    value = EnterDialouge(Event22, Option1, Option2)
    if value == 0.0 then
        NextEvent("NewEvents/Event23.lua")
    elseif value == 1.0 then
        NextEvent("NewEvents/Event24.lua")
    end
end

