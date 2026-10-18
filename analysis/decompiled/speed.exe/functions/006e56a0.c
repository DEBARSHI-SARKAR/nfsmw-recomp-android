/* speed.exe 006e56a0 FUN_006e56a0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006e3340 FUN_006e3340
 */

void __fastcall FUN_006e56a0(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_006e3340(&local_4,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),0x28,&PTR_LAB_004c5452_1_00890f10);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

