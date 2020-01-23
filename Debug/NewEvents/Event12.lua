Event12 = "She complies and soon returns with a fork and KNIFE. You notice that the KNIFE is surprisingly sharp.\nThe nurse goes to the window and looks out.You hear a mild tapping from the gentle drizzle outside.\nRight there on that bridge is where you crashed. Almost at our doorstep. You are a lucky one, do you know that?\nShe continues her monologue while you eat in silence.  You are still bothered by what you are sure she said to you before.\n\n"
Option1 = "Observe the room."

function Event()
    print("Event: 12\n")
    value = EnterDialouge1(Event12, Option1)
    NextEvent("NewEvents/Event14.lua")
end

