/* speed.exe 00446e10 FUN_00446e10; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 004a9250 FUN_004a9250
 */

undefined4 __thiscall FUN_00446e10(undefined4 param_1,byte param_2)

{
  FUN_004a9250();
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(param_1,0x30);
  }
  return param_1;
}

