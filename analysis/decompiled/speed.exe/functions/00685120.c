/* speed.exe 00685120 FUN_00685120; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00683410 FUN_00683410
 */

void __fastcall FUN_00685120(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_00683410(&local_4,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x18,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

