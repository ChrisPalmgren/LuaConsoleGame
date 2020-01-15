will = 40
value = 0;

--[[YouWin = "You Win!\n\n"
optionWinA = "A) Restart.\n"
optionWinB = "B) Quit.\n"

GameOver = "Game Over.\n\n"
optionLoseA = "A) Restart.\n"
optionLoseB = "B) Quit.\n"]]

dialouge1 = "Player wakes up with no memory.\nDescription of hospital room and yourself.\nThere is a knock on the door.\n\n"
option1A = "A) Say nothing.\n"
option1B = "B) 'Come in.'\n"

dialouge2 = "Husband comes in.\n\n"
option2A = "A) Ask how you ended up here.\n"
option2B = "B) Ask how he is.\n"

function Event()
	value = EnterDialouge(dialouge1, option1A, option1B)
	value = EnterDialouge(dialouge2, option2A, option2B)
	NextEvent("Event2.lua")
end
	--print(value)
	--[[value = EnterDialouge(dialouge1, option1, option2)
	if value == 1 then
		RoomA.BurnDown()
	else
		print("nothing really seems important")
	end

	value = EnterDialouge(dialouge1, option1, option2)
	if value == 1 then
			value = EnterDialouge(dialouge1, option1, option2)
			if value == 1 then
				RoomA.BurnDown()
			else
				print("nothing really seems important")
			end
	else
			value = EnterDialouge(dialouge1, option1, option2)
			if value == 1 then
				RoomA.BurnDown()
			else
				print("nothing really seems important")
			end
	end

	value = EnterDialouge(dialouge2, option21, option22)]]
