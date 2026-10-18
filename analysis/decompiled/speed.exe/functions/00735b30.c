/* speed.exe 00735b30 FUN_00735b30; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_00735b30(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 8);
  while ((*piVar2 == 0 || (*(char *)(*piVar2 + 0x1154) == '\0'))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    if (3 < iVar1) {
      return 0;
    }
  }
  return *(undefined4 *)(param_1 + 8 + iVar1 * 4);
}

