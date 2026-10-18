/* speed.exe 00501680 FUN_00501680; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_00501680(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0x80);
    if ((uVar2 != 0) && (*(char *)(iVar1 + 0x1b) != 0)) {
      if (param_2 == 0) {
        return uVar2;
      }
      if ((uVar2 <= param_2) && (param_2 < (*(char *)(iVar1 + 0x1b) * 5 + -5) * 0x10 + uVar2)) {
        return param_2 + 0x50;
      }
    }
  }
  return 0;
}

