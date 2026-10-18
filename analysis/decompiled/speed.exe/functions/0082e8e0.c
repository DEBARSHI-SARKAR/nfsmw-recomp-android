/* speed.exe 0082e8e0 FUN_0082e8e0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0082e8e0(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2 + 0x14;
  uVar1 = param_1 - 0xc;
  if (uVar3 <= uVar1) {
    while (((*(uint *)(uVar1 + 4) >> 0x1a & 7) != (*(uint *)(param_1 + 4) >> 0x1a & 7) ||
           ((*(uint *)(uVar1 + 4) & 0x7f00) != 0x100))) {
      uVar1 = uVar1 - 0xc;
      if (uVar1 < uVar3) {
        return 0;
      }
    }
    if ((*(uint *)(uVar1 + 4) & 0x700000) == 0) {
      iVar2 = uVar1 - uVar3;
      *(char *)(param_2 + 0x10) =
           ((char)(iVar2 / 0xc) + (char)(iVar2 >> 0x1f)) -
           (char)((longlong)iVar2 * 0x2aaaaaab >> 0x3f);
      for (; uVar1 <= param_1; uVar1 = uVar1 + 0xc) {
        *(uint *)(uVar1 + 4) = *(uint *)(uVar1 + 4) & 0xffff7fff;
      }
      return 1;
    }
  }
  return 0;
}

