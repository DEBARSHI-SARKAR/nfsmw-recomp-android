/* speed.exe 004adf80 FUN_004adf80; analysis pseudocode, not buildable source.
 * calls 008311aa FUN_008311aa
 */

undefined4 __fastcall FUN_004adf80(int *param_1)

{
  undefined4 uVar1;
  undefined4 local_4;
  
  local_4 = 0;
  uVar1 = 0;
  if (*param_1 != 0) {
    FUN_008311aa(&local_4);
    uVar1 = local_4;
  }
  return uVar1;
}

