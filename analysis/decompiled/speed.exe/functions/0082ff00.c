/* speed.exe 0082ff00 FUN_0082ff00; analysis pseudocode, not buildable source.
 */

uint FUN_0082ff00(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 < 0) {
    return param_2;
  }
  iVar2 = *(int *)(DAT_009c2964 + 0x18);
  if ((int)(uint)*(ushort *)(iVar2 + 0x12) < param_1) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar2 + (uint)*(ushort *)(*(int *)(DAT_009c2964 + 0x1c) + param_1 * 2) * 4;
  }
  uVar4 = *(uint *)(iVar3 + 4) & 0xfff;
  if (uVar4 != 0) {
    piVar1 = (int *)(*(int *)(DAT_009c2964 + 0x30) + uVar4 * 4);
    iVar3 = piVar1[-1];
    iVar5 = *piVar1 - iVar3;
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        uVar4 = *(uint *)(iVar2 + iVar3 * 4 + iVar6 * 4);
        if (param_2 == (int)uVar4 >> 0x10) {
          param_2 = uVar4 & 0xffff;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
    return param_2;
  }
  return param_2;
}

