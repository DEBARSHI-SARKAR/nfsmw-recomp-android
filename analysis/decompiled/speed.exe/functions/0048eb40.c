/* speed.exe 0048eb40 FUN_0048eb40; analysis pseudocode, not buildable source.
 */

int * __thiscall FUN_0048eb40(int *param_1,ushort param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1 + -1;
  if (-1 < iVar2) {
    iVar3 = 0;
    do {
      iVar1 = iVar2 + iVar3 >> 1;
      if (*(ushort *)(param_1 + iVar1 * 2 + 1) < param_2) {
        iVar3 = iVar1 + 1;
      }
      else {
        if (*(ushort *)(param_1 + iVar1 * 2 + 1) <= param_2) {
          return param_1 + iVar1 * 2 + 1;
        }
        iVar2 = iVar1 + -1;
      }
    } while (iVar3 <= iVar2);
  }
  return (int *)0x0;
}

