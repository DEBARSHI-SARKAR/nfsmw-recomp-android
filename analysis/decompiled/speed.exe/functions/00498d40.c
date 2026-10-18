/* speed.exe 00498d40 FUN_00498d40; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 00498d70 FUN_00498d70
 */

undefined4 __thiscall FUN_00498d40(undefined4 param_1,byte param_2)

{
  FUN_00498d70();
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(param_1,0x2c);
  }
  return param_1;
}

