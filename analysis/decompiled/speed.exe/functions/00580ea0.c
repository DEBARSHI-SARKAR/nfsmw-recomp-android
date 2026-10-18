/* speed.exe 00580ea0 FUN_00580ea0; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_00580ea0(int *param_1,int param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  ushort *puVar4;
  
  iVar2 = 0;
  piVar3 = param_1;
  do {
    if (*piVar3 == param_2) {
      piVar3 = param_1 + iVar2 * 5;
      goto LAB_00580ec1;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 5;
  } while (iVar2 < 200);
  piVar3 = (int *)0x0;
LAB_00580ec1:
  bVar1 = *(byte *)((int)piVar3 + 0x11);
  piVar3 = (int *)CONCAT31((int3)((uint)piVar3 >> 8),bVar1);
  if (((bVar1 < 0x1a) && (piVar3 = param_1 + (uint)bVar1 * 0xe + 0x21ca, (char)*piVar3 != -1)) &&
     (piVar3 != (int *)0x0)) {
    puVar4 = (ushort *)(piVar3 + 6);
    if (param_3 == '\0') {
      puVar4 = (ushort *)(piVar3 + 10);
    }
    return (uint)puVar4[7] + (uint)puVar4[6] + (uint)puVar4[5] + (uint)puVar4[4] + (uint)puVar4[3] +
           (uint)puVar4[2] + (uint)puVar4[1] + (uint)*puVar4;
  }
  return (uint)piVar3 & 0xffff0000;
}

