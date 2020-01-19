Event16 = "With a husky voice, The nurse regretfully tells you that your partner died in a car accident.\nShe murmurs something about fate, but you don't listen. No, rather... You can't hear at all.\nYou feel as your entire body becomes numb and that you piece by piece... disintegrate.\nJust before you lose your vision too, you see a flash and a heavy rumble from the window.\nAnd then... darkness.\nIf only HE was here to keep you company in this void.\n\n"
Option1 = "Succumb"

function Event()
    print("Event: 16\n")
    value = EnterDialouge1(Event16, Option1)
	life = GetLife()
    if life > 0.0 and value == 0.0 then
        NextEvent("NewEvents/Event17.lua")
	elseif life == 0.0 and value == 0.0 then
		NextEvent("NewEvents/Event42.lua")
    end
end

-- See if I can return Will value to make conditions

--THIS IS WILL-RELATED

