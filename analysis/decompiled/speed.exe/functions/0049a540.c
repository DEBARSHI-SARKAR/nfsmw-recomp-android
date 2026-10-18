/* speed.exe 0049a540 FUN_0049a540; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 00445300 FUN_00445300
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0049a540(int param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  ushort uVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  uint uVar7;
  int local_4;
  
  local_4 = FUN_007c4b80();
  if (local_4 < 0) {
    local_4 = 0;
  }
  if (*(int *)(param_1 + 0x2c) + -1 <= local_4) {
    local_4 = *(int *)(param_1 + 0x2c) + -2;
  }
  iVar4 = *(int *)(param_1 + 0x30);
  param_2 = param_2 - (float)local_4;
  *(float *)(param_1 + 0x28) = param_2;
  if (local_4 == iVar4) {
    fVar2 = *(float *)(param_1 + 0x48);
    fVar5 = param_2 / *(float *)(param_1 + 0x44) +
            (_DAT_0089096c - param_2) / *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x48) = fVar5;
    *(float *)(param_1 + 0x50) =
         ((*(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x50)) / fVar5) * fVar2 -
         *(float *)(param_1 + 0x4c);
    return;
  }
  if (local_4 == iVar4 + 1) {
    (**(code **)(*DAT_009117f4 + 0x2c))(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
    uVar6 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4 + local_4 * 4);
LAB_0049a653:
    uVar6 = (**(code **)(*DAT_009117f4 + 0x24))(uVar6);
    *(undefined4 *)(param_1 + 0x1c) = uVar6;
  }
  else {
    if (local_4 != iVar4 + -1) {
      if (*(int *)(param_1 + 0x18) != 0) {
        (**(code **)(*DAT_009117f4 + 0x2c))(*(int *)(param_1 + 0x18));
      }
      if (*(int *)(param_1 + 0x1c) != 0) {
        (**(code **)(*DAT_009117f4 + 0x2c))(*(int *)(param_1 + 0x1c));
      }
      uVar6 = (**(code **)(*DAT_009117f4 + 0x24))
                        (*(undefined4 *)(*(int *)(param_1 + 0xc) + local_4 * 4));
      *(undefined4 *)(param_1 + 0x18) = uVar6;
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4 + local_4 * 4);
      goto LAB_0049a653;
    }
    (**(code **)(*DAT_009117f4 + 0x2c))(*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
    uVar6 = (**(code **)(*DAT_009117f4 + 0x24))
                      (*(undefined4 *)(*(int *)(param_1 + 0xc) + local_4 * 4));
    *(undefined4 *)(param_1 + 0x18) = uVar6;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    if (local_4 == *(int *)(param_1 + 0x30) + 1) {
      (**(code **)(*DAT_009117f4 + 0x2c))(*(undefined4 *)(param_1 + 0x20));
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x24);
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 4 + local_4 * 4);
    }
    else {
      if (local_4 == *(int *)(param_1 + 0x30) + -1) {
        (**(code **)(*DAT_009117f4 + 0x2c))(*(undefined4 *)(param_1 + 0x24));
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
        uVar6 = (**(code **)(*DAT_009117f4 + 0x24))
                          (*(undefined4 *)(*(int *)(param_1 + 0x14) + local_4 * 4));
        *(undefined4 *)(param_1 + 0x20) = uVar6;
        goto LAB_0049a711;
      }
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_00445300(*(int *)(param_1 + 0x20));
      }
      if (*(int *)(param_1 + 0x24) != 0) {
        FUN_00445300(*(int *)(param_1 + 0x24));
      }
      uVar6 = (**(code **)(*DAT_009117f4 + 0x24))
                        (*(undefined4 *)(*(int *)(param_1 + 0x14) + local_4 * 4));
      *(undefined4 *)(param_1 + 0x20) = uVar6;
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 4 + local_4 * 4);
    }
    uVar6 = (**(code **)(*DAT_009117f4 + 0x24))(uVar6);
    *(undefined4 *)(param_1 + 0x24) = uVar6;
  }
LAB_0049a711:
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + local_4 * 4);
  piVar1 = (int *)(*(int *)(param_1 + 0x10) + local_4 * 4);
  if ((*(byte *)(iVar4 + 8) & 1) == 0) {
    uVar7 = (uint)*(byte *)(*piVar1 + 10) + (uint)*(ushort *)(*piVar1 + 6);
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 6);
  }
  *(float *)(param_1 + 0x38) = (float)uVar7;
  uVar3 = *(ushort *)(piVar1[1] + 6);
  *(float *)(param_1 + 0x3c) = (float)uVar3;
  if ((*(byte *)(piVar1[1] + 8) & 1) == 0) {
    *(float *)(param_1 + 0x3c) = (float)*(byte *)(piVar1[1] + 10) + (float)uVar3;
  }
  *(int *)(param_1 + 0x30) = local_4;
  *(float *)(param_1 + 0x40) =
       (float)((uint)*(byte *)(*piVar1 + 0xb) + (uint)*(byte *)(*piVar1 + 10)) * _DAT_008933d4;
  fVar5 = (float)((uint)*(byte *)(piVar1[1] + 0xb) + (uint)*(byte *)(piVar1[1] + 10)) *
          _DAT_008933d4;
  *(float *)(param_1 + 0x44) = fVar5;
  fVar2 = *(float *)(param_1 + 0x48);
  fVar5 = *(float *)(param_1 + 0x28) / fVar5 +
          (_DAT_0089096c - *(float *)(param_1 + 0x28)) / *(float *)(param_1 + 0x40);
  *(float *)(param_1 + 0x48) = fVar5;
  *(float *)(param_1 + 0x50) =
       ((*(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x50)) / fVar5) * fVar2 -
       *(float *)(param_1 + 0x4c);
  return;
}

