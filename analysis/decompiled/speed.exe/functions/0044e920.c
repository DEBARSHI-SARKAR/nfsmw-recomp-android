/* speed.exe 0044e920 FUN_0044e920; analysis pseudocode, not buildable source.
 * calls 0044de20 FUN_0044de20
 * calls 00652b10 thunk_FUN_007c7250
 * calls 00491360 FUN_00491360
 * calls 004493f0 FUN_004493f0
 * calls 00463ca0 FUN_00463ca0
 */

void FUN_0044e920(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &DAT_0090dba0;
  do {
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x20) = 0;
      if (*(int *)(iVar1 + 0x24) != 0) {
        thunk_FUN_007c7250(*(int *)(iVar1 + 0x24));
        *(undefined4 *)(iVar1 + 0x24) = 0;
      }
      *(undefined4 *)(iVar1 + 0x28) = 0;
      if (*(int *)(iVar1 + 0x2c) != 0) {
        (*(code *)PTR_FUN_008ee4d4)(*(int *)(iVar1 + 0x2c),0x40);
        *(undefined4 *)(iVar1 + 0x2c) = 0;
      }
      *(undefined4 *)(iVar1 + 0x30) = 0;
      FUN_004493f0();
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        FUN_0044de20();
        FUN_00463ca0(DAT_0090d9dc,iVar1);
      }
      *piVar2 = 0;
    }
    piVar2[2] = 0;
    piVar2[3] = -1;
    piVar2 = piVar2 + 4;
  } while ((int)piVar2 < 0x90dca0);
  return;
}

