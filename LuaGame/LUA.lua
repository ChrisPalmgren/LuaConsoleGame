
--player = {}
--player["Name"] = "Blip Blop"
--player["Origin"] = "Shcrubashnuba"
--player["Level"] = 10
--[[

creationData = { 
	WorldName = "",

}

x = 2

player = {}
player[0] = { Name = "Blip Blop", Origin = "Shcrubashnuba", Level = 10 }
--player[1] = { Name = "Dibdib", Origin = "FrebbleShnebble", Level = 20 }

function GetPlayer(n)
	print("[LUA] Function is called.\n")
	return player[n]
end]]

--[[function init()
	print(CreatePlayer(11,"kim"))
	print("Welcome!")
	name = io.read()
	print( "hello, ", name )	
end]]

--OpenOffice = "Program"
--Time = 1400

--[[hej = function(x)
	return x
end]]

--Event1 = 1
--Event2 = 2
--Event3 = 3
--Event4 = 4

will = 40

dialouge1 = "Player wakes up with no memory.\n	Description of hospital room and yourself.\nThere is a knock on the door.\n"
option1 = "sound"
option2 = "close door"


int dialouge(lua)
{
	std::cout<<lua_tostring(lua,-3); // dialouge
	std::cout<<lua_tostring(lua,-2); // option1
	std::cout<<lua_tostring(lua,-1); // option2
	std::cin>>v;
	lua_pushnumber(lua,v);
	return 1;
}

function Event1()
	value = EnterDialouge(dialouge1, option1, option2)
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

	value = EnterDialouge(dialouge2, option21, option22)

end