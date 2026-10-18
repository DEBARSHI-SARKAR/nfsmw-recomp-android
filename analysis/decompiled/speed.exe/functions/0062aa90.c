/* speed.exe 0062aa90 FUN_0062aa90; analysis pseudocode, not buildable source.
 * calls 005a62d0 FUN_005a62d0
 * calls 00455fd0 FUN_00455fd0
 * calls 005fbe00 FUN_005fbe00
 * calls 00577680 FUN_00577680
 * calls 00454810 FUN_00454810
 * calls 00452380 FUN_00452380
 * calls 0045a430 FUN_0045a430
 */

undefined4 * __thiscall FUN_0062aa90(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_20 [8];
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00877840;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  uVar6 = 0;
  uVar5 = 0;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a7a9c;
  param_1[2] = param_2;
  uVar3 = FUN_00455fd0(0x5cea9d46,param_2,0,0);
  FUN_00452380(uVar3,uVar5,uVar6);
  if (local_18 == (undefined4 *)0x0) {
    local_18 = &DAT_009205e0;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar4 = (int *)FUN_00454810(0xe0113fe,0);
  if (piVar4 == (int *)0x0) {
    piVar4 = &DAT_009205e0;
  }
  iVar1 = *piVar4;
  piVar4 = (int *)FUN_00454810(0x6a077d5,0);
  if (piVar4 == (int *)0x0) {
    piVar4 = &DAT_009205e0;
  }
  if (iVar1 != 0) {
    FUN_00577680(local_20);
    goto LAB_0062ab81;
  }
  if (*piVar4 == 0) goto LAB_0062ab81;
  if (DAT_0091e000 == 0) {
LAB_0062ab68:
    param_2 = 1;
  }
  else {
    cVar2 = FUN_005fbe00();
    param_2 = 0;
    if (cVar2 == '\0') goto LAB_0062ab68;
  }
  FUN_005a62d0(local_20,param_2);
LAB_0062ab81:
  local_4 = local_4 & 0xffffff00;
  FUN_0045a430();
  ExceptionList = local_c;
  return param_1;
}

