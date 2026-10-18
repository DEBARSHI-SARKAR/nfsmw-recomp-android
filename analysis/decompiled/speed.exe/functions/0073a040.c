/* speed.exe 0073a040 FUN_0073a040; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0073a040(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = &DAT_009053e8;
  do {
    if (param_1 == *piVar1) {
      return (&DAT_009053e0)[iVar3 * 3];
    }
    piVar1 = piVar1 + 3;
    iVar3 = iVar3 + 1;
  } while ((int)piVar1 < 0x9057fc);
  iVar3 = 0;
  uVar2 = 0;
  do {
    if (param_1 == *(int *)((int)&DAT_009057fc + uVar2)) {
      return *(undefined4 *)(&DAT_009057f4 + iVar3 * 0xc);
    }
    uVar2 = uVar2 + 0xc;
    iVar3 = iVar3 + 1;
  } while (uVar2 < 0xc);
  return 0xffffffff;
}

