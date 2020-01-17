dialouge1 = "She complies. You get a fork and knife.\n Exposition of the window. You drift off, morphine kicking in.\n\n"

option1A = "A) Struggle.\n"
option1B = "B) Struggle.\n"

function Event()
	print("Event: 4_B\n")
	value = EnterDialouge(dialouge1, option1A, option1B)
	--NextEvent("Events/Event5.lua")
end