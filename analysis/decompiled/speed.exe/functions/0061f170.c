/* speed.exe 0061f170 FUN_0061f170; analysis pseudocode, not buildable source.
 * calls 0061a160 FUN_0061a160
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0061f170(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_0061a160(&local_4,**(undefined4 **)(param_1 + 8),*(undefined4 **)(param_1 + 8));
  if (*(int *)(param_1 + 8) != 0) {
    FUN_005d0370(*(int *)(param_1 + 8),0x1c,0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

