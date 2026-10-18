/* speed.exe 0044c490 FUN_0044c490; analysis pseudocode, not buildable source.
 * calls 00448e90 FUN_00448e90
 * calls 00445530 FUN_00445530
 */

undefined4 __thiscall FUN_0044c490(undefined4 param_1,byte param_2)

{
  FUN_00448e90();
  if ((param_2 & 1) != 0) {
    FUN_00445530(param_1);
  }
  return param_1;
}

