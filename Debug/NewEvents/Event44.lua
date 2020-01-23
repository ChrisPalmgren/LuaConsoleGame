dialogue = "You drift up to the car and sit next to the bloated corpse of your partner.\nAre you sure about this, he asks. I'm just part of your memory, you know.\nYou squeeze his hand lovingly to show him that you are serious.\nAlright then, he continues. I promise you, even though this memory only ends with grief,I will\ndo my best to be with you every step along the journey. Until death do us part, honey.\nAnd whatever comes next.\n\n"
op1 = "Wipe your memory."

function Event()
	EnterDialouge1(dialogue, op1)
	Restore()
	NextEvent("NewEvents/Event1.lua")
end