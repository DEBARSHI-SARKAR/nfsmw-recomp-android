/* speed.exe 0054b230 FUN_0054b230; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0079bac0 FUN_0079bac0
 * calls 0079a0b0 FUN_0079a0b0
 * calls 0052c450 FUN_0052c450
 * calls 00516be0 FUN_00516be0
 */

void __fastcall FUN_0054b230(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00870448;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089e8b8;
  local_4 = 5;
  FUN_00516be0(0xd9656bec,PTR_s_OL_GameRoom_fng_008f32b0,0xffffffff,0xff);
  if (DAT_009b0fa0 != 0) {
    FUN_0079bac0();
    FUN_0079a0b0();
  }
  param_1[99] = &PTR_LAB_0089b070;
  param_1[0x52] = &PTR_LAB_0089b070;
  param_1[0x41] = &PTR_LAB_0089b070;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0052c450();
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

