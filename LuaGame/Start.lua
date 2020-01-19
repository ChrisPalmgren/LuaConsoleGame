dialouge1 = "[Insert very epic gametitle.]\n\n"

option1A = "plAy\n"

function Event()
	value = EnterDialouge1(dialouge1, option1A)
	if value == 0.0 then
		NextEvent("Events/Event1.lua")
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
