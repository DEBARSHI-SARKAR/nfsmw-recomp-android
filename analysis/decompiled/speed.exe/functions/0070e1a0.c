/* speed.exe 0070e1a0 FUN_0070e1a0; analysis pseudocode, not buildable source.
 * calls 00707380 FUN_00707380
 */

void FUN_0070e1a0(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_1;
  if (param_1 != param_2) {
joined_r0x0070e1b4:
    iVar5 = iVar4;
    iVar4 = iVar5 + 0x2c;
    if (iVar4 != param_2) {
      uVar2 = *(uint *)(iVar5 + 0x50);
      iVar6 = param_1;
      if (*(uint *)(param_1 + 0x24) <= uVar2) goto LAB_0070e1d3;
      goto joined_r0x0070e1ee;
    }
  }
  return;
LAB_0070e1d3:
  iVar3 = iVar4;
  if (uVar2 < *(uint *)(iVar5 + 0x24)) {
    do {
      iVar6 = iVar3 + -0x2c;
      puVar1 = (uint *)(iVar3 + -0x34);
      iVar3 = iVar6;
    } while (uVar2 < *puVar1);
joined_r0x0070e1ee:
    if ((iVar6 != iVar4) && (iVar4 != iVar5 + 0x58)) {
      FUN_00707380(iVar6,iVar4,iVar5 + 0x58,0,0);
    }
  }
  goto joined_r0x0070e1b4;
}

