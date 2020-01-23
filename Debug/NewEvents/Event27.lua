Event27 = "The restraints break, but so does the KNIFE.\nYou get out of the bed and stretch your body, ready to make it out of here. You know that you need to do\n\nS O M E T H I N G\n\ndifferent to break this cycle that keeps happening, but what?\nYour partner keeps dying no matter how much you try to prevent it.\nOutside, the modest rain is beginning to rapidly brew up into a storm.\n\n"
Option1 = "Observe the room for a solution."

function Event()
    print("Event: 27\n")
    value = EnterDialouge1(Event27, Option1)
    NextEvent("NewEvents/Event28.lua")
end
