Event13 = "She refuses and reminds you that you get violent smasms from the brain damage from time to time, which is why you are strapped to the bed most of the time.\nShe goes to the window and looks out. You hear a mild tapping from the gentle drizzle outside.\nRight there on that bridge is where you crashed, she says. Almost at our doorstep. You are a lucky one, do you know that?\nShe continues her monologue while you eat in silence. You are still bothered by what you are sure she said to you before.\n\n"
Option1 = "Observe the room."

function Event()
    print("Event: 13\n")
    value = EnterDialouge1(Event13, Option1)
    NextEvent("NewEvents/Event14.lua")
end

