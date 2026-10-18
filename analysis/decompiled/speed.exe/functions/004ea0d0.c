/* speed.exe 004ea0d0 FUN_004ea0d0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 004e42a0 FUN_004e42a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ea0d0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = *(int *)*param_1;
  uVar1 = *(uint *)(iVar7 + 0xc);
  uVar2 = *(uint *)(iVar7 + 0x14);
  fVar4 = (float)(uVar1 & 0xfff) * _DAT_0089906c;
  fVar5 = (float)(*(uint *)(iVar7 + 0x10) & 0xfff) * _DAT_0089906c;
  uVar8 = *(uint *)(iVar7 + 4) & 0xffff;
  if ((*(uint *)(iVar7 + 4) & 0x8000) != 0) {
    uVar8 = uVar8 | 0xffff0000;
  }
  pfVar3 = (float *)param_1[1];
  if (fVar4 <= *pfVar3) {
    if (*pfVar3 - fVar4 <= fVar5) {
      pfVar3[7] = 0.0;
      goto LAB_004ea1f9;
    }
    if ((float)(uVar2 & 0xfff) * _DAT_0089906c <= *pfVar3 - (fVar4 + fVar5)) {
      *(undefined4 *)param_1[1] = 0;
      *(undefined4 *)(param_1[1] + 0x1c) = 0x7fff;
      goto LAB_004ea1f9;
    }
    uVar6 = FUN_007c4b80();
  }
  else {
    uVar6 = FUN_007c4b80();
    uVar2 = uVar1;
  }
  iVar7 = FUN_004e42a0((int)uVar2 >> 0xc & 0xf,uVar6,0);
  if ((int)uVar8 < 0) {
    *(int *)(param_1[1] + 0x1c) = iVar7;
  }
  else {
    *(int *)(param_1[1] + 0x1c) = 0x7fff - iVar7;
  }
LAB_004ea1f9:
  iVar7 = param_1[1];
  uVar6 = FUN_007c4b80();
  *(undefined4 *)(iVar7 + 0x18) = uVar6;
  return;
}

