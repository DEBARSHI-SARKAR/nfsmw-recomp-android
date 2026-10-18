/* speed.exe 007baa30 FUN_007baa30; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00572360 FUN_00572360
 * calls 00503360 FUN_00503360
 */

void __fastcall FUN_007baa30(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00883613;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b7e3c;
  param_1[0x58] = &PTR_LAB_0089b070;
  param_1[0x47] = &PTR_LAB_0089b070;
  param_1[0x36] = &PTR_LAB_0089b070;
  param_1[0x22] = &PTR_LAB_008b7244;
  local_4 = 1;
  param_1[0x1b] = &PTR_LAB_008b72b4;
  local_10 = param_1;
  if (param_1[0x1f] != 0) {
    local_14 = param_1[0x1f];
    FUN_00503360(&local_14,1);
    param_1[0x1f] = 0;
  }
  piVar1 = (int *)param_1[0xb];
  while (piVar1 != param_1 + 0xb) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)param_1[0xb];
  }
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

