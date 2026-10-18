/* speed.exe 0058d340 FUN_0058d340; analysis pseudocode, not buildable source.
 * calls 005252d0 FUN_005252d0
 * calls 005de330 FUN_005de330
 * calls 00586290 FUN_00586290
 * calls 00525220 FUN_00525220
 * calls 007c4b80 FUN_007c4b80
 * calls 006547a0 FUN_006547a0
 * calls 0056bc10 FUN_0056bc10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0058d340(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008724b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_008a0ee4;
  local_4 = 0;
  if (DAT_009885c8 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_009885c8 + 0x24))();
    if (iVar1 == 1) {
      iVar1 = 0x626ac043;
      if (DAT_0091d3ec < 2) {
        if (DAT_0091d3e4 < 2) {
          if (_DAT_00896d28 < (float)DAT_0091d3f0) {
            iVar1 = 0x626ac046;
          }
        }
        else {
          iVar1 = 0x626ac044;
        }
      }
      else {
        iVar1 = ((DAT_0091d3e8 < 2) - 1 & 3) + 0x626ac042;
      }
      FUN_007c4b80();
      FUN_006547a0(auStack_2c,0);
      switch(iVar1) {
      case 0x626ac042:
        uVar2 = FUN_0056bc10(iVar1,DAT_0091d3e0,DAT_0091d3e4,DAT_0091d3ec,DAT_0091d3f0,auStack_2c);
        FUN_005252d0(param_1[4],0xf1ed545a,uVar2);
        break;
      case 0x626ac043:
        uVar2 = param_1[4];
        uVar3 = FUN_005de330();
        uVar3 = FUN_0056bc10(iVar1,auStack_2c,uVar3);
        FUN_005252d0(uVar2,0xf1ed545a,uVar3);
        break;
      case 0x626ac044:
        uVar2 = param_1[4];
        uVar3 = FUN_005de330();
        uVar3 = FUN_0056bc10(iVar1,auStack_2c,DAT_0091d3e0,DAT_0091d3e4,uVar3);
        FUN_005252d0(uVar2,0xf1ed545a,uVar3);
        break;
      case 0x626ac045:
        uVar2 = param_1[4];
        uVar3 = FUN_005de330();
        uVar3 = FUN_0056bc10(iVar1,auStack_2c,DAT_0091d3e8,DAT_0091d3ec,uVar3);
        FUN_005252d0(uVar2,0xf1ed545a,uVar3);
        break;
      case 0x626ac046:
        uVar2 = param_1[4];
        uVar3 = FUN_005de330();
        uVar3 = FUN_0056bc10(iVar1,auStack_2c,DAT_0091d3f0,uVar3);
        FUN_005252d0(uVar2,0xf1ed545a,uVar3);
      }
    }
    else {
      iVar1 = (**(code **)(*DAT_009885c8 + 0x24))();
      if (iVar1 == 0) {
        FUN_00525220(param_1[4],0xf1ed545a,0x626ac047);
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

