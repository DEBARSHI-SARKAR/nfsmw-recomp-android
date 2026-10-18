/* speed.exe 0049c290 FUN_0049c290; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0049c290(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  int local_4;
  
  local_4 = FUN_007c4b80();
  if (local_4 < 0) {
    local_4 = 0;
  }
  if (*(int *)(param_1 + 0x1c) + -1 <= local_4) {
    local_4 = *(int *)(param_1 + 0x1c) + -2;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  param_2 = param_2 - (float)local_4;
  *(float *)(param_1 + 0x18) = param_2;
  if (local_4 == iVar2) goto LAB_0049c33d;
  if (local_4 == iVar2 + 1) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
    piVar4 = (int *)(*(int *)(param_1 + 0xc) + local_4 * 4);
LAB_0049c30b:
    *(int *)(param_1 + 0x14) = piVar4[1];
  }
  else {
    if (local_4 != iVar2 + -1) {
      piVar4 = (int *)(*(int *)(param_1 + 0xc) + local_4 * 4);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 0xc) + local_4 * 4);
      goto LAB_0049c30b;
    }
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
    piVar4 = (int *)(*(int *)(param_1 + 0xc) + local_4 * 4);
    *(int *)(param_1 + 0x10) = *piVar4;
  }
  fVar1 = _DAT_0089096c;
  *(int *)(param_1 + 0x20) = local_4;
  iVar2 = *piVar4;
  *(float *)(param_1 + 0x28) = fVar1 / *(float *)(iVar2 + 0x48);
  fVar1 = _DAT_0089096c;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar2 + 0x50);
  iVar2 = piVar4[1];
  *(float *)(param_1 + 0x2c) = fVar1 / *(float *)(iVar2 + 0x48);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar2 + 0x50);
LAB_0049c33d:
  fVar1 = *(float *)(param_1 + 0x38);
  fVar3 = param_2 / *(float *)(param_1 + 0x2c) +
          (_DAT_0089096c - param_2) / *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x38) = fVar3;
  *(float *)(param_1 + 0x40) =
       ((*(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x40)) / fVar3) * fVar1 -
       *(float *)(param_1 + 0x3c);
  return;
}

