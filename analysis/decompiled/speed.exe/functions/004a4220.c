/* speed.exe 004a4220 FUN_004a4220; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 00496b40 FUN_00496b40
 */

undefined4 __thiscall FUN_004a4220(undefined4 param_1,byte param_2)

{
  FUN_00496b40();
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(param_1,0x30);
  }
  return param_1;
}

