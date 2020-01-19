Event29 = "After some time, you get out all of the screws and you pull the window open.\nYou lean out and both wind and rain welcome you with a heavy force. You can spot the bridge in the distance.\nThe bridge where your partner drove off into the lake.\nNo, wait... Another white flash. Why are you even in the hospital to begin with?\nAs far as you remember, you and your partner drove off of the bridge and you were the one who got hurt, but whenever you return to that...\n\nafterlife? he says he died in the accident.\nThinking about it makes your hEad huR  T. You need to focus.\nYou avert your gaze from the bridge and instead look down. You realize that you are on the third floor. Time to get out.\n\n"
Option1 = "Wrap bedsheets around your hands to protect them while climbing down."
Option2 = "Jump down."

function Event()
    print("Event: 29\n")
    value = EnterDialouge(Event29, Option1, Option2)
	life = GetLife()
    if value == 0.0 then
        NextEvent("NewEvents/Event31.lua")
    elseif life > 0.0 and value == 1.0 then
        NextEvent("NewEvents/Event30.lua")
	elseif life == 0.0 and value == 1.0 then
		NextEvent("NewEvents/Event42.lua")
    end
end

--PLAYER LOSES WILL AND RESPAWNS AT EVENT8