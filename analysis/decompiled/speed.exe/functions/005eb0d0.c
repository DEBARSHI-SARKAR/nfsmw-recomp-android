/* speed.exe 005eb0d0 FUN_005eb0d0; analysis pseudocode, not buildable source.
 */

void FUN_005eb0d0(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar1 = *param_1;
  iVar3 = (int)param_3 - (int)param_1 >> 2;
  if (iVar3 < 0x29) {
    uVar2 = *param_2;
    if (uVar2 < uVar1) {
      *param_2 = uVar1;
      *param_1 = uVar2;
    }
    uVar1 = *param_3;
    if (uVar1 < *param_2) {
      *param_3 = *param_2;
      *param_2 = uVar1;
    }
    uVar1 = *param_2;
    if (uVar1 < *param_1) {
      *param_2 = *param_1;
      *param_1 = uVar1;
    }
  }
  else {
    iVar3 = iVar3 + 1;
    iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3;
    uVar2 = param_1[iVar3];
    if (uVar2 < uVar1) {
      param_1[iVar3] = uVar1;
      *param_1 = uVar2;
    }
    uVar1 = param_1[iVar3 * 2];
    if (uVar1 < param_1[iVar3]) {
      param_1[iVar3 * 2] = param_1[iVar3];
      param_1[iVar3] = uVar1;
    }
    uVar1 = param_1[iVar3];
    if (uVar1 < *param_1) {
      param_1[iVar3] = *param_1;
      *param_1 = uVar1;
    }
    uVar1 = *param_2;
    puVar4 = param_2 + -iVar3;
    if (uVar1 < *puVar4) {
      *param_2 = *puVar4;
      *puVar4 = uVar1;
    }
    uVar1 = param_2[iVar3];
    if (uVar1 < *param_2) {
      param_2[iVar3] = *param_2;
      *param_2 = uVar1;
    }
    uVar1 = *param_2;
    if (uVar1 < *puVar4) {
      *param_2 = *puVar4;
      *puVar4 = uVar1;
    }
    puVar4 = param_3 + -iVar3;
    uVar1 = *puVar4;
    puVar5 = param_3 + iVar3 * -2;
    if (uVar1 < *puVar5) {
      *puVar4 = *puVar5;
      *puVar5 = uVar1;
    }
    uVar1 = *param_3;
    if (uVar1 < *puVar4) {
      *param_3 = *puVar4;
      *puVar4 = uVar1;
    }
    uVar1 = *puVar4;
    if (uVar1 < *puVar5) {
      *puVar4 = *puVar5;
      *puVar5 = uVar1;
    }
    uVar1 = *param_2;
    if (uVar1 < param_1[iVar3]) {
      *param_2 = param_1[iVar3];
      param_1[iVar3] = uVar1;
    }
    uVar1 = *puVar4;
    if (uVar1 < *param_2) {
      *puVar4 = *param_2;
      *param_2 = uVar1;
    }
    uVar1 = *param_2;
    if (uVar1 < param_1[iVar3]) {
      *param_2 = param_1[iVar3];
      param_1[iVar3] = uVar1;
      return;
    }
  }
  return;
}

