Event14 = "You look at the leather straps that go across your chest.\nYou know that they are there you help you whenever you get violent spasms, but it sure isn't comfortable.\nIf only you could CUT them off, that would be great. Besides, something feels off. You don't know what or why.\nThe gentle tapping of the drizzle on the bedroom window has begun to sound harsher and the clouds outside are turning into a darker grey.\n\nThen the glass shatters and a torrent of water poars in and rapidly fills the room.\nYou want to scream for help, but water has filled your lungs.\nJust like that time; the car, the bridge, the lake.\nSuddenly your partner is floating next to you and you are firmly holding his hand.\nHe is begging you to let go.\n\n"
Option1 = "Let go."
Option2 = "Hold on."

function Event()
    print("Event: 14\n")
    value = EnterDialouge(Event14, Option1, Option2)
    NextEvent("NewEvents/Event15.lua")
end
