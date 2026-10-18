-- bad.lua - one callback throws; the other must keep running.
pop.on_turn("before", function() error("this callback is broken on purpose") end)
pop.on_turn("after", function() survived = (survived or 0) + 1 end)
