/* speed.exe 004aa000 FUN_004aa000; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 004aa030 thunk_FUN_004a1390
 */

undefined4 __thiscall FUN_004aa000(undefined4 param_1,byte param_2)

{
  thunk_FUN_004a1390();
  if ((param_2 & 1) != 0) {
    (*(code *)PTR_FUN_008ee4d4)(param_1,0x24);
  }
  return param_1;
}

