/* speed.exe 004e5a80 FUN_004e5a80; analysis pseudocode, not buildable source.
 * calls 004c6250 FUN_004c6250
 * calls 0045f340 FUN_0045f340
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004e5a80(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float10 fVar7;
  float local_44;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
  uVar1 = *(undefined4 *)(iVar6 + 0x44);
  uVar2 = *(undefined4 *)(iVar6 + 0x48);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar6 + 0x40);
  *(undefined4 *)(param_1 + 100) = uVar1;
  local_44 = 2.0;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
  fVar3 = *(float *)(iVar6 + 0x10);
  fVar4 = *(float *)(iVar6 + 0x14);
  fVar5 = *(float *)(iVar6 + 0x18);
  iVar6 = *(int *)(*(int *)(param_1 + 0x18) + 0xc4);
  if ((iVar6 != 0) && (iVar6 != 1)) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
    if (iVar6 < 1) {
      iVar6 = 0;
    }
    else if (1 < iVar6) {
      iVar6 = 1;
    }
    local_2c = (&DAT_00914434)[iVar6 * 4];
    local_30 = (&DAT_00914430)[iVar6 * 4];
    local_20 = *(float *)(param_1 + 0x60);
    local_1c = *(float *)(param_1 + 100);
    local_28 = 0;
    local_18 = 0.0;
    fVar7 = (float10)FUN_0045f340(&local_20,&local_30);
    if (fVar7 - (float10)_DAT_0089096c <= (float10)_DAT_00897dd0) {
      local_44 = (float)(fVar7 - (float10)_DAT_0089096c);
    }
  }
  local_44 = -local_44;
  local_20 = fVar3 * local_44;
  local_1c = fVar4 * local_44;
  local_18 = local_44 * fVar5 + *(float *)(param_1 + 0x68);
  *(float *)(param_1 + 0x68) = local_18;
  *(float *)(param_1 + 0x60) = local_20 + *(float *)(param_1 + 0x60);
  *(float *)(param_1 + 100) = local_1c + *(float *)(param_1 + 100);
  FUN_004c6250(param_2);
  return;
}

