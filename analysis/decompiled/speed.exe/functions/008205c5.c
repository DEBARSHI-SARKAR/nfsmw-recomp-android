/* speed.exe 008205c5 FUN_008205c5; analysis pseudocode, not buildable source.
 * calls 0082007e FUN_0082007e
 * calls 00822050 FUN_00822050
 * calls 0082048d FUN_0082048d
 * calls 00860f92 Ordinal_1
 */

int FUN_008205c5(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_8c [3];
  uint local_80;
  undefined4 local_2c;
  undefined4 local_28;
  int local_8;
  
  DAT_009c22ac = (int *)0x0;
  DAT_009c22b0 = (int *)0x0;
  iVar1 = Ordinal_1(0,&DAT_009c22a8,0);
  if (iVar1 == 0) {
    iVar1 = *DAT_009c22a8;
    uVar2 = FUN_0082048d(2);
    (**(code **)(iVar1 + 0x18))(DAT_009c22a8,uVar2);
    local_8c[0] = 0x60;
    iVar1 = (**(code **)(*DAT_009c22a8 + 0x10))(DAT_009c22a8,local_8c);
    if (iVar1 == 0) {
      FUN_00822050(&local_2c,0x24);
      local_2c = 0x24;
      local_28 = 1;
      local_8 = (**(code **)(*DAT_009c22a8 + 0xc))(DAT_009c22a8,&local_2c,&DAT_009c22ac,0);
      if (-1 < local_8) {
        if (local_80 < 0xac45) {
          uVar3 = local_80;
          if (local_80 == 0) {
            uVar3 = 0x2b11;
          }
        }
        else {
          uVar3 = 0xac44;
        }
        *param_1 = 0;
        iVar1 = FUN_0082007e(1,uVar3);
        if (-1 < iVar1) {
          if (param_2 != (undefined1 *)0x0) {
            *param_2 = 1;
          }
          *param_1 = 1;
        }
        iVar1 = FUN_0082007e(2,uVar3);
        if (-1 < iVar1) {
          if (param_2 != (undefined1 *)0x0) {
            param_2[1] = 1;
          }
          *param_1 = 2;
        }
        iVar1 = FUN_0082007e(4,uVar3);
        if (-1 < iVar1) {
          if (param_2 != (undefined1 *)0x0) {
            param_2[2] = 1;
          }
          *param_1 = 4;
        }
        iVar1 = FUN_0082007e(6,uVar3);
        if (-1 < iVar1) {
          if (param_2 != (undefined1 *)0x0) {
            param_2[3] = 1;
          }
          *param_1 = 5;
        }
      }
    }
    else {
      local_8 = -1;
    }
  }
  else {
    if (iVar1 == -0x7787fff6) {
      local_8 = -0x12;
    }
    else {
      local_8 = ((iVar1 != -0x7787ff88) - 1 & 0xfffffff7) - 1;
    }
    DAT_009c22a8 = (int *)0x0;
  }
  if (DAT_009c22b0 != (int *)0x0) {
    (**(code **)(*DAT_009c22b0 + 8))(DAT_009c22b0);
    DAT_009c22b0 = (int *)0x0;
  }
  if (DAT_009c22ac != (int *)0x0) {
    (**(code **)(*DAT_009c22ac + 8))(DAT_009c22ac);
    DAT_009c22ac = (int *)0x0;
  }
  if (DAT_009c22a8 != (int *)0x0) {
    (**(code **)(*DAT_009c22a8 + 8))(DAT_009c22a8);
  }
  DAT_009c22a8 = (int *)0x0;
  return local_8;
}

