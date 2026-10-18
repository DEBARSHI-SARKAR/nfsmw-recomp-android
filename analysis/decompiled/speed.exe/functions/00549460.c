/* speed.exe 00549460 FUN_00549460; analysis pseudocode, not buildable source.
 * calls 00542670 FUN_00542670
 * calls 0078d1d0 FUN_0078d1d0
 * calls 00627400 FUN_00627400
 * calls 00591e70 FUN_00591e70
 * calls 00512520 FUN_00512520
 * calls 005989b0 FUN_005989b0
 * calls 00623a90 FUN_00623a90
 * calls 00794790 FUN_00794790
 * calls 0078b350 FUN_0078b350
 * calls 00516b50 FUN_00516b50
 * calls 00572070 FUN_00572070
 * calls 00569bb0 FUN_00569bb0
 */

undefined4 __thiscall FUN_00549460(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008701df;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00794790(param_1);
  cVar1 = FUN_0078b350();
  if (((cVar1 == '\x01') || (DAT_0091ca60 != 0)) || (DAT_0091ca65 == '\x01')) {
    ExceptionList = local_c;
    return 1;
  }
  *(undefined4 *)(DAT_0091cf90 + 0x180) = 0;
  cVar1 = FUN_00516b50("ControllerUnplugged.fng");
  if (((((cVar1 == '\0') && (DAT_00925e90 != 4)) &&
       ((DAT_00925e90 != 5 && ((DAT_00925e90 != 1 && (cVar1 = FUN_00569bb0(), cVar1 == '\0')))))) &&
      (cVar1 = FUN_00516b50("Loading.fng"), cVar1 == '\0')) &&
     (cVar1 = FUN_00516b50("WS_Loading.fng"), cVar1 == '\0')) {
    if (((DAT_00925e90 == 6) && (cVar1 = FUN_00516b50("Pause_Main.fng"), cVar1 == '\0')) &&
       (cVar1 = FUN_00516b50("PostRace_Results.fng"), cVar1 == '\0')) {
      DAT_0091ca58 = 1;
      if ((DAT_0091ca64 == '\0') && (cVar1 = FUN_00542670(0,1,0), cVar1 == '\x01')) {
        iVar2 = FUN_00627400(0x14);
        local_4 = 0;
        if (iVar2 != 0) {
          FUN_00623a90(0,0,0);
        }
        DAT_0091ca64 = '\x01';
      }
      ExceptionList = local_c;
      return 0;
    }
    if (DAT_0091d268 != 0) {
      puVar8 = PTR_s_UI_OL_WebOffer2_fng_008f3260;
      FUN_00572070(PTR_s_UI_OL_WebOffer2_fng_008f3260);
      iVar2 = FUN_00591e70(puVar8);
      if (iVar2 != 0) {
        FUN_0078d1d0();
      }
      iVar2 = DAT_0091ca5c;
      if ((DAT_0091ca5c == 0) && (iVar2 = param_2, param_2 == 0)) {
        iVar2 = FUN_00512520();
      }
      DAT_0091ca5c = iVar2;
      DAT_0091ca58 = 0;
      DAT_0091ca65 = 1;
      if (DAT_00925e90 == 6) {
        uVar3 = *(undefined4 *)(DAT_0091d268 + 0x10);
        uVar7 = 0x12b277aa;
        uVar6 = 0x12b277aa;
        uVar5 = 1;
        pcVar4 = "InGameDialog.fng";
      }
      else {
        uVar3 = *(undefined4 *)(DAT_0091d268 + 0x10);
        uVar7 = 0xa94d69f2;
        uVar6 = 0xa94d69f2;
        uVar5 = 4;
        pcVar4 = "";
      }
      DAT_0091ca60 = FUN_005989b0(uVar3,pcVar4,uVar5,0x417b2601,uVar6,uVar7,DAT_0091ca5c);
      ExceptionList = local_c;
      return 1;
    }
  }
  DAT_0091ca58 = 1;
  ExceptionList = local_c;
  return 0;
}

