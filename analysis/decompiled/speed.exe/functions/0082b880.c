/* speed.exe 0082b880 FUN_0082b880; analysis pseudocode, not buildable source.
 * calls 008294a0 FUN_008294a0
 * calls 00862e47 FUN_00862e47
 */

undefined4 * __thiscall FUN_0082b880(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_008c5df8;
  FUN_00862e47(&LAB_0082e7e0);
  *param_1 = &PTR_FUN_008c5de8;
  if ((param_2 & 1) != 0) {
    FUN_008294a0(param_1);
  }
  return param_1;
}

