/* speed.exe 0082192e FUN_0082192e; analysis pseudocode, not buildable source.
 */

int FUN_0082192e(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x1000;
  if (0x4af < (int)param_1) {
    uVar1 = param_1 / 0x4b0;
    param_1 = param_1 % 0x4b0;
    do {
      iVar3 = iVar3 << 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if ((int)param_1 < -0x4af) {
    iVar2 = (-param_1 - 0x4b0) / 0x4b0 + 1;
    param_1 = param_1 + iVar2 * 0x4b0;
    do {
      iVar3 = iVar3 >> 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = (int)(param_1 * 0x369d) >> 0x10;
  if (iVar2 < -0xff) {
    iVar2 = -0xff;
  }
  if (iVar2 < 0) {
    iVar3 = (int)(((byte)s_SNDAUTHOR__Adamchan__Tuesday_02__0090c690[iVar2] + 0x100) * iVar3) >> 9;
  }
  else {
    iVar3 = (int)((*(byte *)(iVar2 + 0x90c590) + 0x100) * iVar3) >> 8;
  }
  return iVar3;
}

