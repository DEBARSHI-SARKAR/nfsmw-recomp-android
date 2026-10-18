/* speed.exe 00404e70 FUN_00404e70; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006466b0 FUN_006466b0
 */

int __thiscall FUN_00404e70(int param_1,byte param_2)

{
  FUN_006466b0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,0x28c,0);
  }
  return param_1;
}

