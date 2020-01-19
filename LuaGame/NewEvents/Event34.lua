Event34 = "Filled with fear of failing to save your beloved, you dash across the bridge with all of your might.\nAs it comes driving ferociously towards you and the hospital, you wave your arms at the car and try to be seen.\nThe headlights blind your eyes for an instant.\nJust as the car rams into you, you see the panicked face of your husband behind the wheel and...\nyou..? Unconcious in the passenger seat. Then darkness overtakes you.\nAfter what feels like infinity, the darkness around you turns into a whirlwind of purple and red and you are in the center of it.\nSwallowed by the whirlwind, you see.... yourself? Thousands upon thousands of copies of you are spireling around you rapidly; chaotically.\nYou look up and there, floating in the air, is your car and the bloated corpse of your partner is sitting in the driver's seat.\nHis dead body lifts one arm and waves at you. Welcome back, honey. I guess it didn't go well this time either.\nWhy don't you get in and tell me about it? You float up to him as you've done so many times before, and get in the passenger seat.\nYou close the door and look at your partner and retell everything.\nYou need to stop blaming yourself, honey. I'll be here, but I really don't want to see you in this place again.\nIt really is a horrible memory you have manifested. Now, get out of here and give it another try!\n\n"
Option1 = "Give it another go."

function Event()
    print("Event: 34\n")
    value = EnterDialouge1(Event34, Option1)
	life = CheckPoint()
    NextEvent("NewEvents/Event8.lua")
end

--PLAYER LOSES WILL AND RESPAWNS AT EVENT8