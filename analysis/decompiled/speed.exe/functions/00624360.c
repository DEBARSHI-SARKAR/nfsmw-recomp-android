/* speed.exe 00624360 FUN_00624360; analysis pseudocode, not buildable source.
 * calls 00573020 FUN_00573020
 * calls 00542670 FUN_00542670
 * calls 005257f0 FUN_005257f0
 */

undefined4 * __thiscall FUN_00624360(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008772f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a7268;
  param_1[2] = param_2;
  if (param_2 != 2) {
    cVar1 = FUN_00542670(0,1,0);
    if (cVar1 == '\0') {
      ExceptionList = local_c;
      return param_1;
    }
    if (DAT_0091d3d8 != '\0') {
      ExceptionList = local_c;
      return param_1;
    }
  }
  DAT_0091ca3c = (uint)*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0);
  uVar2 = FUN_00573020((int)*(char *)(DAT_0091cf90 + 0xc));
  iVar4 = param_1[2];
  if (iVar4 < 1) {
    iVar4 = 1;
    pcVar3 = "InGameReputationOverview.fng";
  }
  else {
    pcVar3 = "InGameRivalChallenge.fng";
  }
  FUN_005257f0(pcVar3,iVar4,uVar2,0);
  ExceptionList = local_c;
  return param_1;
}

