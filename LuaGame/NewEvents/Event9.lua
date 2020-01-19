Event9 = "A man that you immediately recognize as your partner walks in.\nHoney, I'm so glad you are alive! you say with teary eyes.\nHow strange, I was just abouve to say the same thing, he chuchles with a puzzled expression on his face.\n\n"
Option1 = "Ask him how he is alive."
Option2 = "Ask him if you are still dreaming."

function Event()
    print("Event: 9\n")
    value = EnterDialouge(Event9, Option1, Option2)
    NextEvent("NewEvents/Event10.lua")
end

