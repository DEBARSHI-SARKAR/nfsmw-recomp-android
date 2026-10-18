-- good.lua - reads entities through the curated bindings, as the example mod does.
seen_entities = 0
seen_ids = 0
pop.log("good.lua loaded for " .. pop.mod_id())

pop.on_turn("before", function()
  seen_entities = pop.entity_count()
  for i = 0, seen_entities - 1 do
    local slot = pop.entity_slot(i)
    local e = pop.entity(slot)          -- indexed by PHYSICAL slot
    assert(e.slot == slot)
    if e.id ~= nil then seen_ids = seen_ids + 1 end
  end
end)

pop.on_level_load(function() pop.log("level loaded") end)
