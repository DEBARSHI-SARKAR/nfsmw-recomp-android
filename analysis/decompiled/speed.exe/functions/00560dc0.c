/* speed.exe 00560dc0 FUN_00560dc0; analysis pseudocode, not buildable source.
 * calls 0064c9a0 FUN_0064c9a0
 * calls 00652ad0 _malloc
 * calls 007f3e70 FUN_007f3e70
 * calls 005191e0 FUN_005191e0
 * calls 00526c90 FUN_00526c90
 * calls 00652b10 thunk_FUN_007c7250
 * calls 0054f6d0 FUN_0054f6d0
 * calls 00518fe0 FUN_00518fe0
 * calls 00559ac0 FUN_00559ac0
 * calls 00560bd0 FUN_00560bd0
 * calls 00660200 FUN_00660200
 * calls 0054f610 FUN_0054f610
 * calls 00519030 FUN_00519030
 * calls 00519050 FUN_00519050
 * calls 005271e0 FUN_005271e0
 * calls 00519120 FUN_00519120
 * calls 00519100 FUN_00519100
 * calls 00560ce0 FUN_00560ce0
 * calls 00560980 FUN_00560980
 * calls 00526f60 FUN_00526f60
 * calls 00526ac0 FUN_00526ac0
 * calls 007f3d1a FUN_007f3d1a
 * calls 005192f0 FUN_005192f0
 * calls 007f3f10 FUN_007f3f10
 */

void FUN_00560dc0(undefined4 param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined1 local_3c [24];
  void *local_24 [9];
  
  pvVar1 = _malloc(0x400);
  local_4c = (int)pvVar1 + 0x338;
  local_48 = (int)pvVar1 + 0x36a;
  local_44 = (int)pvVar1 + 0x39c;
  local_40 = (int)pvVar1 + 0x3ce;
  FUN_007f3e70();
  FUN_007f3f10();
  local_24[0] = pvVar1;
  switch(param_1) {
  case 1:
    FUN_00560980(pvVar1,0,&local_4c);
    thunk_FUN_007c7250(pvVar1);
    return;
  case 2:
    FUN_00518fe0();
    thunk_FUN_007c7250(pvVar1);
    return;
  case 3:
    FUN_007f3d1a();
    FUN_00559ac0(0,local_58,local_54,local_50);
    thunk_FUN_007c7250(pvVar1);
    return;
  case 4:
    iVar2 = FUN_0064c9a0();
    if (iVar2 != 0) {
      FUN_00660200(4,8,9);
      thunk_FUN_007c7250(pvVar1);
      return;
    }
    break;
  case 5:
    FUN_00526ac0(pvVar1);
    thunk_FUN_007c7250(pvVar1);
    return;
  case 6:
    FUN_00519030(pvVar1);
    thunk_FUN_007c7250(pvVar1);
    return;
  case 7:
    FUN_00526c90(pvVar1);
    thunk_FUN_007c7250(pvVar1);
    return;
  case 8:
    FUN_00519050(pvVar1);
    thunk_FUN_007c7250(pvVar1);
    return;
  case 9:
    FUN_00519100();
    thunk_FUN_007c7250(pvVar1);
    return;
  case 10:
    FUN_0054f610(local_24);
    thunk_FUN_007c7250(pvVar1);
    return;
  case 0xb:
    FUN_0054f6d0(0);
    thunk_FUN_007c7250(pvVar1);
    return;
  case 0xc:
    FUN_00519120(0);
    thunk_FUN_007c7250(pvVar1);
    return;
  case 0xd:
    FUN_00526f60(0,0);
    thunk_FUN_007c7250(pvVar1);
    return;
  case 0xe:
    FUN_00560bd0(local_3c);
    thunk_FUN_007c7250(pvVar1);
    return;
  case 0xf:
    FUN_00560ce0();
    thunk_FUN_007c7250(pvVar1);
    return;
  case 0x10:
    FUN_005271e0(0,0,0);
    thunk_FUN_007c7250(pvVar1);
    return;
  case 0x11:
    FUN_005192f0(pvVar1,0,0,&param_1,&param_1);
    thunk_FUN_007c7250(pvVar1);
    return;
  case 0x12:
    FUN_005191e0(0,1);
  }
  thunk_FUN_007c7250(pvVar1);
  return;
}

