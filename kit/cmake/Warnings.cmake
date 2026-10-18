# The warning sets the shell scripts used, named so a target says which one it
# wants instead of repeating the flags.
set(POP_WARN_HOST -Wall -Wno-unused-function -Wno-unused-variable -Wno-unused-parameter)
set(POP_WARN_STRICT -Wall -Wextra -Wno-unused-parameter)
set(POP_WARN_WERROR -Wall -Wextra -Werror)
set(POP_WARN_GEN -Wall -Wextra -Wno-unused)

# Optimization is per target, as the scripts had it: -O2 for what players run,
# -O1 for hosts and tests. A Debug configuration leaves this out and gets -O0.
function(pop_optimize target level)
  target_compile_options(${target} PRIVATE $<$<NOT:$<CONFIG:Debug>>:-O${level}>)
endfunction()

# Every test executable registers here so `check_binaries` builds exactly the
# suite this platform has; tools/test.py --compile-only builds that target.
function(pop_test_binary target)
  add_dependencies(check_binaries ${target})
endfunction()
