/* speed.exe 005ea190 FUN_005ea190; analysis pseudocode, not buildable source.
 * calls 005e5a90 FUN_005e5a90
 * calls 00503c50 FUN_00503c50
 * calls 005094c0 FUN_005094c0
 * calls 00463ca0 FUN_00463ca0
 * calls 00503c30 FUN_00503c30
 */

void __fastcall FUN_005ea190(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 8) + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00503c50();
  }
  iVar2 = *(int *)(param_1 + 0xc);
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xf7;
  if (iVar2 != 0) {
    FUN_005094c0();
    FUN_00463ca0(DAT_00916068,iVar2);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (((bVar1 >> 3 & 1) != 0) && ((*(byte *)(param_1 + 2) >> 2 & 1) != 0)) {
    FUN_005e5a90();
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 8) + 0x2b) = 1;
      *(undefined1 *)(*(int *)(param_1 + 8) + 0x28) = 1;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_00503c30();
    }
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 8;
  }
  return;
}

