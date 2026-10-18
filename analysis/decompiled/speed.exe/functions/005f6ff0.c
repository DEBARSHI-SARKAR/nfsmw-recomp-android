/* speed.exe 005f6ff0 FUN_005f6ff0; analysis pseudocode, not buildable source.
 * calls 005f2a80 FUN_005f2a80
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_005f6ff0(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_005f2a80(&local_4,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x18,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

