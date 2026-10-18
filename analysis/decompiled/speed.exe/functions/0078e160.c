/* speed.exe 0078e160 FUN_0078e160; analysis pseudocode, not buildable source.
 * calls 00524920 FUN_00524920
 * calls 005af1c0 FUN_005af1c0
 * calls 00514c70 FUN_00514c70
 * calls 0056bc10 FUN_0056bc10
 * calls 00575920 FUN_00575920
 * calls 0057e8c0 FUN_0057e8c0
 * calls 005a5fe0 FUN_005a5fe0
 * calls 0078d6d0 FUN_0078d6d0
 * calls 005758b0 FUN_005758b0
 * calls 00586290 FUN_00586290
 * calls 005750d0 FUN_005750d0
 * calls 00585b50 FUN_00585b50
 * calls 005251e0 FUN_005251e0
 * calls 00524850 FUN_00524850
 * calls 00525220 FUN_00525220
 */

undefined4 * __thiscall FUN_0078e160(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008825b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *(undefined1 *)(param_1 + 0x11) = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008b69e0;
  FUN_005750d0(param_1[4],"Scrollbar",1,0,0);
  FUN_005758b0();
  local_4 = CONCAT31(local_4._1_3_,1);
  param_2 = FUN_0056bc10(0x417b2601);
  FUN_0078d6d0(1,&param_2,0);
  FUN_00525220(param_1[4],0x42adb44c,0x18d812be);
  uVar3 = param_1[4];
  uVar1 = FUN_005af1c0("HELP GROUP",0x16a259,1);
  FUN_00524920(uVar3,uVar1);
  FUN_00524920(param_1[4],0x3df39a82,0x16a259,1);
  FUN_00524920(param_1[4],0xfcd5b255,0x16a259,1);
  uVar3 = param_1[4];
  uVar1 = FUN_005af1c0("RankMode_Type");
  iVar2 = FUN_005251e0(uVar3,uVar1);
  FUN_0057e8c0(&DAT_00890978);
  *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
  uVar3 = FUN_00524850(param_1[4],0xc0a32823);
  FUN_00514c70(uVar3);
  uVar3 = param_1[4];
  uVar1 = FUN_005af1c0("Scroll_Text_1");
  iVar2 = FUN_005251e0(uVar3,uVar1);
  uVar3 = FUN_00585b50(*(undefined4 *)(iVar2 + 0x24));
  FUN_00575920(param_1,*(undefined4 *)(iVar2 + 0x74),0xb,"Scroll_Text_%d",uVar3);
  param_1[0x2b] = param_1 + 0x12;
  FUN_005a5fe0(0x27b12668);
  ExceptionList = local_c;
  return param_1;
}

