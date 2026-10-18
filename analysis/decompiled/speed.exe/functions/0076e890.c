/* speed.exe 0076e890 FUN_0076e890; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0076e890(byte *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = 0;
  if (param_2 == '\0') {
    uVar4 = (uint)param_1[1];
  }
  else {
    uVar4 = (uint)*param_1 - (uint)param_1[1];
  }
  iVar3 = 0;
  if (0 < (int)uVar4) {
    do {
      iVar1 = iVar3;
      if (param_2 == '\0') {
        iVar1 = ((uint)*param_1 - iVar3) + -1;
      }
      if (((byte)*(undefined4 *)(param_1 + iVar1 * 4 + 4) & 0xf) == 1) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar4);
  }
  return iVar2;
}

