/* speed.exe 005c04d0 FUN_005c04d0; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 005b3b20 FUN_005b3b20
 */

void __fastcall FUN_005c04d0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0087441e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a2f3c;
  iVar1 = param_1[0x1a4];
  local_4 = 1;
  while (iVar1 != 0) {
    iVar1 = param_1[0x1a5];
    if (iVar1 != 0) {
      param_1[0x1a5] = *(undefined4 *)(iVar1 + 4);
      if (iVar1 == param_1[0x1a6]) {
        param_1[0x1a6] = *(undefined4 *)(iVar1 + 8);
      }
      if (*(int *)(iVar1 + 8) != 0) {
        *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = *(undefined4 *)(iVar1 + 4);
      }
      if (*(int *)(iVar1 + 4) != 0) {
        *(undefined4 *)(*(int *)(iVar1 + 4) + 8) = *(undefined4 *)(iVar1 + 8);
      }
      *(undefined4 *)(iVar1 + 4) = 0xabadcafe;
      *(undefined4 *)(iVar1 + 8) = 0xabadcafe;
      param_1[0x1a4] = param_1[0x1a4] + -1;
    }
    iVar1 = param_1[0x1a4];
  }
  param_1[0x1a3] = &PTR_LAB_008a2c18;
  FUN_005b3b20();
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(param_1 + 3,0x34,0x20,FUN_005bf190);
  *param_1 = &PTR_LAB_008a2c14;
  ExceptionList = local_c;
  return;
}

