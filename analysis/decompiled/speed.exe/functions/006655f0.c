/* speed.exe 006655f0 FUN_006655f0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00663a80 FUN_00663a80
 */

void __fastcall FUN_006655f0(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_00663a80(&local_4,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x18,&PTR_LAB_004c5452_1_00890f10);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

