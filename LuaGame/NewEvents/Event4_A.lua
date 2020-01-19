Event4_A = "She refuses and reminds you that you get violent smasms from the brain damage from time to time.\nThis is why you are strapped to the bed most of the time.\nShe goes to the window and looks out. You hear a mild tapping from the gentle drizzle outside.\nRight there on that bridge is where you crashed, she says. Almost at our doorstep. You are a lucky one, do you know that?\nShe continues her monologue while you eat in silence. By the end of the day, you feel your eyelids getting heavy and you are tempted to drift off.\n\n"
Option1 = "Go to sleep."
Option2 = "Try to fight the sleep."

function Event()
    print("Event: 4_A\n")
    value = EnterDialouge(Event4_A, Option1, Option2)
    NextEvent("NewEvents/Event5.lua")
end