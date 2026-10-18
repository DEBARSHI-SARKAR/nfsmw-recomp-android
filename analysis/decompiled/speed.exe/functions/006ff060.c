/* speed.exe 006ff060 FUN_006ff060; analysis pseudocode, not buildable source.
 * calls 004ac100 thunk_FUN_004ac040
 * calls 006fdff0 FUN_006fdff0
 * calls 00832ce2 FUN_00832ce2
 * calls 008326a8 FUN_008326a8
 * calls 008326b0 FUN_008326b0
 * calls 006fd6b0 FUN_006fd6b0
 * calls 0083104c FUN_0083104c
 */

void FUN_006ff060(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_008f86f8 != 0) {
    if (DAT_00992234 == 1) {
      if (((DAT_008f8700 != 0) && (cVar1 = (**(code **)(*DAT_00992230 + 0x40))(), cVar1 != '\0')) &&
         (DAT_00992248 == 0)) {
        iVar2 = (**(code **)(*DAT_00992230 + 0x18))();
        DAT_00992238 = DAT_00992238 + iVar2;
        uVar3 = (**(code **)(*DAT_00992230 + 0x34))();
        FUN_0083104c(uVar3);
        FUN_006fd6b0();
        uVar3 = (**(code **)(*DAT_00992230 + 0x38))();
        uVar3 = (**(code **)(*DAT_00992230 + 0x3c))(uVar3);
        FUN_00832ce2(uVar3);
        DAT_00992248 = 1;
      }
      if (((DAT_008f8704 != 0) && (cVar1 = (**(code **)(*DAT_0099222c + 0x40))(), cVar1 != '\0')) &&
         (DAT_0099224c == 0)) {
        iVar2 = (**(code **)(*DAT_0099222c + 0x18))();
        DAT_00992238 = DAT_00992238 + iVar2;
        uVar3 = (**(code **)(*DAT_0099222c + 0x34))();
        FUN_0083104c(uVar3);
        FUN_006fdff0();
        uVar3 = (**(code **)(*DAT_0099222c + 0x38))();
        uVar3 = (**(code **)(*DAT_0099222c + 0x3c))(uVar3);
        FUN_00832ce2(uVar3);
        DAT_0099224c = 1;
      }
      if ((DAT_00992230 != (int *)0x0) && (DAT_00992248 == 0)) {
        return;
      }
      if ((DAT_0099222c != (int *)0x0) && (DAT_0099224c == 0)) {
        return;
      }
    }
    else if ((((DAT_00992234 != 2) && (DAT_00992234 == 3)) && (DAT_008f8704 != 0)) &&
            ((cVar1 = (**(code **)(*DAT_0099222c + 0x40))(), cVar1 != '\0' && (DAT_0099224c == 0))))
    {
      iVar2 = (**(code **)(*DAT_0099222c + 0x18))();
      DAT_00992238 = DAT_00992238 + iVar2;
      uVar3 = (**(code **)(*DAT_0099222c + 0x34))();
      FUN_0083104c(uVar3);
      FUN_006fdff0();
      uVar3 = (**(code **)(*DAT_0099222c + 0x38))();
      uVar3 = (**(code **)(*DAT_0099222c + 0x3c))(uVar3);
      FUN_00832ce2(uVar3);
      DAT_0099224c = 1;
    }
    uVar3 = FUN_008326a8(DAT_00992238);
    DAT_00992240 = thunk_FUN_004ac040(uVar3,"AUD:Speech Bank Ptrs",0);
    FUN_008326b0(DAT_00992238,DAT_00992240);
    if (DAT_00992234 == 1) {
      if (DAT_008f8700 != 0) {
        (**(code **)(*DAT_00992230 + 8))();
      }
      if (DAT_008f8704 != 0) {
        (**(code **)(*DAT_0099222c + 8))();
        DAT_0099223c = 1;
        return;
      }
    }
    else if ((DAT_00992234 == 3) && (DAT_008f8704 != 0)) {
      (**(code **)(*DAT_0099222c + 8))();
    }
    DAT_0099223c = 1;
  }
  return;
}

