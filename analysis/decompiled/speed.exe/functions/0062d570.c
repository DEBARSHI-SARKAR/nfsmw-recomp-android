/* speed.exe 0062d570 FUN_0062d570; analysis pseudocode, not buildable source.
 * calls 005257f0 FUN_005257f0
 * calls 00597cf0 FUN_00597cf0
 * calls 00569bb0 FUN_00569bb0
 * calls 00516e10 FUN_00516e10
 * calls 005705c0 FUN_005705c0
 * calls 00573020 FUN_00573020
 * calls 005258b0 FUN_005258b0
 * calls 00516b50 FUN_00516b50
 * calls 00621e80 FUN_00621e80
 * calls 004fb000 FUN_004fb000
 * calls 00516b90 FUN_00516b90
 */

undefined4 * __thiscall FUN_0062d570(undefined4 *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  bool bVar6;
  undefined4 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877c47;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a7b00;
  param_1[2] = param_2;
  iVar3 = FUN_00597cf0(param_2);
  if (iVar3 == 0x1c) {
    cVar1 = FUN_004fb000();
    pcVar5 = "WS_Loading.fng";
    if (cVar1 == '\0') {
      pcVar5 = "Loading.fng";
    }
  }
  else if (iVar3 == 0x1b) {
    cVar1 = FUN_004fb000();
    if (cVar1 == '\0') {
      pcVar5 = "Loading_Controller.fng";
    }
    else {
      pcVar5 = "WS_Loading_Controller.fng";
    }
  }
  else {
    pcVar5 = "Loading_Tips.fng";
    DAT_0091cf58 = 0;
    param_2 = iVar3;
  }
  FUN_005705c0(pcVar5);
  cVar1 = FUN_00516b90(PTR_s_loading_boot_fng_008f7ee8);
  if (cVar1 != '\0') {
    FUN_005258b0(1);
  }
  cVar1 = *(char *)(DAT_0091cf90 + 0xc);
  iVar3 = FUN_00516e10();
  *(undefined1 *)(iVar3 + 1) = 0;
  cVar2 = FUN_00516b50(pcVar5);
  if (cVar2 == '\0') {
    uVar7 = 0;
    uVar4 = FUN_00573020((int)cVar1,0);
    FUN_005257f0(pcVar5,param_2,uVar4,uVar7);
  }
  DAT_00988e1d = 0;
  cVar1 = FUN_00569bb0();
  if (cVar1 != '\0') {
    iVar3 = DAT_00920390 + 0x10;
    bVar6 = DAT_00920390 != 0;
    local_4 = CONCAT31(local_4._1_3_,1);
    DAT_00920390 = iVar3;
    if (bVar6) {
      FUN_00621e80(0x14035fb);
    }
  }
  ExceptionList = local_c;
  return param_1;
}

