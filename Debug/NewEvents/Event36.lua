Event36 = "You look around for anything of significance; some clue that will allow you to change fate and save your partner from hitting that person and driving into the lake.\nThere's nothing. Nothing comes to mind. You feel the desperation crawl upwards from the bottom of your spine.\nSuddenly, headlight cut through the rain from the other end of the bridge.\nYou see the car approaching rapidly in your direction at the other end of the bridge.\n\n"
Option1 = "Wave your arms wildly at the car to stop."
Option2 = "Let the car go past."

function Event()
    print("Event: 36\n")
    value = EnterDialouge(Event36, Option1, Option2)
	life = GetLife()
    if life > 0.0 and value == 0.0 then
        NextEvent("NewEvents/Event34.lua")
	elseif life == 0.0 and value == 0.0 then
        NextEvent("NewEvents/Event43.lua")
    elseif value == 1.0 then
        NextEvent("NewEvents/Event37.lua")
    end
end

--Option1 leads to potential game over. Lose game.