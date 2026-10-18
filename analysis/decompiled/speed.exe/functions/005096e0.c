/* speed.exe 005096e0 FUN_005096e0; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 005094c0 FUN_005094c0
 */

undefined4 __thiscall FUN_005096e0(undefined4 param_1,byte param_2)

{
  FUN_005094c0();
  if ((param_2 & 1) != 0) {
    FUN_00463ca0(DAT_00916068,param_1);
  }
  return param_1;
}

