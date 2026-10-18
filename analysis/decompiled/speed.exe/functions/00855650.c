/* speed.exe 00855650 FUN_00855650; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 0085a6f0 FUN_0085a6f0
 * calls 0085a5d0 FUN_0085a5d0
 * calls 0085a550 FUN_0085a550
 * calls 00859e40 FUN_00859e40
 * calls 007d6cb0 __security_check_cookie
 * calls 00859e60 FUN_00859e60
 * calls 00854cf0 FUN_00854cf0
 * calls 00855570 FUN_00855570
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00855650(undefined4 *param_1)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  undefined1 local_104 [256];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  FUN_00859e60(*param_1);
  iVar3 = param_1[0x183];
  if ((((iVar3 != 0) && (iVar3 != 6)) && (iVar3 != 7)) &&
     (DVar2 = GetTickCount(), -1 < (int)(DVar2 - param_1[0x192]))) {
    param_1[0x183] = 7;
    param_1[0x193] = 1;
  }
  if (param_1[0x183] == 1) {
    iVar3 = FUN_0085a6f0(*param_1,0x73746174,0,0);
    if (0 < iVar3) {
      DVar2 = GetTickCount();
      param_1[0x192] = DVar2 + param_1[0x191];
      param_1[0x183] = 2;
    }
    if (iVar3 < 0) {
      param_1[0x183] = 7;
    }
  }
  if (param_1[0x183] == 2) {
    FUN_0085a550(*param_1,param_1[0x18a],param_1[0x18d]);
    param_1[0x18d] = 0;
    param_1[0x183] = 3;
  }
  if (param_1[0x183] == 3) {
    iVar3 = FUN_0085a5d0(*param_1,local_104,1);
    if (0 < iVar3) {
      DVar2 = GetTickCount();
      param_1[0x192] = DVar2 + param_1[0x191];
      *(undefined1 *)param_1[0x18a] = local_104[0];
      param_1[0x18d] = 1;
      param_1[0x183] = 4;
    }
    if (iVar3 < 0) {
      param_1[0x183] = 7;
    }
  }
  if (param_1[0x183] == 4) {
    iVar3 = FUN_0085a5d0(*param_1,param_1[0x18a] + param_1[0x18d],param_1[0x18b] - param_1[0x18d]);
    if (0 < iVar3) {
      DVar2 = GetTickCount();
      param_1[0x192] = DVar2 + param_1[0x191];
      param_1[0x18d] = param_1[0x18d] + iVar3;
    }
    if (iVar3 < 0) {
      param_1[0x183] = 7;
    }
    if ((param_1[0x183] == 4) && (4 < (int)param_1[0x18d])) {
      iVar3 = FUN_00854cf0();
      if (iVar3 < 0) {
        return;
      }
      if (param_1[0x184] == 1) {
        param_1[0x183] = 6;
      }
      else if (((int)param_1[0x189] < 0) || ((int)param_1[0x18e] < (int)param_1[0x189])) {
        param_1[0x183] = 5;
      }
      else {
        param_1[0x183] = 6;
      }
      if (((int)param_1[0x185] / 100) * 100 == 300) {
        FUN_00855570();
      }
    }
  }
  iVar3 = param_1[0x183];
  do {
    if (iVar3 != 5) {
LAB_00855961:
      if ((param_1[0x183] == 7) && (iVar3 = FUN_0085a6f0(*param_1,0x73746174,0,0), -1 < iVar3)) {
        FUN_00859e40(*param_1);
      }
      return;
    }
    if ((0 < (int)param_1[0x18d]) && (param_1[0x18c] == param_1[0x18d])) {
      param_1[0x18d] = 0;
      param_1[0x18c] = 0;
    }
    iVar3 = param_1[0x18b] - param_1[0x18d];
    if (iVar3 < 1) goto LAB_00855961;
    iVar3 = FUN_0085a5d0(*param_1,param_1[0x18a] + param_1[0x18d],iVar3);
    if (0 < iVar3) {
      DVar2 = GetTickCount();
      param_1[0x192] = DVar2 + param_1[0x191];
    }
    if (iVar3 == 0) goto LAB_00855961;
    if (iVar3 == -1) {
      if ((param_1[0x189] == -1) || (param_1[0x189] == param_1[0x18e])) {
        param_1[0x189] = param_1[0x18e];
        FUN_00859e40(*param_1);
LAB_00855957:
        param_1[0x183] = 6;
      }
      else {
LAB_008559a4:
        param_1[0x183] = 7;
      }
      goto LAB_00855961;
    }
    if (iVar3 < 0) goto LAB_008559a4;
    iVar1 = param_1[0x18e];
    param_1[0x18d] = param_1[0x18d] + iVar3;
    param_1[0x18e] = iVar1 + iVar3;
    if ((-1 < (int)param_1[0x189]) && ((int)param_1[0x189] <= iVar1 + iVar3)) goto LAB_00855957;
    iVar3 = param_1[0x183];
  } while( true );
}

