/* speed.exe 0065ac70 FUN_0065ac70; analysis pseudocode, not buildable source.
 * calls 0065ac90 FUN_0065ac90
 * calls 007c7250 FUN_007c7250
 */

undefined4 __thiscall FUN_0065ac70(undefined4 param_1,byte param_2)

{
  FUN_0065ac90();
  if ((param_2 & 1) != 0) {
    FUN_007c7250(param_1);
  }
  return param_1;
}

