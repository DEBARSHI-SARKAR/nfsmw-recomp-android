/* speed.exe 007e6a70 ___ld12mul; analysis pseudocode, not buildable source.
 * calls 007e5b90 ___addl
 * calls 007d6cb0 __security_check_cookie
 * calls 007e5c80 ___shl_12
 * calls 007e5ce0 ___shr_12
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___ld12mul
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void ___ld12mul(int *param_1,int *param_2)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int local_3c;
  int local_38;
  int local_30;
  ushort local_2c;
  undefined2 uStack_2a;
  short local_28 [4];
  undefined4 local_20;
  ushort local_1c;
  ushort local_18;
  ushort local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_20 = DAT_00906980;
  local_30 = 0;
  local_2c = 0;
  uStack_2a = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_18 = (*(ushort *)((int)param_1 + 10) ^ *(ushort *)((int)param_2 + 10)) & 0x8000;
  local_1c = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar2 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  local_14 = local_1c + uVar2;
  if (((local_1c < 0x7fff) && (uVar2 < 0x7fff)) && (local_14 < 0xbffe)) {
    if (local_14 < 0x3fc0) {
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
    }
    else if (((local_1c == 0) && (local_14 = local_14 + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
            ((param_1[1] == 0 && (*param_1 == 0)))) {
      *(undefined2 *)((int)param_1 + 10) = 0;
    }
    else if (((uVar2 == 0) && (local_14 = local_14 + 1, (param_2[2] & 0x7fffffffU) == 0)) &&
            ((param_2[1] == 0 && (*param_2 == 0)))) {
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
    }
    else {
      local_10 = 0;
      for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
        local_c = local_8 << 1;
        local_38 = 8;
        for (local_3c = 5 - local_8; 0 < local_3c; local_3c = local_3c + -1) {
          iVar1 = ___addl(*(undefined4 *)((int)&local_2c + local_10),
                          (uint)*(ushort *)((int)param_1 + local_c) *
                          (uint)*(ushort *)((int)param_2 + local_38),
                          (undefined4 *)((int)&local_2c + local_10));
          if (iVar1 != 0) {
            *(short *)((int)local_28 + local_10) = *(short *)((int)local_28 + local_10) + 1;
          }
          local_c = local_c + 2;
          local_38 = local_38 + -2;
        }
        local_10 = local_10 + 2;
      }
      local_14 = local_14 + 0xc002;
      while ((0 < (short)local_14 && ((local_28[3] & 0x8000U) == 0))) {
        ___shl_12(&local_2c);
        local_14 = local_14 - 1;
      }
      if ((short)local_14 < 1) {
        for (local_14 = local_14 - 1; (short)local_14 < 0; local_14 = local_14 + 1) {
          if ((local_2c & 1) != 0) {
            local_30 = local_30 + 1;
          }
          ___shr_12(&local_2c);
        }
        if (local_30 != 0) {
          local_2c = local_2c | 1;
        }
      }
      iVar1 = CONCAT22(local_28[0],uStack_2a);
      if ((0x8000 < local_2c) ||
         (iVar3 = CONCAT22(local_28[2],local_28[1]),
         (CONCAT22(uStack_2a,local_2c) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(local_28[0],uStack_2a) == -1) {
          iVar1 = 0;
          if (CONCAT22(local_28[2],local_28[1]) == -1) {
            iVar3 = 0;
            if (local_28[3] == 0xffff) {
              local_28[3] = 0x8000;
              local_14 = local_14 + 1;
            }
            else {
              local_28[3] = local_28[3] + 1;
            }
          }
          else {
            iVar3 = CONCAT22(local_28[2],local_28[1]) + 1;
          }
        }
        else {
          iVar1 = CONCAT22(local_28[0],uStack_2a) + 1;
          iVar3 = CONCAT22(local_28[2],local_28[1]);
        }
      }
      local_28[0] = (short)((uint)iVar1 >> 0x10);
      uStack_2a = (undefined2)iVar1;
      local_28[2] = (short)((uint)iVar3 >> 0x10);
      local_28[1] = (short)iVar3;
      if (local_14 < 0x7fff) {
        *(undefined2 *)param_1 = uStack_2a;
        *(uint *)((int)param_1 + 2) = CONCAT22(local_28[1],local_28[0]);
        *(uint *)((int)param_1 + 6) = CONCAT22(local_28[3],local_28[2]);
        *(ushort *)((int)param_1 + 10) = local_14 | local_18;
      }
      else {
        param_1[2] = (-(uint)(local_18 != 0) & 0x80000000) + 0x7fff8000;
        param_1[1] = 0;
        *param_1 = 0;
      }
    }
  }
  else {
    param_1[2] = (-(uint)(local_18 != 0) & 0x80000000) + 0x7fff8000;
    param_1[1] = 0;
    *param_1 = 0;
  }
  return;
}

