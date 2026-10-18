/* speed.exe 004ea230 FUN_004ea230; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 004e42a0 FUN_004e42a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ea230(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)*param_1;
  uVar1 = *(uint *)(iVar5 + 0xc);
  uVar2 = *(uint *)(iVar5 + 0x14);
  fVar3 = (float)(uVar1 & 0xfff) * _DAT_0089906c;
  uVar6 = *(uint *)(iVar5 + 4) & 0xffff;
  if ((*(uint *)(iVar5 + 4) & 0x8000) != 0) {
    uVar6 = uVar6 | 0xffff0000;
  }
  if (fVar3 <= *(float *)param_1[1]) {
    if ((float)(uVar2 & 0xfff) * _DAT_0089906c <= *(float *)param_1[1] - fVar3) {
      *(undefined4 *)param_1[1] = 0;
      *(undefined4 *)(param_1[1] + 0x1c) = 0x7fff;
      goto LAB_004ea32d;
    }
    uVar4 = FUN_007c4b80();
    iVar5 = FUN_004e42a0((int)uVar2 >> 0xc & 0xf,uVar4,0);
  }
  else {
    uVar4 = FUN_007c4b80();
    iVar5 = FUN_004e42a0((int)uVar1 >> 0xc & 0xf,uVar4,0);
  }
  if ((int)uVar6 < 0) {
    *(int *)(param_1[1] + 0x1c) = iVar5;
  }
  else {
    *(int *)(param_1[1] + 0x1c) = 0x7fff - iVar5;
  }
LAB_004ea32d:
  iVar5 = param_1[1];
  uVar4 = FUN_007c4b80();
  *(undefined4 *)(iVar5 + 0x18) = uVar4;
  return;
}

