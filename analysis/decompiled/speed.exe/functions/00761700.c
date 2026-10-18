/* speed.exe 00761700 FUN_00761700; analysis pseudocode, not buildable source.
 * calls 00760b20 FUN_00760b20
 * calls 00760cd0 FUN_00760cd0
 * calls 00465a70 FUN_00465a70
 */

void __thiscall
FUN_00761700(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008817bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00760cd0();
  iVar1 = *(int *)(param_1 + 8 + param_2 * 4);
  if (iVar1 == 0) {
    iVar1 = FUN_00465a70(0x1268,8);
    local_4 = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00760b20(param_2,param_4,param_5);
    }
    *(int *)(param_1 + 8 + param_2 * 4) = iVar1;
    if (*(int *)(iVar1 + 0x1144) != 1) {
      *(undefined4 *)(iVar1 + 0x1144) = 1;
    }
    *(char *)(param_1 + 0x18) = *(char *)(param_1 + 0x18) + '\x01';
    ExceptionList = local_c;
    return;
  }
  if (*(char *)(iVar1 + 0x1154) != '\0') {
    *(undefined4 *)(iVar1 + 0x1156) = *param_5;
    *(undefined4 *)(iVar1 + 0x115a) = param_5[1];
    *(undefined4 *)(iVar1 + 0x115e) = param_5[2];
    *(undefined4 *)(iVar1 + 0x1162) = param_5[3];
  }
  ExceptionList = local_c;
  return;
}

