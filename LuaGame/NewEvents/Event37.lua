Event37 = "You jump to the side of the road just as the car is about to hit you and watch it do a full stop at the entrance to emergency hall of the hospital.\nYour partner throws himself out of the car and runs to the passanger side and flings the door open.\nYou see as he dives in and then slowly re-emerges again carrying someone in his arms.\nThe rain and wind prevents you from seeing the person's face.\nSuddenly a lightning strike strikes a tree on the side of the bridge and flashes the person's face.\nIt is a face you have known your entire life.\n\nIt is you.\n\nAs soon as this relization strikes your mind, the entire world around you is inhaled by some otherwordly force.\nYou find yourself back in the netherworld where copies of yourself were flung around by a giant whirlwind.\nHowever, the whirlwind has frozen in motion. The car and your partner are still above you, but you also see...\nabove him... a tear in the dark void with a soft humming coming through it.\n\n"
Option1 = "Get it the car with your husband."
Option2 = "Enter the tear."

function Event()
    print("Event: 37\n")
    value = EnterDialouge(Event37, Option1, Option2)
    if value == 0.0 then
        NextEvent("NewEvents/Event44.lua")
    elseif value == 1.0 then
        NextEvent("NewEvents/Event45.lua")
    end
end

