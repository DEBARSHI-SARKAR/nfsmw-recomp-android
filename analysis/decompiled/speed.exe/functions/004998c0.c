/* speed.exe 004998c0 FUN_004998c0; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 004998f0 FUN_004998f0
 */

undefined4 __thiscall FUN_004998c0(undefined4 param_1,byte param_2)

{
  FUN_004998f0();
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(param_1,0x14);
  }
  return param_1;
}

