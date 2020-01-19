Event1 = "A bright flash. Water filling your lungs. Him, unconcious. The car hitting the surface of the lake.\nA searing pain in the back of your head forces you to open your eyes.\nYou find yourself strapped to a bed in a hospital room.\nThere is a knock on the door.\n\n"
Option1 = "Say nothing."
Option2 = "Tell them to come in."

function Event()
    print("Event: 1\n")
    value = EnterDialouge(Event1, Option1, Option2)
	NextEvent("NewEvents/Event2.lua")
end