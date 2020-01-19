Event17 = "The dark around you turns into a whirlwind of purple and red and you are in the center of it.\nSwallowed by the whirlwind, you see.... yourself?\nThousands upon thousands of copies of you are spireling around you rapidly; chaotically.\nYou look up and there, floating in the air, is your car and the bloated corpse of your partner is sitting in the driver's seat.\nHis dead body lifts one arm and waves at you.\nWelcome back, honey. I guess it didn't go well this time either. How about you get in and tell me about it? he suggests\nYou float up to him as you've done So mAny timES beFore, and get in the passenger seat.\nYou close the door and look at your partner and retell everything.\nYou need to stop blaming yourself, honey. I'll be here, but I really don't want to see you in this place again, he says.\nIt really is a horrible memory you have manifested. Now, get out of here and give it another try!\n\n"
Option1 = "Give it another try."

function Event()
    print("Event: 17\n")
    value = EnterDialouge1(Event17, Option1)
	life = CheckPoint()
    NextEvent("NewEvents/Event8.lua")
end

--PLAYER LOSES WILL AND RESPAWNS AT EVENT8