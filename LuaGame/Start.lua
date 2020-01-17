dialouge1 = "[Insert very epic gametitle.]\n\n"

option1A = "A) plAy\n"
option1B = "B) Quit\n"

dialouge2 = "Husband comes in.\n\n"
option2A = "A) Ask how you ended up here.\n"
option2B = "B) Ask how he is.\n"

function Event()
	value = EnterDialouge(dialouge1, option1A, option1B)
	if value == 'a' then
		NextEvent("Events/Event1.lua")
	elseif value == 'b' then
	end
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
