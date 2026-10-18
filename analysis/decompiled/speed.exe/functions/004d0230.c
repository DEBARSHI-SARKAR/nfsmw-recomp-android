/* speed.exe 004d0230 FUN_004d0230; analysis pseudocode, not buildable source.
 * calls 004cfac0 FUN_004cfac0
 * calls 004ca2e0 FUN_004ca2e0
 * calls 004cffa0 FUN_004cffa0
 */

void __fastcall FUN_004d0230(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xfc) = 0;
  if (*(int *)(param_1 + 0x9c) < *(int *)(param_1 + 0xa0) + -1) {
    do {
      iVar1 = *(int *)(param_1 + 0x9c) + 1;
      *(int *)(param_1 + 0x9c) = iVar1;
      *(undefined4 **)(param_1 + 0xfc) = &DAT_00912858 + iVar1 * 0x1a;
      iVar1 = FUN_004cffa0();
      if (-1 < iVar1) {
        return;
      }
      iVar1 = *(int *)(param_1 + 0xfc);
      FUN_004ca2e0(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
                   *(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14));
      FUN_004cfac0(*(undefined4 *)(param_1 + 0x9c));
      *(undefined4 *)(param_1 + 0xfc) = 0;
    } while (*(int *)(param_1 + 0x9c) < *(int *)(param_1 + 0xa0) + -1);
  }
  return;
}

