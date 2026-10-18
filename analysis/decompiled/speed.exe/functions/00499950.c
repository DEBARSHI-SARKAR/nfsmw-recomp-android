/* speed.exe 00499950 FUN_00499950; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 00499980 FUN_00499980
 */

undefined4 __thiscall FUN_00499950(undefined4 param_1,byte param_2)

{
  FUN_00499980();
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(param_1,0x80);
  }
  return param_1;
}

