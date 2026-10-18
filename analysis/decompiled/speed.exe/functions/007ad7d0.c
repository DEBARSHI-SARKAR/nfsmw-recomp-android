/* speed.exe 007ad7d0 FUN_007ad7d0; analysis pseudocode, not buildable source.
 * calls 0056ecc0 FUN_0056ecc0
 * calls 0045a430 FUN_0045a430
 * calls 0056f210 FUN_0056f210
 * calls 004e4ea0 FUN_004e4ea0
 * calls 0067c570 FUN_0067c570
 * calls 0056f100 FUN_0056f100
 * calls 0056cd20 FUN_0056cd20
 */

void __fastcall FUN_007ad7d0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined1 *puVar3;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined1 local_34 [20];
  undefined1 local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00882fd0;
  pvStack_c = ExceptionList;
  local_40 = 0.0;
  local_3c = 0.0;
  local_38 = 0.0;
  local_4c = 0.0;
  local_48 = 0.0;
  local_44 = 0.0;
  ExceptionList = &pvStack_c;
  if ((((*(int *)(param_1 + 0x34) != 0) &&
       (iVar2 = *(int *)(param_1 + 0x1a8), ExceptionList = &pvStack_c, -1 < iVar2)) &&
      (ExceptionList = &pvStack_c, iVar2 < 2)) &&
     (ExceptionList = &pvStack_c, *(int *)(DAT_0091cf90 + 0x10 + iVar2 * 4) != -0x414)) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_0056ecc0(*(undefined4 *)(*(int *)(param_1 + 0x34) + 8));
    if (iVar2 != 0) {
      FUN_004e4ea0(*(undefined4 *)(iVar2 + 8),0,0);
      local_4 = 0;
      if (*(char *)(iVar2 + 0x10) != -1) {
        puVar3 = local_34;
        FUN_0056f100(*(char *)(iVar2 + 0x10));
        FUN_0056f210(puVar3);
      }
      FUN_0067c570(local_34,&local_40);
      local_4 = 0xffffffff;
      FUN_0045a430();
    }
    if ((*(byte *)(DAT_0091cf90 + 300) & 1) != 0) {
      iVar2 = FUN_0056ecc0(*(undefined4 *)(param_1 + 0x68));
    }
    if (iVar2 != 0) {
      FUN_004e4ea0(*(undefined4 *)(iVar2 + 8),0,0);
      local_4 = 1;
      if (*(char *)(iVar2 + 0x10) != -1) {
        puVar3 = local_20;
        FUN_0056f100(*(char *)(iVar2 + 0x10));
        FUN_0056f210(puVar3);
      }
      FUN_0067c570(local_20,&local_4c);
      local_4 = 0xffffffff;
      FUN_0045a430();
    }
  }
  if (0xf < *(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0)) {
    local_4c = local_40;
    local_48 = local_3c;
    local_44 = local_38;
  }
  FUN_0056cd20(local_38);
  fVar1 = *(float *)(param_1 + 0xf8);
  if (*(float *)(param_1 + 0xf8) < local_44) {
    fVar1 = local_44;
  }
  if (*(float *)(param_1 + 0xf4) <= fVar1) {
    fVar1 = *(float *)(param_1 + 0xf4);
  }
  *(float *)(param_1 + 0x118) = fVar1;
  (**(code **)(*(int *)(param_1 + 0xd8) + 0x24))();
  FUN_0056cd20(local_40);
  fVar1 = *(float *)(param_1 + 0x13c);
  if (*(float *)(param_1 + 0x13c) < local_4c) {
    fVar1 = local_4c;
  }
  if (*(float *)(param_1 + 0x138) <= fVar1) {
    fVar1 = *(float *)(param_1 + 0x138);
  }
  *(float *)(param_1 + 0x15c) = fVar1;
  (**(code **)(*(int *)(param_1 + 0x11c) + 0x24))();
  FUN_0056cd20(local_3c);
  fVar1 = *(float *)(param_1 + 0x180);
  if (*(float *)(param_1 + 0x180) < local_48) {
    fVar1 = local_48;
  }
  if (*(float *)(param_1 + 0x17c) <= fVar1) {
    fVar1 = *(float *)(param_1 + 0x17c);
  }
  *(float *)(param_1 + 0x1a0) = fVar1;
  (**(code **)(*(int *)(param_1 + 0x160) + 0x24))();
  ExceptionList = pvStack_c;
  return;
}

