/* speed.exe 00457db0 FUN_00457db0; analysis pseudocode, not buildable source.
 * calls 00457d40 FUN_00457d40
 * calls 004569d0 FUN_004569d0
 * calls 00451490 FUN_00451490
 */

undefined4 __thiscall
FUN_00457db0(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,char param_7,undefined4 param_8)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint local_18;
  int *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00869cb9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = param_1;
  if (param_1[2] == param_1[1]) {
    ExceptionList = &local_c;
    FUN_004569d0(((param_1[1] * 5 & 0x3fffffffU) >> 2) + 3 & 0xfffffffc);
  }
  uVar4 = param_2;
  uVar2 = param_1[1];
  bVar3 = (byte)*(undefined2 *)((int)param_1 + 0xe);
  uVar6 = (param_2 >> (0x20 - bVar3 & 0x1f) | param_2 << (bVar3 & 0x1f)) % uVar2;
  local_18 = 0;
  param_2 = FUN_00451490(param_2,uVar6,&local_18);
  if (param_2 < uVar2) {
    local_10 = *param_1 + param_2 * 0xc;
    local_4 = 0;
    if (local_10 != 0) {
      FUN_00457d40(uVar4,param_3,param_4,param_5,param_6,param_8);
    }
    iVar1 = *param_1 + uVar6 * 0xc;
    puVar5 = (undefined4 *)(iVar1 + 10);
    local_4 = 0xffffffff;
    param_2 = CONCAT31(param_2._1_3_,(byte)local_18);
    puVar7 = &param_2;
    if ((byte)local_18 <= *(byte *)(iVar1 + 10)) {
      puVar7 = puVar5;
    }
    *(undefined1 *)puVar5 = *(undefined1 *)puVar7;
    if (*(ushort *)(param_1 + 3) < local_18) {
      *(short *)(param_1 + 3) = (short)local_18;
    }
    param_1[2] = param_1[2] + 1;
    if ((0x10 < *(ushort *)(param_1 + 3)) && (param_7 == '\0')) {
      FUN_004569d0(((param_1[1] * 5 & 0x3fffffffU) >> 2) + 3 & 0xfffffffc);
    }
    ExceptionList = local_c;
    return 1;
  }
  ExceptionList = local_c;
  return 0;
}

