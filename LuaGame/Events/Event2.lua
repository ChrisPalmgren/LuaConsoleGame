dialouge1 = "A man that you at first do not recognize enters the room and tears up.\n'Honey, I'm so glad you are alive!' he says with teary eyes.\n\n"

option1A = "A) Ask how you ended up here.\n"
option1B = "B) Say nothing.\n"

function Event()
	print("Event: 2\n")
	value = EnterDialouge(dialouge1, option1A, option1B)
	NextEvent("Events/Event3.lua")
end