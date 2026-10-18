/* speed.exe 00831cd3 FUN_00831cd3; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00831cd3(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while (((iVar1 = (&DAT_009c2a60)[iVar2 * 2], iVar1 == 0 ||
          (*(char *)(iVar1 + 9) != *(char *)(param_1 + 2))) ||
         (*(char *)(iVar1 + 8) != *(char *)(param_1 + 3)))) {
    iVar2 = iVar2 + 1;
    if (7 < iVar2) {
      return 0;
    }
  }
  *param_2 = &DAT_009c2a60 + iVar2 * 2;
  return 1;
}

