/* speed.exe 007aa4b0 FUN_007aa4b0; analysis pseudocode, not buildable source.
 * calls 0056ecc0 FUN_0056ecc0
 * calls 0045a430 FUN_0045a430
 * calls 0056f210 FUN_0056f210
 * calls 004e4ea0 FUN_004e4ea0
 * calls 0067c570 FUN_0067c570
 * calls 0056f100 FUN_0056f100
 * calls 0056cd20 FUN_0056cd20
 */

void __fastcall FUN_007aa4b0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined1 *puVar3;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00882ae8;
  pvStack_c = ExceptionList;
  local_2c = 0.0;
  local_28 = 0.0;
  local_24 = 0.0;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_0056ecc0(*(undefined4 *)(*(int *)(param_1 + 0x34) + 8));
  FUN_004e4ea0(*(undefined4 *)(iVar2 + 8),0,0);
  local_4 = 0;
  if (*(char *)(iVar2 + 0x10) != -1) {
    puVar3 = local_20;
    FUN_0056f100(*(char *)(iVar2 + 0x10));
    FUN_0056f210(puVar3);
  }
  FUN_0067c570(local_20,&local_2c);
  FUN_0056cd20(local_24);
  fVar1 = *(float *)(param_1 + 0x80);
  if (*(float *)(param_1 + 0x80) < local_24) {
    fVar1 = local_24;
  }
  if (*(float *)(param_1 + 0x7c) <= fVar1) {
    fVar1 = *(float *)(param_1 + 0x7c);
  }
  *(float *)(param_1 + 0xa0) = fVar1;
  (**(code **)(*(int *)(param_1 + 0x60) + 0x24))();
  FUN_0056cd20(local_2c);
  fVar1 = *(float *)(param_1 + 0xc4);
  if (*(float *)(param_1 + 0xc4) < local_2c) {
    fVar1 = local_2c;
  }
  if (*(float *)(param_1 + 0xc0) <= fVar1) {
    fVar1 = *(float *)(param_1 + 0xc0);
  }
  *(float *)(param_1 + 0xe4) = fVar1;
  (**(code **)(*(int *)(param_1 + 0xa4) + 0x24))();
  FUN_0056cd20(local_28);
  fVar1 = *(float *)(param_1 + 0x108);
  if (*(float *)(param_1 + 0x108) < local_28) {
    fVar1 = local_28;
  }
  if (*(float *)(param_1 + 0x104) <= fVar1) {
    fVar1 = *(float *)(param_1 + 0x104);
  }
  *(float *)(param_1 + 0x128) = fVar1;
  (**(code **)(*(int *)(param_1 + 0xe8) + 0x24))();
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = pvStack_c;
  return;
}

