value = 0;

dialouge1 = "Player wakes up with no memory.\nDescription of hospital room and yourself.\nThere is a knock on the door.\n\n"
option1A = "A) Say nothing.\n"
option1B = "B) Say 'Come in'.\n"

function Event()
	print("Event: 1\n")
	value = EnterDialouge(dialouge1, option1A, option1B)
	NextEvent("Events/Event2.lua")
end