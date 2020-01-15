value = 0;

dialouge1 = "Husband comes in.\n\n"
option1A = "A) Ask how you ended up here.\n"
option1B = "B) Ask how he is.\n"

function Event()
	print("Event: 2\n")
	value = EnterDialouge(dialouge1, option1A, option1B)
	NextEvent("Events/Event3.lua")
end