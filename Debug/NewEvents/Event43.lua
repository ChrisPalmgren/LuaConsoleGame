Event43 = "Filled with fear of failing to save your beloved, you dash across the bridge with all of your might.\nAs it comes driving ferociously towards you and the hospital, you wave your arms at the car and try to be seen.\nThe headlights blind your eyes for an instant.\nJust as the car rams into you, you see the panicked face of your husband behind the wheel and...\nYou..? Unconcious in the passenger seat. Then darkness overtakes you.\nAfter what feels like infinity, the darkness turns into a whirlwind of purple and red and you are in the center of it.\nSwallowed by the whirlwind, you see.... yourself?\nThousands upon thousands of copies of you are spireling around you rapidly; chaotically. There is a flash, and then another.\nAnd anothER.\nAnd anOTHER.\nAND ANOTHER.\n\nSome otherwordly force draws you out of the quiet center and into the red and purple vortex of yous' that tumbles around you.\nNow you are one of them and as much as you strugle to get back into the center of the whirlwind, you are stuck here.\nAfter a moment of struggle, you succumb.\nIt's over. It's all over now.\n\n"
Option1 = "Restart."
Option2 = "Quit."

function Event()
    print("Event: 43\n")
    value = EnterDialouge(Event43, Option1, Option2)
    if value == 0.0 then
		Restore()
        NextEvent("NewEvents/Event1.lua")
    elseif value == 1.0 then
    end
end