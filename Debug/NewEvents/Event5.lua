Event5 = "You fall asleep quickly. Two days since your partner's visit pass by, seemingly the same.\n\nUntil one day.\n\nThere is a knock on the door and after a few seconds, the nurse quietly walks in with sorrow in her eyes.\nA seed of worry begins to sprout in the back of your head.\n\n"
Option1 = "Ask what is wrong."
Option2 = "Say nothing."

function Event()
    print("Event: 5\n")
    value = EnterDialouge(Event5, Option1, Option2)
    NextEvent("NewEvents/Event6.lua")
end
