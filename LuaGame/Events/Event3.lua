value = 0;

dialouge1 = "Short exposition of LB and Events.\nMemory of how you ended up in the hospital restored.\nA nurse with HAIRPIN walks in, time for food.\n\n"
option1A = "A) Ask her to let you eat in private.\n"
option1B = "B) Ask her to replace spoon with fork and knife.\n"

function Event()
	print("Event: 3\n")
	value = EnterDialouge3(dialouge1, option1A, option1B)
	--NextEvent("Events/Event3.lua")
end