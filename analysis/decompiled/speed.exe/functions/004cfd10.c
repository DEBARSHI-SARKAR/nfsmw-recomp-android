/* speed.exe 004cfd10 FUN_004cfd10; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 0045a430 FUN_0045a430
 * calls 00455fd0 FUN_00455fd0
 * calls 004cf520 FUN_004cf520
 * calls 004b0c50 FUN_004b0c50
 * calls 0045d380 FUN_0045d380
 * calls 00452380 FUN_00452380
 * calls 00465fd0 FUN_00465fd0
 * calls 00454810 FUN_00454810
 */

undefined4 * __thiscall FUN_004cfd10(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086c798;
  local_c = ExceptionList;
  uVar7 = 0;
  uVar6 = 0;
  ExceptionList = &local_c;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = param_2;
  uVar2 = FUN_00455fd0(0x3473edcd,param_2,0,0);
  FUN_00452380(uVar2,uVar6,uVar7);
  local_4 = 0;
  puVar3 = (undefined4 *)FUN_00454810(0x1553cd23,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_006269b0(4);
  }
  iVar4 = FUN_0045d380(*puVar3);
  param_1[1] = *(undefined4 *)(iVar4 + 8);
  puVar5 = (undefined2 *)FUN_00454810(0xad8c27f5,0);
  if (puVar5 == (undefined2 *)0x0) {
    puVar5 = (undefined2 *)FUN_006269b0(4);
  }
  uVar1 = *puVar5;
  *(undefined2 *)(param_1 + 4) = uVar1;
  *(undefined2 *)((int)param_1 + 0x12) = uVar1;
  iVar4 = FUN_00465fd0(1,0);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_004b0c50(param_1[1]);
  }
  param_1[2] = iVar4;
  *(undefined4 *)(iVar4 + 0x10) = 0;
  *(undefined4 *)(iVar4 + 8) = 0;
  *(undefined4 *)(iVar4 + 0xc) = 0;
  FUN_004cf520(iVar4 + 4);
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return param_1;
}

