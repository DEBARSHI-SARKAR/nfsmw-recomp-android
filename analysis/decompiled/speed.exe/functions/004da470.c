/* speed.exe 004da470 FUN_004da470; analysis pseudocode, not buildable source.
 * calls 008311aa FUN_008311aa
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004da470(int param_1)

{
  int local_4;
  
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    return 1;
  }
  local_4 = 0;
  if ((**(int **)(param_1 + 0x38) != 0) && (FUN_008311aa(&local_4), local_4 == 1)) {
    return 1;
  }
  if (*(float *)(param_1 + 0x50) == _DAT_00890968) {
    return 1;
  }
  return 0;
}

