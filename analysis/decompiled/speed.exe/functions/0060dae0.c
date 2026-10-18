/* speed.exe 0060dae0 FUN_0060dae0; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 * calls 005dbed0 FUN_005dbed0
 * calls 005dbef0 FUN_005dbef0
 */

int FUN_0060dae0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_005dbef0();
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_005dbed0(iVar3);
      if ((*piVar2 == 0) ||
         (iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*piVar2), iVar1 == 0)) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 4);
      }
      if (iVar1 == param_1) {
        return iVar3 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_005dbef0();
    } while (iVar3 < iVar1);
  }
  return -1;
}

