/* speed.exe 0085c260 FUN_0085c260; analysis pseudocode, not buildable source.
 * calls 0083faf0 FUN_0083faf0
 * calls 0084bcb0 GetTickCount
 * calls 00846010 FUN_00846010
 * calls 0083e5e0 FUN_0083e5e0
 * calls 007d6cb0 __security_check_cookie
 * calls 0085bfa0 FUN_0085bfa0
 * calls 0083ea90 FUN_0083ea90
 * calls 0083ed50 FUN_0083ed50
 * calls 0083f420 FUN_0083f420
 * calls 0083e860 FUN_0083e860
 * calls 0083e650 FUN_0083e650
 * calls 0083f560 FUN_0083f560
 * calls 0085c0a0 FUN_0085c0a0
 * calls 0085c070 FUN_0085c070
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FUN_0085c260(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  DWORD DVar6;
  int *piVar7;
  undefined4 local_d4;
  undefined4 local_d0;
  int local_cc;
  int local_c8;
  undefined1 local_c4 [64];
  undefined1 local_84 [128];
  undefined4 local_4;
  
  piVar1 = param_2 + 0x22;
  local_4 = DAT_00906980;
  iVar2 = *piVar1;
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    if ((iVar2 == 0) || (iVar2 == 5)) {
      return false;
    }
    FUN_0085c0a0();
  }
  if (*piVar1 == 0) {
    iVar3 = FUN_0083ed50();
    param_2[0x26] = iVar3;
    if (iVar3 == 0) {
      *piVar1 = 5;
    }
    else {
      if (param_1[0x39] != 0) {
        FUN_0083e5e0(iVar3,0x6d696e70,param_1[0x39]);
      }
      if (param_1[0x3a] != 0) {
        FUN_0083e5e0(param_2[0x26],0x6d6f7574,param_1[0x3a]);
      }
      if (param_1[0x3b] != 0) {
        FUN_0083e5e0(param_2[0x26],0x6d776964,param_1[0x3b]);
      }
      uVar4 = FUN_0085bfa0(param_2,local_c4,0x40);
      iVar3 = *param_2;
      if (param_1[param_1[0x35] * 0x2c + 0x66] == iVar3) {
        iVar3 = param_2[1];
      }
      uVar5 = FUN_0083faf0(iVar3,param_1[10],(short)param_2[0x23],local_c4);
      FUN_00846010(local_84,0x80,"%s:%d:%d#%s",uVar5);
      FUN_0083e650(param_2[0x26],uVar4,local_84);
      *piVar1 = 1;
      DVar6 = GetTickCount();
      param_2[0x29] = DVar6;
    }
  }
  if (*piVar1 == 1) {
    iVar3 = FUN_0083e860(param_2[0x26]);
    if (iVar3 != 0) {
      iVar3 = FUN_0083f420(iVar3,0,param_1[0xc]);
      param_2[0x27] = iVar3;
      if (iVar3 == 0) {
        *piVar1 = 5;
      }
      else {
        FUN_0085c070();
        uVar4 = FUN_0083ea90(param_2[0x26],0x736f636b);
        param_1[0x61] = uVar4;
        *piVar1 = 3;
      }
    }
    DVar6 = GetTickCount();
    if (10000 < (int)(DVar6 - param_2[0x29])) {
      FUN_0085c0a0();
      if (*(short *)((int)param_2 + 0x8e) == 0) {
        *piVar1 = (-(uint)(param_1[0x5d] != 0) & 0xfffffffd) + 5;
      }
      else {
        FUN_0085c070();
        *piVar1 = 5;
      }
    }
  }
  if (*piVar1 == 3) {
    piVar7 = (int *)FUN_0083f560(param_2[0x27]);
    if ((*(char *)((int)piVar7 + 0x55) == '\0') || ((int)param_1[0x37] < *piVar7 - piVar7[8])) {
      FUN_0085c0a0();
    }
  }
  local_c8 = *piVar1;
  if (iVar2 != local_c8) {
    local_d4 = param_3;
    local_d0 = 0;
    param_1[0x5f] = 1;
    local_cc = iVar2;
    (*(code *)*param_1)(param_1,&local_d4,param_1[1]);
    param_1[0x5f] = 0;
  }
  return *piVar1 != 5;
}

