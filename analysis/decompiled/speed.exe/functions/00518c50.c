/* speed.exe 00518c50 FUN_00518c50; analysis pseudocode, not buildable source.
 * calls 005b5b70 FUN_005b5b70
 * calls 005c4df0 FUN_005c4df0
 * calls 00516be0 FUN_00516be0
 * calls 005b7780 FUN_005b7780
 * calls 00591d90 FUN_00591d90
 * calls 00572070 FUN_00572070
 * calls 005af1c0 FUN_005af1c0
 * calls 005fbd20 FUN_005fbd20
 * calls 005edfc0 FUN_005edfc0
 */

void __fastcall FUN_00518c50(int param_1)

{
  char cVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  
  if (*(char *)(param_1 + 0x2d) == '\0') {
    *(undefined1 *)(param_1 + 0x2d) = 1;
    pcVar7 = "Autosave_Overlay.fng";
    if (DAT_0091d218 < 1) {
      iVar4 = FUN_005b5b70("Autosave_Overlay.fng");
    }
    else {
      FUN_00572070();
      iVar4 = FUN_00591d90(pcVar7);
    }
    if (iVar4 == 0) {
      FUN_005c4df0("Autosave_Overlay.fng",0x68,0);
    }
    uVar5 = FUN_005af1c0(&DAT_0089b758);
    FUN_00516be0(uVar5,"Autosave_Overlay.fng",0xfffffffc,0xff);
    cVar1 = *(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x34);
    if (((DAT_0091e000 == 0) || (*(int *)(DAT_0091e000 + 0x1968) == 0)) ||
       (cVar3 = FUN_005fbd20(), cVar3 == '\0')) {
      pcVar7 = "SMS_MailBoxes.fng";
      if (DAT_0091d218 < 1) {
        iVar4 = FUN_005b5b70("SMS_MailBoxes.fng");
      }
      else {
        FUN_00572070();
        iVar4 = FUN_00591d90(pcVar7);
      }
      if ((iVar4 == 0) && (cVar3 = FUN_005edfc0(), cVar3 == '\0')) {
        pcVar7 = "RIGHT_WIDE";
        if (cVar1 == '\0') {
          pcVar7 = "RIGHT_NORM";
        }
        uVar5 = FUN_005af1c0(pcVar7);
      }
      else {
        uVar5 = FUN_005af1c0("SMS_MAILBOX");
        piVar2 = DAT_0091cadc;
        uVar6 = FUN_005af1c0("HIDE_INCOMING");
        if (*piVar2 != -0xd8) {
          for (iVar4 = *(int *)(*piVar2 + 0xe0); iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
            FUN_005b7780(uVar6,0,iVar4,0xfffffffc,0);
          }
        }
      }
    }
    else {
      pcVar7 = "LEFT_WIDE";
      if (cVar1 == '\0') {
        pcVar7 = "LEFT_NORM";
      }
      uVar5 = FUN_005af1c0(pcVar7);
    }
    FUN_00516be0(uVar5,"Autosave_Overlay.fng",0xfffffffc,0xff);
  }
  return;
}

