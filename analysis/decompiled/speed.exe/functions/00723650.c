/* speed.exe 00723650 FUN_00723650; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_00723650(int *param_1,short param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1[1]) {
    iVar1 = *param_1;
    do {
      if (*(short *)(iVar1 + 8) == param_2) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x5c;
    } while (iVar2 < param_1[1]);
  }
  return 0;
}

