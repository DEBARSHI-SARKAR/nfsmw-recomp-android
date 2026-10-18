/* speed.exe 005e8210 FUN_005e8210; analysis pseudocode, not buildable source.
 * calls 00452440 FUN_00452440
 * calls 0045a490 FUN_0045a490
 * calls 0045a470 FUN_0045a470
 * calls 005d9460 FUN_005d9460
 * calls 005e41a0 FUN_005e41a0
 * calls 004546a0 FUN_004546a0
 * calls 00455c40 FUN_00455c40
 * calls 0045a700 FUN_0045a700
 */

undefined4 * __thiscall FUN_005e8210(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087543b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d9460(0,0,0);
  local_4 = 0;
  *param_1 = &PTR_FUN_008a39a8;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar2 = FUN_00455c40(0x5cea9d46,"GRuntimeInstance",1);
  uVar3 = FUN_00452440();
  FUN_0045a490(0x5cea9d46,uVar2,uVar3);
  FUN_0045a700(param_2);
  uVar2 = FUN_004546a0();
  FUN_0045a470(uVar2);
  if ((&DAT_0091dfe4)[param_3] == 0) {
    param_1[9] = param_1;
    param_1[8] = param_1;
    (&DAT_0091dfe4)[param_3] = param_1;
  }
  else {
    param_1[9] = (&DAT_0091dfe4)[param_3];
    iVar1 = *(int *)((&DAT_0091dfe4)[param_3] + 0x20);
    param_1[8] = iVar1;
    *(undefined4 **)(iVar1 + 0x24) = param_1;
    *(undefined4 **)(param_1[9] + 0x20) = param_1;
  }
  FUN_005e41a0(param_1);
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 1;
  ExceptionList = local_c;
  return param_1;
}

