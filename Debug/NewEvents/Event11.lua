Event11 = "She looks at you confused and says that you must have had a fever dream and then tells you that it is dinner time.\nYour partner gives you a kiss on the head and then leaves to let you eat in peace.\n-Alright, the nurse says. Let me get those straps off of you. I don't have to feed you anymore after all.\n\n"
Option1 = "Tell your partner as he leaves that you love him."
Option2 = "Ask her to let you eat in private."
Option3 = "Ask her to give you a fork and knife instead of spoon."

function Event()
    print("Event: 11\n")
    value = EnterDialouge3(Event11, Option1, Option2, Option3)
    if value == 0.0 then
        NextEvent("NewEvents/Event18.lua")
    elseif value == 1.0 then
        NextEvent("NewEvents/Event13.lua")
    elseif value == 2.0 then
        NextEvent("NewEvents/Event12.lua")
    end
end
