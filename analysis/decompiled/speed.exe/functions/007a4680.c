/* speed.exe 007a4680 FUN_007a4680; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 * calls 005252d0 FUN_005252d0
 * calls 00516c90 FUN_00516c90
 * calls 00515e20 FUN_00515e20
 * calls 00515bb0 FUN_00515bb0
 * calls 00515b90 FUN_00515b90
 * calls 004fb000 FUN_004fb000
 * calls 00591330 FUN_00591330
 * calls 00591240 FUN_00591240
 * calls 0055afa0 FUN_0055afa0
 * calls 005251a0 FUN_005251a0
 * calls 00586290 FUN_00586290
 * calls 00573140 FUN_00573140
 * calls 00548440 FUN_00548440
 * calls 0056bc10 FUN_0056bc10
 * calls 00525220 FUN_00525220
 */

undefined4 * __thiscall FUN_007a4680(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00882963;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_008b731c;
  local_4 = 0;
  FUN_0055afa0(*param_2,0);
  local_4 = CONCAT31(local_4._1_3_,1);
  cVar1 = FUN_004fb000();
  if (cVar1 != '\0') {
    uVar3 = param_1[4];
    uVar5 = 0;
    uVar2 = FUN_00460bf0("CURRENT_GEN_WIDESCREEN",uVar3,0);
    FUN_00516c90(uVar2,uVar3,uVar5);
  }
  iVar4 = param_2[2];
  param_1[0xb] = iVar4;
  if (iVar4 != 0) {
    if (DAT_009b9e88 == 0) {
      uVar3 = param_1[4];
      uVar2 = FUN_00591330();
      uVar3 = FUN_005251a0(uVar3,0x3e01ad1d,uVar2);
      FUN_00515b90(uVar3);
      uVar3 = param_1[4];
      uVar2 = FUN_00591240();
      uVar3 = FUN_005251a0(uVar3,0xb05dd708,uVar2);
      FUN_00515b90(uVar3);
      uVar3 = 0;
      iVar4 = 1;
    }
    else {
      uVar3 = FUN_0056bc10(0x3a64de21,DAT_009b9e88);
      FUN_00515e20(local_2c,0x20,uVar3);
      FUN_005252d0(param_1[4],0x242657ce,&DAT_008941f8,local_2c);
      FUN_00516c90(0x89d0649c,param_1[4],0);
      FUN_005252d0(param_1[4],0xb695a891,&DAT_0089d764,DAT_009b9e88);
      uVar3 = param_1[4];
      uVar2 = FUN_00573140("BLACKLIST_RIVAL_%02d_AKA",DAT_009b9e88);
      FUN_00525220(uVar3,0x7ac3d0c9,uVar2);
      uVar3 = FUN_005251a0(param_1[4],0xf5a2a087);
      param_1[0xc] = uVar3;
      iVar4 = DAT_009b9e88;
    }
    FUN_00548440(iVar4,0,uVar3,0);
  }
  uVar3 = FUN_005251a0(param_1[4],0x66be0542,0xfbb0b78e);
  FUN_00515bb0(uVar3);
  uVar3 = FUN_005251a0(param_1[4],0x5bc,0x5bc);
  FUN_00515bb0(uVar3);
  uVar3 = FUN_005251a0(param_1[4],0x682,0x682);
  FUN_00515bb0(uVar3);
  ExceptionList = local_c;
  return param_1;
}

