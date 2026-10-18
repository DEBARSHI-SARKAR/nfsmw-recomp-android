/* speed.exe 0067be90 FUN_0067be90; analysis pseudocode, not buildable source.
 * calls 00723c90 FUN_00723c90
 * calls 005d5a50 FUN_005d5a50
 * calls 0067b970 FUN_0067b970
 * calls 00728920 FUN_00728920
 */

void __fastcall FUN_0067be90(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0087adf1;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x39;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a9e7c;
  param_1[2] = &PTR_LAB_008a9e74;
  param_1[0xb] = &PTR_LAB_008a9e58;
  param_1[0xd] = &PTR_LAB_008a9dd8;
  param_1[0x10] = &PTR_LAB_008a9dcc;
  param_1[0x25] = &PTR_LAB_008a9db0;
  param_1[0x27] = &PTR_LAB_008a9da8;
  *puVar1 = &PTR_LAB_008a9d90;
  local_4 = 1;
  if (param_1[0x3c] != 0) {
    *(undefined4 *)(param_1[0x3c] + 0x38) = 0;
    if ((param_1[0x3c] != 0) && (*(char *)(param_1 + 0x3b) != '\x01')) {
      iVar2 = FUN_00723c90(*(undefined4 *)(param_1[0x3c] + 0x2c));
      if (iVar2 != 0) {
        *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) & 0xef;
        FUN_00728920();
      }
      *(undefined1 *)(param_1 + 0x3b) = 1;
    }
  }
  DAT_0092617c = DAT_0092617c + -1;
  *puVar1 = &PTR_FUN_00890970;
  local_4 = local_4 & 0xffffff00;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_0067b970();
  ExceptionList = local_c;
  return;
}

