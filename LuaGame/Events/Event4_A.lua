dialouge1 = "She refuses and reminds you that you get violent smasms from the brain damage from time to time, which is why you are strapped to the bed most of the time.\nShe goes to the window and points out. 'Right there on that bridge is where you crashed. Almost at our doorstep. You are a lucky one, do you know that?'.\nShe continues her monologue while you eat in peace.\nBy the end of the day, you feel your eyelids getting heavy and you are tempted to drift off.\n\n"

option1A = "A) Go to sleep.\n"
option1B = "B) Try to fight the sleep.\n"

function Event()
	print("Event: 4_A\n")
	value = EnterDialouge(dialouge1, option1A, option1B)
	--NextEvent("Events/Event5.lua")
end