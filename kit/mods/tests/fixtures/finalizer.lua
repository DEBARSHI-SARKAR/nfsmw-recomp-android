-- finalizer.lua - a script that fails, having first arranged for a __gc
-- handler to try to change things while its interpreter is being closed.
-- lua_close runs finalizers, so this runs after the mod's subscriptions have
-- been removed; anything it managed to register or write would outlive the
-- teardown that was supposed to have finished.
sentinel = setmetatable({}, {__gc = function()
  pop.settings_set("gc_probe", 42)         -- must be refused: the mod is closing
  pop.on_turn("before", function() end)    -- and so must this
end})
error("this script fails on purpose")
