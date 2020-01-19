Event18 = "Your partner smiles subtly and then leaves. The nurse proceeds to unwrap you from your leather restraints and places your food in front of you.\nYou notice her HAIRPIN and wonder if is was always that shade of green.\nWell, surely it was.\nNo matter, your stomach was letting you know that getting some food was definitely a good idea.\n\n"
Option1 = "Tell her that you are strong enough to use a fork and KNIFE instead of the spoon now."
Option2 = "Ask her to let you eat in private."

function Event()
    print("Event: 18\n")
    value = EnterDialouge(Event18, Option1, Option2)
    if value == 0.0 then
        NextEvent("NewEvents/Event19.lua")
    elseif value == 1.0 then
        NextEvent("NewEvents/Event13.lua")
    end
end
