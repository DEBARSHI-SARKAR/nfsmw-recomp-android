/* speed.exe 0079b980 FUN_0079b980; analysis pseudocode, not buildable source.
 * calls 0079b020 FUN_0079b020
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0079b980(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_0079b020(&local_4,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x18,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

