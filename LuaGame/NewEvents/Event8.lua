Event8 = "A bright flash. Water filling your lungs. Him, unconcious. The car hitting the surface of the lake.\nA searing pain in the back of your head forces you to open your eyes. You find yourself strapped to a bed in a hospital room.\nNo, wait.\nWAIT!\nWhat is going on? This doesn't make any sense. Your parter, he died and you... you turned into... nothing? And now you are back here?\n\n\n\n\nBefore you can gather your thoughts about what had happened, there is a knock on the door.\n\n"
Option1 = "Ask them to come in?"
Option2 = "Say nothing."

function Event()
    print("Event: 8\n")
    value = EnterDialouge(Event8, Option1, Option2)
    NextEvent("NewEvents/Event9.lua")
end

