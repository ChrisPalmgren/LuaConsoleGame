Event3 = "Your partner puts his hands on yours and says:\nThe doctors said that your memory will be a little muddy after such an accident. And don't worry about the car. As long as you're alive, I'm happ-\nYour partner is interupted when the door is swung open and a friendly nurse with a nice HAIRPIN in her hair walks in.\n-Time for nourishment, she says. Your partner gives you a kiss on the head and then leaves to let you eat in peace.\n-Alright, the nurse says. Let me get those straps off of you. I don't have to feed you anymore after all.\n\n"
Option1 = "Ask the nurse to let you eat in private."
Option2 = "Tell her that you are strong enough to eat with a knife and fork now instead of with a spoon."

function Event()
    print("Event: 3\n")
    value = EnterDialouge(Event3, Option1, Option2)
    if value == 0.0 then
        NextEvent("NewEvents/Event4_A.lua")
    elseif value == 1.0 then
        NextEvent("NewEvents/Event4_B.lua")
    end
end