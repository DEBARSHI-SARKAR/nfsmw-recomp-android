/* speed.exe 007a9300 FUN_007a9300; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 00652b00 thunk_FUN_007c7250
 * calls 004af870 FUN_004af870
 * calls 00759140 FUN_00759140
 * calls 00652b10 thunk_FUN_007c7250
 * calls 006466b0 FUN_006466b0
 * calls 005d0370 FUN_005d0370
 * calls 00572360 FUN_00572360
 */

void __fastcall FUN_007a9300(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00882a28;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008b74f4;
  local_4 = 0;
  if ((int *)param_1[0x13] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x13] + 4))(1);
  }
  iVar1 = param_1[0xd];
  if (iVar1 != 0) {
    FUN_00759140();
    thunk_FUN_007c7250(iVar1);
  }
  pvVar2 = (void *)param_1[0x12];
  if (pvVar2 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar2,0x18,*(int *)((int)pvVar2 + -4),thunk_FUN_00501480);
    thunk_FUN_007c7250((int)pvVar2 + -4);
  }
  param_1[0x12] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if (*(int *)(DAT_00911fa8 + 0x58) != 0) {
    FUN_004af870();
  }
  iVar1 = param_1[0x18];
  if (iVar1 != 0) {
    FUN_006466b0();
    FUN_005d0370(iVar1,0x28c,0);
    param_1[0x18] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = pvStack_c;
  return;
}

