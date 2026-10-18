/* speed.exe 007e5ea0 $I10_OUTPUT; analysis pseudocode, not buildable source.
 * calls 007e5bd0 ___add_12
 * calls 007d6cb0 __security_check_cookie
 * calls 007e5c80 ___shl_12
 * calls 007e6e60 ___multtenpow12
 * calls 007e5ce0 ___shr_12
 * calls 007d0bd0 FUN_007d0bd0
 * calls 007e6a70 ___ld12mul
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _$I10_OUTPUT
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

undefined4 __cdecl
_I10_OUTPUT(int param_1,uint param_2,ushort param_3,int param_4,uint param_5,short *param_6)

{
  char *pcVar1;
  uint uVar2;
  undefined2 local_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined1 local_52;
  char cStack_51;
  ushort local_50;
  ushort local_4c;
  undefined2 local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  int local_1c;
  int local_18;
  ushort local_14;
  short local_10;
  int local_c;
  short *local_8;
  
  local_2c = DAT_00906980;
  local_48 = 0x4d;
  local_44 = 0xcc;
  local_43 = 0xcc;
  local_42 = 0xcc;
  local_41 = 0xcc;
  local_40 = 0xcc;
  local_3f = 0xcc;
  local_3e = 0xcc;
  local_3d = 0xcc;
  local_3c = 0xcc;
  local_3b = 0xcc;
  local_3a = 0xfb;
  local_39 = 0x3f;
  local_24 = 1;
  local_28 = param_2;
  local_50 = param_3 & 0x8000;
  local_14 = param_3 & 0x7fff;
  if (local_50 == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if (((local_14 == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *param_6 = 0;
    *(undefined1 *)(param_6 + 1) = 0x20;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
    local_24 = 1;
  }
  else if (local_14 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if (((local_50 == 0) || (param_2 != 0xc0000000)) || (param_1 != 0)) {
        if ((param_2 == 0x80000000) && (param_1 == 0)) {
          FUN_007d0bd0(param_6 + 2,"1#INF");
          *(undefined1 *)((int)param_6 + 3) = 5;
        }
        else {
          FUN_007d0bd0(param_6 + 2,"1#QNAN");
          *(undefined1 *)((int)param_6 + 3) = 6;
        }
      }
      else {
        FUN_007d0bd0(param_6 + 2,"1#IND");
        *(undefined1 *)((int)param_6 + 3) = 5;
      }
    }
    else {
      FUN_007d0bd0(param_6 + 2,"1#SNAN");
      *(undefined1 *)((int)param_6 + 3) = 6;
    }
    local_24 = 0;
  }
  else {
    param_3 = param_3 & 0xff;
    local_4c = (ushort)(byte)(param_2 >> 0x18);
    local_10 = (short)((uint)local_14 * 0x4d10 + (uint)(local_14 >> 8) * 0x4d +
                       (uint)local_4c * 0x9a + -0x134312f4 >> 0x10);
    local_52 = (undefined1)local_14;
    cStack_51 = (char)(local_14 >> 8);
    uStack_56 = (undefined2)param_2;
    uStack_54 = (undefined2)(param_2 >> 0x10);
    uStack_5a = (undefined2)param_1;
    uStack_58 = (undefined2)((uint)param_1 >> 0x10);
    local_5c = 0;
    ___multtenpow12(&local_5c,-(int)local_10,1);
    if (0x3ffe < CONCAT11(cStack_51,local_52)) {
      local_10 = local_10 + 1;
      ___ld12mul(&local_5c,&local_44);
    }
    *param_6 = local_10;
    if (((param_5 & 1) == 0) || (param_4 = local_10 + param_4, 0 < param_4)) {
      if (0x15 < param_4) {
        param_4 = 0x15;
      }
      local_18 = CONCAT11(cStack_51,local_52) - 0x3ffe;
      local_52 = 0;
      cStack_51 = '\0';
      for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
        ___shl_12(&local_5c);
      }
      if (local_18 < 0) {
        for (uVar2 = -local_18 & 0xff; 0 < (int)uVar2; uVar2 = uVar2 - 1) {
          ___shr_12(&local_5c,uVar2,param_3);
        }
      }
      local_8 = param_6 + 2;
      for (local_c = param_4 + 1; 0 < local_c; local_c = local_c + -1) {
        local_38 = CONCAT22(uStack_5a,local_5c);
        local_34 = CONCAT22(uStack_56,uStack_58);
        local_30 = CONCAT13(cStack_51,CONCAT12(local_52,uStack_54));
        ___shl_12(&local_5c);
        ___shl_12(&local_5c);
        ___add_12(&local_5c,&local_38);
        ___shl_12(&local_5c);
        *(char *)local_8 = cStack_51 + '0';
        local_8 = (short *)((int)local_8 + 1);
        cStack_51 = '\0';
      }
      pcVar1 = (char *)((int)local_8 + -1);
      local_8 = local_8 + -1;
      if (*pcVar1 < '5') {
        for (; (param_6 + 2 <= local_8 && ((char)*local_8 == '0'));
            local_8 = (short *)((int)local_8 + -1)) {
        }
        if (local_8 < param_6 + 2) {
          *param_6 = 0;
          *(undefined1 *)(param_6 + 1) = 0x20;
          *(undefined1 *)((int)param_6 + 3) = 1;
          *(undefined1 *)(param_6 + 2) = 0x30;
          *(undefined1 *)((int)param_6 + 5) = 0;
          return 1;
        }
      }
      else {
        for (; (param_6 + 2 <= local_8 && ((char)*local_8 == '9'));
            local_8 = (short *)((int)local_8 + -1)) {
          *(char *)local_8 = '0';
        }
        if (local_8 < param_6 + 2) {
          local_8 = (short *)((int)local_8 + 1);
          *param_6 = *param_6 + 1;
        }
        *(char *)local_8 = (char)*local_8 + '\x01';
      }
      *(char *)((int)param_6 + 3) = ((char)local_8 - ((char)param_6 + '\x04')) + '\x01';
      *(undefined1 *)((int)param_6 + *(char *)((int)param_6 + 3) + 4) = 0;
    }
    else {
      *param_6 = 0;
      *(undefined1 *)(param_6 + 1) = 0x20;
      *(undefined1 *)((int)param_6 + 3) = 1;
      *(undefined1 *)(param_6 + 2) = 0x30;
      *(undefined1 *)((int)param_6 + 5) = 0;
      local_24 = 1;
    }
  }
  return local_24;
}

