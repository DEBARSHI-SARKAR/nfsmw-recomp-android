/* speed.exe 007b34c0 FUN_007b34c0; analysis pseudocode, not buildable source.
 * calls 0056ecc0 FUN_0056ecc0
 * calls 0045a430 FUN_0045a430
 * calls 0056f210 FUN_0056f210
 * calls 004e4ea0 FUN_004e4ea0
 * calls 0067c570 FUN_0067c570
 * calls 0056f100 FUN_0056f100
 * calls 0056cd20 FUN_0056cd20
 */

void __fastcall FUN_007b34c0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined1 *puVar3;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883148;
  local_c = ExceptionList;
  iVar2 = *(int *)(*(int *)(param_1 + 0x44) + 0x18);
  if (iVar2 != -1) {
    ExceptionList = &local_c;
    iVar2 = FUN_0056ecc0(iVar2);
    local_2c = 0.0;
    local_28 = 0.0;
    local_24 = 0.0;
    if (iVar2 != 0) {
      FUN_004e4ea0(*(undefined4 *)(iVar2 + 8),0,0);
      local_4 = 0;
      if (*(char *)(iVar2 + 0x10) != -1) {
        puVar3 = local_20;
        FUN_0056f100(*(char *)(iVar2 + 0x10));
        FUN_0056f210(puVar3);
      }
      FUN_0067c570(local_20,&local_2c);
      local_4 = 0xffffffff;
      FUN_0045a430();
    }
    FUN_0056cd20(local_24);
    fVar1 = *(float *)(param_1 + 0x100);
    if (*(float *)(param_1 + 0x100) < local_24) {
      fVar1 = local_24;
    }
    if (*(float *)(param_1 + 0xfc) <= fVar1) {
      fVar1 = *(float *)(param_1 + 0xfc);
    }
    *(float *)(param_1 + 0x120) = fVar1;
    (**(code **)(*(int *)(param_1 + 0xe0) + 0x24))();
    FUN_0056cd20(local_2c);
    fVar1 = *(float *)(param_1 + 0x144);
    if (*(float *)(param_1 + 0x144) < local_2c) {
      fVar1 = local_2c;
    }
    if (*(float *)(param_1 + 0x140) <= fVar1) {
      fVar1 = *(float *)(param_1 + 0x140);
    }
    *(float *)(param_1 + 0x164) = fVar1;
    (**(code **)(*(int *)(param_1 + 0x124) + 0x24))();
    FUN_0056cd20(local_28);
    fVar1 = *(float *)(param_1 + 0x188);
    if (*(float *)(param_1 + 0x188) < local_28) {
      fVar1 = local_28;
    }
    if (*(float *)(param_1 + 0x184) <= fVar1) {
      fVar1 = *(float *)(param_1 + 0x184);
    }
    *(float *)(param_1 + 0x1a8) = fVar1;
    (**(code **)(*(int *)(param_1 + 0x168) + 0x24))();
  }
  ExceptionList = local_c;
  return;
}

