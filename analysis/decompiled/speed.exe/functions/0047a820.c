/* speed.exe 0047a820 FUN_0047a820; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00473860 FUN_00473860
 */

int __thiscall FUN_0047a820(int param_1,byte param_2)

{
  FUN_00473860();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x48,0);
  }
  return param_1;
}

