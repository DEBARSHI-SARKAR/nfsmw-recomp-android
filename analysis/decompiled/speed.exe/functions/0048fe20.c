/* speed.exe 0048fe20 FUN_0048fe20; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

int __thiscall FUN_0048fe20(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  
  iVar2 = FUN_007c4b80();
  puVar4 = *(ushort **)(*(int *)(param_1 + 0xc) + 8);
  if (param_2 < (float)*puVar4) {
    return 0;
  }
  if (*(int *)(param_1 + 0x10) < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x10) + -1;
  }
  if (iVar2 < (int)(uint)puVar4[iVar3]) {
    for (; (0 < iVar3 && (iVar2 < (int)(uint)puVar4[iVar3])); iVar3 = iVar3 + -1) {
    }
  }
  else {
    iVar5 = *(ushort *)(*(int *)(param_1 + 0xc) + 0xc) - 2;
    if (iVar3 < iVar5) {
      puVar4 = puVar4 + iVar3 + 1;
      iVar1 = iVar3;
      while (iVar3 = iVar1, (int)(uint)*puVar4 <= iVar2) {
        puVar4 = puVar4 + 1;
        iVar1 = iVar3 + 1;
        if (iVar5 <= iVar3 + 1) {
          return iVar3 + 2;
        }
      }
    }
  }
  return iVar3 + 1;
}

