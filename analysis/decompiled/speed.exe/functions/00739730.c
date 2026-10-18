/* speed.exe 00739730 FUN_00739730; analysis pseudocode, not buildable source.
 */

int * __thiscall FUN_00739730(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  bool bVar6;
  
  if (*(ushort *)(param_1 + 10) == 0xffff) {
    return (int *)0x0;
  }
  psVar4 = (short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)*(ushort *)(param_1 + 10) * 2);
  iVar3 = 0;
  iVar5 = (int)*psVar4;
  if (param_3 == 0) {
    bVar6 = SBORROW4(0,iVar5);
    iVar2 = -iVar5;
  }
  else {
    if (0 < iVar5) {
      do {
        iVar2 = iVar3 + 1;
        iVar3 = iVar3 + 1;
        if (param_3 == *(int *)(DAT_009b09d4 + 0x1c) + psVar4[iVar2] * 8) break;
      } while (iVar3 < iVar5);
    }
    bVar6 = SBORROW4(iVar3,iVar5);
    iVar2 = iVar3 - iVar5;
    if (iVar3 == iVar5) {
      return (int *)0x0;
    }
  }
  if (bVar6 != iVar2 < 0) {
    psVar4 = psVar4 + iVar3 + 1;
    do {
      piVar1 = (int *)(*(int *)(DAT_009b09d4 + 0x1c) + *psVar4 * 8);
      if (param_2 == 0) {
        return piVar1;
      }
      if (*piVar1 == param_2) {
        return piVar1;
      }
      iVar3 = iVar3 + 1;
      psVar4 = psVar4 + 1;
    } while (iVar3 < iVar5);
  }
  return (int *)0x0;
}

