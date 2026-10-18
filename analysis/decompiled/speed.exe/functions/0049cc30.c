/* speed.exe 0049cc30 FUN_0049cc30; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 0049cc60 FUN_0049cc60
 */

undefined4 __thiscall FUN_0049cc30(undefined4 param_1,byte param_2)

{
  FUN_0049cc60();
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(param_1,0x1c);
  }
  return param_1;
}

