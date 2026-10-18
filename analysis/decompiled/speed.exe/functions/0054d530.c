/* speed.exe 0054d530 FUN_0054d530; analysis pseudocode, not buildable source.
 * calls 00586ca0 FUN_00586ca0
 * calls 005926b0 FUN_005926b0
 * calls 00516af0 FUN_00516af0
 * calls 00525220 FUN_00525220
 * calls 00589870 FUN_00589870
 * calls 005252d0 FUN_005252d0
 * calls 005b8550 FUN_005b8550
 * calls 005411d0 FUN_005411d0
 * calls 005af1c0 FUN_005af1c0
 * calls 0056bc10 FUN_0056bc10
 * calls 00586290 FUN_00586290
 * calls 00586760 FUN_00586760
 * calls 00592170 FUN_00592170
 * calls 005899f0 FUN_005899f0
 */

undefined4 * __thiscall FUN_0054d530(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870643;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089e2dc;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  FUN_00592170(param_1[4],"ScrollBar","ScrollBar",1,0,0,1);
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x3c] = 0;
  FUN_00525220(param_1[4],0xb2980bb0,0x3e10eab2);
  FUN_005411d0();
  FUN_005252d0(param_1[4],0x42aa5788,&DAT_008941f8,&DAT_0091c39c);
  iVar1 = FUN_00586ca0(param_1[0x16]);
  uVar3 = param_1[4];
  uVar2 = FUN_0056bc10(*(undefined4 *)(&DAT_008f3320 + iVar1 * 4));
  FUN_005252d0(uVar3,0xb2980baf,uVar2);
  if (param_1[0x18] != 0) {
    FUN_00586760(0x249db7b7);
  }
  FUN_005926b0(1);
  FUN_00589870(7,7,iVar1,0xffffffff);
  FUN_005899f0(1,1);
  FUN_005899f0(2,1);
  iVar1 = param_1[4];
  param_1[0x37] = 0xc407210;
  uVar3 = FUN_005af1c0("UI_PC_BACK");
  if ((((iVar1 != 0) && (iVar1 = FUN_00516af0(iVar1), iVar1 != 0)) &&
      (iVar1 = FUN_005b8550(uVar3), iVar1 != 0)) && (*(int *)(iVar1 + 0x18) == 1)) {
    param_1[0x3b] = iVar1;
    ExceptionList = local_c;
    return param_1;
  }
  param_1[0x3b] = 0;
  ExceptionList = local_c;
  return param_1;
}

