Event26 = "You do your best to reach the knife tucked safely away inside of your bland hospital shirt.\nAfterwards you bend your arm and barely reach the strap that is laying over your chest.\nYou begin sawing and while it takes much effort to make any result, the strap is starting to get damaged.\n\nHowever, so does the KNIFE.\n\n"
Option1 = "Continue cutting."
Option2 = "Flex against the restraints."

function Event()
    print("Event: 26\n")
    value = EnterDialouge(Event26, Option1, Option2)
    if value == 0.0 then
        NextEvent("NewEvents/Event27.lua")
    elseif value == 1.0 then
        NextEvent("NewEvents/Event39.lua")
    end
end

