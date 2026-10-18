/* speed.exe 00641fe0 FUN_00641fe0; analysis pseudocode, not buildable source.
 * calls 005257f0 FUN_005257f0
 * calls 0056a440 FUN_0056a440
 * calls 0041ace0 FUN_0041ace0
 * calls 005d59f0 FUN_005d59f0
 */

undefined4 * __thiscall FUN_00641fe0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879958;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[1] = 0x10;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a7dcc;
  param_1[2] = param_2;
  FUN_0041ace0();
  if (DAT_0092d884 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*DAT_0092d87c;
  }
  iVar1 = (**(code **)(*piVar2 + 4))();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_005d59f0(&LAB_004040e0), piVar2 != (int *)0x0)) {
    uVar3 = FUN_005d59f0(&LAB_004037e0);
    piVar2 = (int *)(**(code **)(*piVar2 + 0xac))();
    if (piVar2 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar2 + 0xa0))();
      FUN_0056a440(uVar4,uVar3,param_1[2]);
    }
  }
  FUN_005257f0("PostRace_MilestoneRewards.fng",0,0,0);
  ExceptionList = pvStack_c;
  return param_1;
}

