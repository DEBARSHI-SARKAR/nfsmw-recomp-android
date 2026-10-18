/* speed.exe 0075abd0 FUN_0075abd0; analysis pseudocode, not buildable source.
 * calls 0075a130 FUN_0075a130
 * calls 006bd920 FUN_006bd920
 * calls 00463ca0 FUN_00463ca0
 * calls 005e29f0 FUN_005e29f0
 * calls 00753650 FUN_00753650
 * calls 0075a520 FUN_0075a520
 * calls 00466340 FUN_00466340
 * calls 00444fe0 FUN_00444fe0
 * calls 006e9e40 FUN_006e9e40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0075abd0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined **local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  void *local_1c;
  undefined1 *puStack_18;
  uint local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0088123e;
  local_1c = ExceptionList;
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  ExceptionList = &local_1c;
  FUN_00444fe0(param_1 + 0x50,*(int *)(param_1 + 0x24));
  FUN_006bd920(&local_30,*(undefined4 *)(param_1 + 0x24),param_1 + 0x40);
  *(float *)(param_1 + 0x80) = local_30 + *(float *)(param_1 + 0x80);
  local_3c = 0;
  *(float *)(param_1 + 0x84) = local_2c + *(float *)(param_1 + 0x84);
  *(float *)(param_1 + 0x88) = local_28 + *(float *)(param_1 + 0x88);
  *(float *)(param_1 + 0x8c) = local_24 + *(float *)(param_1 + 0x8c);
  local_38 = _DAT_00890968;
  iVar2 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0x28) != '\0')) {
    local_38 = *(undefined4 *)(iVar2 + 0x24);
    if ((*(uint *)(iVar2 + 0x1c) < *(uint *)(iVar2 + 0x20)) || (*(uint *)(iVar2 + 0x20) == 0)) {
      local_3c = 0;
    }
    else {
      local_3c = 1;
    }
  }
  local_40 = &PTR_LAB_008b480c;
  local_34 = 0xffffff;
  local_14 = 0;
  cVar1 = FUN_006e9e40(&local_40);
  if (cVar1 == '\0') {
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 == 0) {
      ExceptionList = local_1c;
      return;
    }
    FUN_00753650();
    FUN_00463ca0(DAT_009b0a2c,iVar2);
    *(undefined4 *)(param_1 + 0x30) = 0;
    ExceptionList = local_1c;
    return;
  }
  if (*(int *)(param_1 + 0x30) != 0) goto LAB_0075ad85;
  if ((*(int *)(param_1 + 0x1c) == 0) || (*(int *)(param_1 + 0x34) == 0)) {
    iVar2 = FUN_00466340(DAT_009b0a2c);
    local_14 = CONCAT31(local_14._1_3_,2);
    if (iVar2 == 0) goto LAB_0075ad7c;
    uVar3 = FUN_0075a130(*(undefined4 *)(param_1 + 0x18),0,1);
  }
  else {
    iVar2 = FUN_00466340(DAT_009b0a2c);
    local_14 = CONCAT31(local_14._1_3_,1);
    if (iVar2 == 0) {
LAB_0075ad7c:
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0075a520(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x34),1);
    }
  }
  local_14 = local_14 & 0xffffff00;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
LAB_0075ad85:
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x18) = local_34;
  FUN_005e29f0(param_1 + 0x50);
  ExceptionList = local_1c;
  return;
}

