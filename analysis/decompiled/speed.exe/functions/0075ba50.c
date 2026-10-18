/* speed.exe 0075ba50 FUN_0075ba50; analysis pseudocode, not buildable source.
 * calls 00464050 FUN_00464050
 * calls 00759f00 FUN_00759f00
 * calls 00749520 FUN_00749520
 */

void __thiscall FUN_0075ba50(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_2 + 8) + 0x3c) != 0) {
    if ((*(int *)(param_1 + 8) == 2) && (iVar1 = FUN_00464050(DAT_00904a00), iVar1 < 0x80000)) {
      iVar1 = FUN_00464050(DAT_00904a00);
      while ((iVar1 < 0x80000 && (iVar1 = FUN_00759f00(0), iVar1 != 0))) {
        iVar1 = FUN_00464050(DAT_00904a00);
      }
    }
    FUN_00749520(*(undefined4 *)(param_2 + 8));
  }
  *(undefined1 *)(param_2 + 0xe) = 1;
  return;
}

