/* speed.exe 005f6f10 FUN_005f6f10; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 005f2780 FUN_005f2780
 */

void __fastcall FUN_005f6f10(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_005f2780(&local_4,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x18,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

