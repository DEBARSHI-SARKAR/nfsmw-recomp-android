/* speed.exe 0055f6e0 FUN_0055f6e0; analysis pseudocode, not buildable source.
 * calls 0078c730 FUN_0078c730
 * calls 005926b0 FUN_005926b0
 * calls 00592170 FUN_00592170
 * calls 00573140 FUN_00573140
 * calls 005577d0 FUN_005577d0
 * calls 00586290 FUN_00586290
 * calls 005252d0 FUN_005252d0
 */

undefined4 * __thiscall FUN_0055f6e0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870f83;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089e924;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  FUN_00592170(param_1[4],0,0,1,1,0,0);
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((int)param_1 + 0xf5) = 0;
  *(undefined1 *)((int)param_1 + 0xf6) = 0;
  *(undefined1 *)((int)param_1 + 0xf7) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)((int)param_1 + 0xf9) = 0;
  *(undefined1 *)((int)param_1 + 0xfa) = 0;
  iVar2 = FUN_0078c730();
  param_1[0x3c] = *(undefined4 *)(iVar2 + 0xf8);
  FUN_005577d0();
  uVar1 = param_1[4];
  uVar3 = FUN_00573140("OPTION_NAME_1",&DAT_008941f8,&DAT_0091c39c);
  FUN_005252d0(uVar1,uVar3);
  FUN_005926b0(1);
  *(undefined1 *)(param_1 + 0x38) = 1;
  ExceptionList = local_c;
  return param_1;
}

