dialouge1 = "The doctors said that your memory will be a little muddy after such an accident.\nAnd don't worry about the car.\nAs long as you're alive, I'm ha-your partner is interupted when the door is swung open and a friendly nurse with a nice HAIRPIN in her hair walks in.\n'Time for nourishment, dear.'.\nYour partner gives you a kiss on the head and then leaves to let you eat in peace.\n'Alright', the nurse says. 'let me get those straps off of you. I don't have to feed you anymore after all.'\n\n"

option1A = "A) Ask her to let you eat in private.\n"
option1B = "B) Tell her that you are strong enough to eat with a knife and fork now instead of with a spoon.\n"

function Event()
	print("Event: 3\n")
	value = EnterDialouge(dialouge1, option1A, option1B)
	if value == 'a' then
		NextEvent("Events/Event4_A.lua")
	elseif value == 'b' then
		NextEvent("Events/Event4_B.lua")
	end
end