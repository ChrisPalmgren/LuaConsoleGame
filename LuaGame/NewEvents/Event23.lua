Event23 = "The nurse thanks you for your kindness and apologizes for not reacting fast enough.\nYou are given a small dose of morphine for the pain and then she leaves you alone.\nThe following day, there is a knock on the door and after a few seconds, the nurse quietly walks in with sorrow in her eyes.\nA seed of worry begins to sprout in the back of your head.\n\n"
Option1 = "Say nothing."
Option2 = "Ask her what is wrong."

function Event()
    print("Event: 23\n")
    value = EnterDialouge(Event23, Option1, Option2)
    NextEvent("NewEvents/Event16.lua")
end
