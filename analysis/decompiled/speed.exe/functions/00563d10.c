/* speed.exe 00563d10 FUN_00563d10; analysis pseudocode, not buildable source.
 * calls 00660100 FUN_00660100
 * calls 0064c9a0 FUN_0064c9a0
 * calls 005edfc0 FUN_005edfc0
 * calls 00516b50 FUN_00516b50
 * calls 00560dc0 FUN_00560dc0
 * calls 00563cb0 FUN_00563cb0
 * calls 0064c9b0 FUN_0064c9b0
 * calls 00526a20 FUN_00526a20
 * calls 007f3cc5 FUN_007f3cc5
 * calls 00562ab0 FUN_00562ab0
 * calls 00660200 FUN_00660200
 */

void __thiscall FUN_00563d10(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x40) == 0) && (*(int *)(param_1 + 0x38) != 0)) {
    FUN_00563cb0();
  }
  if ((((*(char *)(param_1 + 0x1f) != '\0') && (*(char *)(param_1 + 0x2a) != '\0')) &&
      (DAT_0091e00c != 0)) && (cVar1 = FUN_005edfc0(), cVar1 == '\0')) {
    *(undefined1 *)(param_1 + 0x2a) = 0;
    *(undefined1 *)(param_1 + 0x1f) = 0;
    FUN_00562ab0(0);
  }
  iVar2 = FUN_0064c9b0();
  if (iVar2 == 0) {
    FUN_007f3cc5(param_2);
    iVar2 = FUN_0064c9a0();
    if (iVar2 != 0) {
      FUN_00660200(0,8,9);
    }
  }
  else {
    do {
      iVar2 = FUN_00660100(8,9);
      FUN_00560dc0(iVar2);
    } while (iVar2 != 0);
  }
  if ((DAT_0091cf90 != 0) && ((*(uint *)(DAT_0091cf90 + 300) >> 4 & 1) == 0)) {
    cVar1 = FUN_00516b50("MC_Main.fng");
    if ((cVar1 == '\0') &&
       ((cVar1 = FUN_00516b50("InGame_MC_Main.fng"), cVar1 == '\0' &&
        (cVar1 = FUN_00526a20(), cVar1 == '\0')))) {
      if ((*(char *)(param_1 + 0x2e) != '\0') &&
         (*(undefined1 *)(param_1 + 0x2e) = 0, DAT_0091cae0[1] == '\0')) {
        if (*(char *)(param_1 + 0x2f) == '\0') {
          DAT_0091cae0[1] = 1;
          *DAT_0091cae0 = 0;
          return;
        }
        *(undefined1 *)(param_1 + 0x2f) = 0;
        return;
      }
    }
    else if ((DAT_0091cae0[1] != '\0') || (DAT_00925e90 == 6)) {
      cVar1 = FUN_00516b50("InGamePhotoMaster.fng");
      if ((cVar1 != '\0') || (cVar1 = FUN_00516b50("PostRace_Pursuit.fng"), cVar1 != '\0')) {
        *(undefined1 *)(param_1 + 0x2f) = 1;
      }
      *(undefined1 *)(param_1 + 0x2e) = 1;
      DAT_0091cae0[1] = 0;
      *DAT_0091cae0 = 1;
    }
  }
  return;
}

