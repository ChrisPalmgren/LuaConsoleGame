Event21 = "The knowledge that you have acquired a KNIFE and thus a way to escape your bonds brings you comfort.\nThere is an instant flash and suddenly everything is back to normal. You smile determinantly to yourself.\nNext day, the nurse returns with some breakfast.\nShe comments on the increasingly foul weather and the lost cutlery, but mostly leaves you to yourself while you eat.\n\n"
Option1 = "Comment on the weather."
Option2 = "Eat your breakfast."

function Event()
    print("Event: 21\n")
    value = EnterDialouge(Event21, Option1, Option2)
    NextEvent("NewEvents/Event22.lua")
end
