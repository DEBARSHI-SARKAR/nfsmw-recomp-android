/* speed.exe 00642140 FUN_00642140; analysis pseudocode, not buildable source.
 * calls 005257f0 FUN_005257f0
 * calls 0040e180 FUN_0040e180
 * calls 0056a440 FUN_0056a440
 * calls 005425d0 FUN_005425d0
 * calls 0041ace0 FUN_0041ace0
 * calls 00542670 FUN_00542670
 * calls 00573020 FUN_00573020
 * calls 005d59f0 FUN_005d59f0
 * calls 006e8df0 FUN_006e8df0
 * calls 00516b90 FUN_00516b90
 */

undefined4 * __thiscall FUN_00642140(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879998;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  bVar1 = false;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a7dd4;
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 3) = (undefined1)param_3;
  cVar2 = FUN_00542670(0,1,0);
  if ((cVar2 != '\0') || (*(char *)(param_1 + 3) == '\0')) {
    FUN_0041ace0();
    iVar3 = param_1[2];
    if (iVar3 == 0) {
      pcVar8 = "PostRace_Results.fng";
    }
    else {
      if (iVar3 != 1) {
        ExceptionList = local_c;
        return param_1;
      }
      pcVar8 = "PostRace_Pursuit.fng";
    }
    if (iVar3 == 1) {
      if (DAT_0092d884 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)*DAT_0092d87c;
      }
      iVar3 = (**(code **)(*piVar4 + 4))();
      if ((iVar3 != 0) && (piVar4 = (int *)FUN_005d59f0(&LAB_004040e0), piVar4 != (int *)0x0)) {
        FUN_0040e180(&param_3);
        piVar4 = (int *)(**(code **)(*piVar4 + 0xac))();
        if (piVar4 != (int *)0x0) {
          uVar5 = (**(code **)(*piVar4 + 0xa0))();
          FUN_0056a440(uVar5,param_3,0xffffffff);
        }
      }
    }
    uVar6 = FUN_00573020((int)DAT_0091cf90[0xc]);
    if (((DAT_0091cf90[300] & 4U) != 0) && (*DAT_0091cf90 == '\x02')) {
      bVar1 = true;
    }
    iVar3 = FUN_006e8df0();
    if (iVar3 == 1 || bVar1) {
      uVar7 = FUN_00573020((int)DAT_0091cf90[0xd]);
      uVar6 = uVar6 | uVar7;
    }
    cVar2 = FUN_00516b90("ControllerUnplugged.fng");
    if (cVar2 != '\0') {
      FUN_005425d0();
    }
    FUN_005257f0(pcVar8,0,uVar6,0);
  }
  ExceptionList = local_c;
  return param_1;
}

