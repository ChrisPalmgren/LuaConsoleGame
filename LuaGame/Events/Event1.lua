dialouge1 = "A bright flash. Water filling your lungs.\nHim, unconcious.\nThe car hitting the surface of the lake.\nA searing pain in the back of your head forces you to open your eyes.\nYou find yourself strapped to a bed in a hospital room.\nThere is a knock on the door.\n\n"

option1A = "A) Say nothing."
option1B = "B) Say 'Come in.'."

function Event()
	print("Event: 1\n")
	value = EnterDialouge(dialouge1, option1A, option1B)
	NextEvent("Events/Event2.lua")
end