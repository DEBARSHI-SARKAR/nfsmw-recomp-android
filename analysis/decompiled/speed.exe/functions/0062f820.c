/* speed.exe 0062f820 FUN_0062f820; analysis pseudocode, not buildable source.
 * calls 00460dd0 FUN_00460dd0
 * calls 0062c9a0 FUN_0062c9a0
 * calls 0057e470 FUN_0057e470
 * calls 00629a90 FUN_00629a90
 * calls 0057e5b0 FUN_0057e5b0
 */

undefined4 * __thiscall FUN_0062f820(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00878067;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a7b28;
  uVar1 = FUN_00629a90(param_1,param_2);
  param_1[2] = uVar1;
  iVar2 = DAT_00920390 + 0x10;
  bVar3 = DAT_00920390 != 0;
  local_4._0_1_ = 1;
  DAT_00920390 = iVar2;
  if (bVar3) {
    FUN_0062c9a0(0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  iVar2 = FUN_00460dd0("drag_tutorial",param_1[2]);
  if (iVar2 != 0) {
    iVar2 = FUN_00460dd0("speedtrap_tutorial",param_1[2]);
    if (iVar2 != 0) {
      iVar2 = FUN_00460dd0("tollbooth_tutorial",param_1[2]);
      if (iVar2 != 0) {
        iVar2 = FUN_00460dd0("pursuit_tutorial",param_1[2]);
        if (iVar2 != 0) {
          iVar2 = FUN_00460dd0("bounty_tutorial",param_1[2]);
          if (iVar2 != 0) {
            FUN_0057e470(param_1[2]);
            ExceptionList = local_c;
            return param_1;
          }
        }
      }
    }
  }
  FUN_0057e5b0(param_1[2],0);
  ExceptionList = local_c;
  return param_1;
}

