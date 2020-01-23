Event6 = "With a husky voice, She regretfully tells you that your partner died in a car accident.\nShe murmurs something about fate, but you don't listen. No, rather... You can't hear at all.\nYou feel as your entire body becomes numb and that you piece by piece... disintegrate.\nJust before you lose your vision too, you see a flash and a heavy rumble from the window. And then... darkness. If only HE was here to keep you company in this void.\n\n"
Option1 = "Save."

function Event()
    print("Event: 6\n")
    value = EnterDialouge1(Event6, Option1)
    NextEvent("NewEvents/Event7.lua")
end

