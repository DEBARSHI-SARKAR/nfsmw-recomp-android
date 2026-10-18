/* speed.exe 00820762 FUN_00820762; analysis pseudocode, not buildable source.
 * calls 0082007e FUN_0082007e
 * calls 00822050 FUN_00822050
 * calls 00822ef7 FUN_00822ef7
 * calls 008201ae FUN_008201ae
 * calls 0082048d FUN_0082048d
 * calls 00860f92 Ordinal_1
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00820762(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_38;
  undefined4 local_34;
  uint local_14;
  code *local_10;
  undefined1 local_c;
  byte local_b;
  undefined1 local_a;
  undefined1 local_8 [4];
  
  iVar3 = -1;
  _DAT_0090bf3c = 0x41f00000;
  _DAT_009c2290 = 0;
  DAT_009c2294 = 0;
  _DAT_0090bf4c = 0x41700000;
  DAT_009c2298 = 0;
  DAT_0090bf40 = 0xf;
  DAT_0090bf44 = 1000;
  if ((char)param_2 != '\0') {
    local_14 = (uint)DAT_009c2046;
    local_c = DAT_009c204a;
    local_b = DAT_009c2060 + DAT_009c205f;
    local_a = 1 < local_b;
    local_10 = FUN_0081f6c3;
    FUN_00822ef7(&local_14);
  }
  DAT_009c22ac = 0;
  DAT_009c22b0 = (int *)0x0;
  iVar1 = Ordinal_1(0,&DAT_009c22a8,0);
  if (iVar1 == 0) {
    iVar1 = *DAT_009c22a8;
    uVar2 = FUN_0082048d(2);
    (**(code **)(iVar1 + 0x18))(DAT_009c22a8,uVar2);
    FUN_00822050(&local_38,0x24);
    local_38 = 0x24;
    local_34 = 1;
    iVar1 = (**(code **)(*DAT_009c22a8 + 0xc))(DAT_009c22a8,&local_38,&DAT_009c22ac,0);
    if ((-1 < iVar1) &&
       (iVar1 = FUN_0082007e((uint)DAT_009c2060 + (uint)DAT_009c205f,DAT_009c2046), -1 < iVar1)) {
      iVar1 = (**(code **)(*DAT_009c22b0 + 0x2c))
                        (DAT_009c22b0,0,DAT_009c22b4,&param_2,local_8,0,0,0);
      if (-1 < iVar1) {
        FUN_00822050(param_2,DAT_009c22b4);
        (**(code **)(*DAT_009c22b0 + 0x4c))(DAT_009c22b0,param_2,DAT_009c22b4,0,0);
      }
      iVar1 = (**(code **)(*DAT_009c22b0 + 0x30))(DAT_009c22b0,0,0,1);
      if (-1 < iVar1) {
        return 0;
      }
    }
  }
  else {
    if (iVar1 == -0x7787fff6) {
      iVar3 = -0x12;
    }
    else {
      iVar3 = ((iVar1 != -0x7787ff88) - 1 & 0xfffffff7) - 1;
    }
    DAT_009c22a8 = (int *)0x0;
  }
  FUN_008201ae(param_1,1);
  return iVar3;
}

