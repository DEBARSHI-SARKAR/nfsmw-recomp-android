/* speed.exe 008645d0 FUN_008645d0; analysis pseudocode, not buildable source.
 * calls 00863cc0 FUN_00863cc0
 * calls 00863260 FUN_00863260
 * calls 00863d90 FUN_00863d90
 * calls 00864210 FUN_00864210
 * calls 00863b20 FUN_00863b20
 */

void FUN_008645d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x238) == 1) {
    iVar1 = FUN_00863260();
    if (iVar1 != 0) {
      uVar2 = FUN_00863cc0(iVar1);
      if (*(int *)(param_1 + 0xdc) == 0) {
        iVar1 = FUN_00863d90(param_1);
        *(uint *)(param_1 + 0x238) = 3 - (uint)(iVar1 != 0);
      }
      else if ((*(int *)(param_1 + 0xdc) == 1) && (iVar1 = FUN_00864210(param_1,uVar2), -1 < iVar1))
      {
        FUN_00863b20();
      }
      else {
        *(undefined4 *)(param_1 + 0x238) = 3;
      }
    }
    if ((*(int *)(param_1 + 0x1fc) == 400) || (*(int *)(param_1 + 500) == 8)) {
      *(undefined4 *)(param_1 + 0x238) = 3;
    }
  }
  if ((*(int *)(param_1 + 0x238) == 4) && (iVar1 = FUN_00863260(), iVar1 != 0)) {
    *(uint *)(param_1 + 0x238) = (*(int *)(param_1 + 0x1fc) != 200) + 2;
  }
  return;
}

