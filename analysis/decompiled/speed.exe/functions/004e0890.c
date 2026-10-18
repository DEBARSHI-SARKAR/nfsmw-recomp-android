/* speed.exe 004e0890 FUN_004e0890; analysis pseudocode, not buildable source.
 * calls 006ff2d0 FUN_006ff2d0
 * calls 0081bab9 FUN_0081bab9
 * calls 004bac20 FUN_004bac20
 * calls 004babd0 FUN_004babd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004e0890(int param_1)

{
  char cVar1;
  int *piVar2;
  
  if ((*(char *)(param_1 + 0x28) == '\0') || (DAT_00914340 == '\0')) {
    if ((DAT_00914341 == '\0') || (DAT_00914342 == '\0')) {
      if (*(int *)(param_1 + 0x30) != 0) {
        FUN_006ff2d0(0);
        if (DAT_008efd7c == 0) {
          DAT_008efd7c = FUN_004bac20();
        }
        _DAT_008efd78 = FUN_004babd0();
        (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 0x2c),_DAT_008efd78);
      }
    }
    else {
      piVar2 = (int *)FUN_006ff2d0(0);
      cVar1 = (**(code **)(*piVar2 + 0x44))(7);
      if (cVar1 != '\0') {
        DAT_00914341 = 0;
        DAT_00914342 = 0;
        return;
      }
    }
  }
  else {
    piVar2 = (int *)FUN_006ff2d0(0);
    cVar1 = (**(code **)(*piVar2 + 0x44))(2);
    FUN_006ff2d0(0);
    if (DAT_008efd7c == 0) {
      FUN_0081bab9();
      DAT_008efd7c = FUN_004bac20();
    }
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x28) = 0;
      DAT_00914340 = 0;
      *(undefined1 *)(param_1 + 0x29) = 0;
      return;
    }
  }
  return;
}

