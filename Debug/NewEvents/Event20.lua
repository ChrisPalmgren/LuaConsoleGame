Event20 = "You believe that you have sucessfully hidden the KNIFE.\nThe gentle tapping of the drizzle on the bedroom window has begun to sound harsher and a flash from outside makes you jolt.\nLightning? The clouds outside are turning into a darker grey.\n\nOut of nowhere the window shatters and a torrent of water poars in and rapidly fills the room.\nYou want to scream for help, but water has filled your lungs.\nJust like that time; the car, the bridge, the lake.\nSuddenly your partner is floating next to you and you are firmly holding his hand.\nHe is begging you to let go.\n\n"
Option1 = "Let go."
Option2 = "Hold on."

function Event()
    print("Event: 20\n")
    value = EnterDialouge(Event20, Option1, Option2)
    if value == 0.0 then
        NextEvent("NewEvents/Event21.lua")
    elseif value == 1.0 then
        NextEvent("NewEvents/Event15.lua")
    end
end
