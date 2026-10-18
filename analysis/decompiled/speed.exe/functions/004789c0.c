/* speed.exe 004789c0 FUN_004789c0; analysis pseudocode, not buildable source.
 * calls 0046d2e0 FUN_0046d2e0
 * calls 00477ee0 FUN_00477ee0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004789c0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  float10 fVar11;
  
  fVar3 = *(float *)(param_4 + 0x70);
  bVar4 = _DAT_00890968 <= fVar3;
  iVar2 = (uint)bVar4 * 2 + -1;
  uVar7 = FUN_0046d2e0(param_3);
  uVar1 = (int)*(short *)(param_1 + 0x14) - 1;
  uVar9 = ((int)uVar7 < 1) - 1 & uVar7;
  if ((int)uVar1 < (int)uVar9) {
    uVar9 = uVar1;
  }
  if (uVar7 == uVar9) {
    param_3 = uVar7 * 0x84 + 0x28 + param_1;
  }
  else {
    param_3 = 0;
  }
  uVar7 = uVar7 + iVar2;
  uVar9 = uVar7 * 0x84 + 0x28 + param_1;
  while( true ) {
    uVar8 = ((int)uVar7 < 1) - 1 & uVar7;
    if ((int)uVar1 < (int)uVar8) {
      uVar8 = uVar1;
    }
    if (uVar7 != uVar8) break;
    uVar8 = ((int)uVar7 < 1) - 1 & uVar7;
    if ((int)uVar1 < (int)uVar8) {
      uVar8 = uVar1;
    }
    pcVar10 = (char *)((uVar7 != uVar8) - 1 & uVar9);
    if ((*pcVar10 == '\0') || (cVar6 = FUN_00477ee0(param_3,bVar4,pcVar10,!bVar4), cVar6 == '\0'))
    break;
    uVar7 = uVar7 + iVar2;
    uVar9 = uVar9 + iVar2 * 0x84;
  }
  fVar11 = (float10)_DAT_00894200;
  fVar5 = fVar3;
  if (fVar3 < _DAT_00890968) {
    fVar5 = -fVar3;
  }
  if ((_DAT_00891218 < fVar5) &&
     (fVar11 = (float10)_DAT_00890968 / (float10)fVar3, fVar11 < (float10)_DAT_00890968)) {
    fVar11 = (float10)_DAT_00890968;
  }
  return fVar11;
}

