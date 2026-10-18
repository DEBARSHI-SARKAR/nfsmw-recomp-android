/* speed.exe 00571e00 FUN_00571e00; analysis pseudocode, not buildable source.
 */

undefined4 * FUN_00571e00(void)

{
  int *piVar1;
  int unaff_EBX;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_0091cfc8;
  while ((unaff_EBX != piVar1[-2] || ((*piVar1 != -1 && (*(int *)(DAT_0091cf90 + 300) != *piVar1))))
        ) {
    piVar1 = piVar1 + 3;
    iVar2 = iVar2 + 1;
    if (0x91d21f < (int)piVar1) {
      return (undefined4 *)0x0;
    }
  }
  return &DAT_0091cfc0 + iVar2 * 3;
}

