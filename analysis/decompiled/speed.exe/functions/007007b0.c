/* speed.exe 007007b0 FUN_007007b0; analysis pseudocode, not buildable source.
 * calls 004b1d60 FUN_004b1d60
 */

undefined4 __fastcall FUN_007007b0(int param_1)

{
  int iVar1;
  
  if ((((DAT_00992230 != 0) && (*(int *)(DAT_00992230 + 0x88) != 0)) &&
      (*(int *)(*(int *)(DAT_00992230 + 0x88) + 8) == 0x9a)) &&
     ((DAT_00992230 != 0 && (*(int *)(DAT_00992230 + 0x88) != 0)))) {
    iVar1 = FUN_004b1d60(0);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0x10)) {
      *(undefined4 *)(param_1 + 0x10) = 1;
      *(undefined1 *)(param_1 + 0x19) = 1;
    }
  }
  if (*(char *)(param_1 + 0x19) != '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return 1;
}

