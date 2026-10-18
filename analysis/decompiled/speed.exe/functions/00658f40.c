/* speed.exe 00658f40 FUN_00658f40; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 00650350 FUN_00650350
 * calls 0064ac80 FUN_0064ac80
 * calls 00658dd0 FUN_00658dd0
 * calls 0064ac00 FUN_0064ac00
 * calls 00650310 FUN_00650310
 */

void __fastcall FUN_00658f40(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x30) == 0) && (*(int *)(param_1 + 0x2c) == 0)) {
    if (((*(byte *)(param_1 + 0x10) & 8) != 0) && (iVar1 = *(int *)(param_1 + 0x3c), iVar1 != 0)) {
      iVar2 = FUN_00650310(iVar1);
      if (iVar2 != 0) {
        iVar2 = *(int *)(iVar1 + 8);
        *(int *)(param_1 + 0x40) = iVar2;
        *(undefined4 *)(param_1 + 0x3c) = 0;
        if (iVar2 != 0) {
          FUN_0064ac00(0);
          FUN_00650350(iVar1,*(undefined4 *)(param_1 + 0x3c));
        }
        FUN_004655f0(iVar1);
      }
    }
    FUN_00658dd0((int *)(param_1 + 0x3c),(undefined4 *)(param_1 + 0x40),
                 *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x24));
    if ((*(byte *)(param_1 + 0x10) & 4) != 0) {
      if (*(int *)(param_1 + 0x3c) != 0) {
        FUN_0064ac80();
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  return;
}

