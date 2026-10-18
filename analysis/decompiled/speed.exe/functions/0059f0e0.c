/* speed.exe 0059f0e0 FUN_0059f0e0; analysis pseudocode, not buildable source.
 * calls 0058bbd0 FUN_0058bbd0
 * calls 005af1c0 FUN_005af1c0
 * calls 00515e20 FUN_00515e20
 * calls 00524850 FUN_00524850
 * calls 005d7930 FUN_005d7930
 * calls 00460c70 FUN_00460c70
 */

undefined4 * __thiscall FUN_0059f0e0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_3;
  puStack_8 = &LAB_008732b3;
  local_c = ExceptionList;
  puVar4 = param_1 + 2;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a1e80;
  *puVar4 = puVar4;
  param_1[3] = puVar4;
  param_1[4] = param_3;
  param_1[6] = 0x18;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  puVar4 = param_1 + 0xc;
  local_4 = 0;
  *puVar4 = &PTR_FUN_00890970;
  param_1[0xd] = param_2;
  FUN_005d7930(&LAB_00565740,puVar4);
  *puVar4 = &PTR_FUN_008a03d0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_008a237c;
  *puVar4 = &PTR_LAB_008a234c;
  param_1[0xe] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x8a] = 0x5a;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  uVar2 = FUN_005af1c0("LeaderBoardGroup");
  uVar2 = FUN_0058bbd0(uVar2);
  param_1[0x8c] = uVar2;
  puVar4 = param_1 + 0x91;
  param_3 = 4;
  iVar3 = 1;
  do {
    FUN_00515e20(local_2c,0x20,"LBData_%d",iVar3);
    uVar2 = FUN_005af1c0(local_2c);
    uVar2 = FUN_00524850(uVar1,uVar2);
    puVar4[-4] = uVar2;
    FUN_00515e20(local_2c,0x20,"LeaderText_%d",iVar3);
    uVar2 = FUN_005af1c0(local_2c);
    uVar2 = FUN_00524850(uVar1,uVar2);
    *puVar4 = uVar2;
    FUN_00515e20(local_2c,0x20,"OL_ICON_%d",iVar3 + 1);
    uVar2 = FUN_005af1c0(local_2c);
    uVar2 = FUN_00524850(uVar1,uVar2);
    puVar4[4] = uVar2;
    FUN_00515e20(local_2c,0x20,"LBBacking_%d",iVar3);
    uVar2 = FUN_005af1c0(local_2c);
    uVar2 = FUN_00524850(uVar1,uVar2);
    puVar4[8] = uVar2;
    puVar4 = puVar4 + 1;
    param_3 = param_3 + -1;
    iVar3 = iVar3 + 1;
  } while (param_3 != 0);
  iVar3 = 4;
  puVar5 = (undefined1 *)((int)param_1 + 0xbd);
  do {
    puVar5[-1] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + -5) = 0;
    *(undefined4 *)(puVar5 + -0x65) = 0;
    *(undefined4 *)(puVar5 + -0xd) = 0;
    *(undefined4 *)(puVar5 + -0x11) = 0;
    *(undefined4 *)(puVar5 + -9) = 0;
    FUN_00460c70(puVar5 + -0x75,&DAT_00890978);
    *(undefined4 *)(puVar5 + -0x61) = 0;
    *(undefined4 *)(puVar5 + -0x5d) = 0;
    *(undefined4 *)(puVar5 + -0x59) = 0;
    *(undefined4 *)(puVar5 + -0x55) = 0;
    *(undefined4 *)(puVar5 + -0x51) = 0;
    *(undefined4 *)(puVar5 + -0x4d) = 0;
    *(undefined4 *)(puVar5 + -0x49) = 0;
    *(undefined4 *)(puVar5 + -0x45) = 0;
    *(undefined4 *)(puVar5 + -0x41) = 0;
    *(undefined4 *)(puVar5 + -0x3d) = 0;
    *(undefined4 *)(puVar5 + -0x39) = 0;
    *(undefined4 *)(puVar5 + -0x35) = 0;
    *(undefined4 *)(puVar5 + -0x31) = 0;
    *(undefined4 *)(puVar5 + -0x2d) = 0;
    *(undefined4 *)(puVar5 + -0x29) = 0;
    *(undefined4 *)(puVar5 + -0x25) = 0;
    *(undefined4 *)(puVar5 + -0x21) = 0;
    *(undefined4 *)(puVar5 + -0x1d) = 0;
    *(undefined4 *)(puVar5 + -0x19) = 0;
    iVar3 = iVar3 + -1;
    *(undefined4 *)(puVar5 + -0x15) = 0;
    puVar5 = puVar5 + 0x78;
  } while (iVar3 != 0);
  ExceptionList = local_c;
  return param_1;
}

