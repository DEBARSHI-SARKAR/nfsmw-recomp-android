/* speed.exe 0080139d FUN_0080139d; analysis pseudocode, not buildable source.
 */

uint FUN_0080139d(int *param_1,uint param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  
  piVar2 = param_1;
  iVar3 = param_1[3];
  puVar1 = (uint *)(param_1 + 1);
  uVar6 = param_1[2];
  puVar4 = (undefined1 *)(*param_1 + iVar3);
  uVar5 = 0;
  param_1 = (int *)*puVar1;
  if (uVar6 < param_2) {
    param_2 = param_2 - uVar6;
    uVar5 = (*puVar1 >> (0x20U - (char)uVar6 & 0x1f)) << ((byte)param_2 & 0x1f);
    param_1 = (int *)CONCAT31(CONCAT21(CONCAT11(*puVar4,puVar4[1]),puVar4[2]),puVar4[3]);
    iVar3 = iVar3 + 4;
    uVar6 = 0x20;
  }
  piVar2[3] = iVar3;
  piVar2[2] = uVar6 - param_2;
  piVar2[1] = (int)param_1 << ((byte)param_2 & 0x1f);
  return (uint)param_1 >> (0x20 - (byte)param_2 & 0x1f) | uVar5;
}

