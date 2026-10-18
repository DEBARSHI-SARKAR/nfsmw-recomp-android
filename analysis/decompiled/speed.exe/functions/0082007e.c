/* speed.exe 0082007e FUN_0082007e; analysis pseudocode, not buildable source.
 * calls 00822050 FUN_00822050
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0082007e(ushort param_1,int param_2)

{
  int iVar1;
  undefined2 local_50;
  ushort local_4e;
  int local_4c;
  int local_48;
  ushort local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined2 *local_18;
  
  local_44 = param_1 * 2;
  DAT_009c228c = (undefined1)local_44;
  local_48 = (uint)local_44 * param_2;
  local_50 = 0xfffe;
  local_4e = param_1;
  local_40 = 0x16;
  local_4c = param_2;
  local_42 = 0x10;
  local_3e = 0x10;
  local_38 = DAT_008c5c98;
  uStack_34 = DAT_008c5c9c;
  uStack_30 = DAT_008c5ca0;
  uStack_2c = DAT_008c5ca4;
  if (param_1 == 6) {
    local_3c = 0x3f;
  }
  else if (param_1 == 4) {
    local_3c = 0x33;
  }
  else if (param_1 < 3) {
    local_50 = 1;
    local_40 = 0;
  }
  iVar1 = (**(code **)(*DAT_009c22ac + 0x38))(DAT_009c22ac,&local_50);
  if (-1 < iVar1) {
    if (DAT_009c22b0 != (int *)0x0) {
      (**(code **)(*DAT_009c22b0 + 8))(DAT_009c22b0);
      DAT_009c22b0 = (int *)0x0;
    }
    FUN_00822050(&local_28,0x24);
    local_18 = &local_50;
    local_28 = 0x24;
    local_24 = 0x18000;
    DAT_009c22c0 = 0;
    _DAT_009c22c4 = 0;
    DAT_009c22bc = 0;
    DAT_009c22b8 = (uint)(local_4c * 500) / 1000 & 0xfffffff0;
    DAT_009c2288 = (int)DAT_009c22b8 >> 1;
    DAT_009c22b4 = local_44 * DAT_009c22b8;
    local_20 = DAT_009c22b4;
    (**(code **)(*DAT_009c22a8 + 0xc))(DAT_009c22a8,&local_28,&DAT_009c22b0,0);
  }
  return;
}

