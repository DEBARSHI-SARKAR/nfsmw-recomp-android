/* speed.exe 005f3b50 FUN_005f3b50; analysis pseudocode, not buildable source.
 * calls 005f2cd0 FUN_005f2cd0
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_005f3b50(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_005f2cd0(&local_4,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x10,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

