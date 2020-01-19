Event2 = "A man that you at first do not recognize enters the room and tears up.\nHoney, I'm so glad you are alive! he says with teary eyes.\n\n"
Option1 = "Say nothing."
Option2 = "Ask how you ended up here."

function Event()
    print("Event: 2\n")
    value = EnterDialouge(Event2, Option1, Option2)
    NextEvent("NewEvents/Event3.lua")
end
