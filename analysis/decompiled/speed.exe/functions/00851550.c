/* speed.exe 00851550 FUN_00851550; analysis pseudocode, not buildable source.
 * calls 0084af40 FUN_0084af40
 * calls 007d6cb0 __security_check_cookie
 * calls 0084b350 FUN_0084b350
 * calls 0084ae70 FUN_0084ae70
 * calls 0084fc80 FUN_0084fc80
 * calls 0084afb0 FUN_0084afb0
 * calls 00851080 FUN_00851080
 * calls 0083f840 FUN_0083f840
 * calls 0083fbb0 FUN_0083fbb0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00851550(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14 [16];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  local_34 = 2;
  local_32 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 2;
  local_22 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  bVar1 = FUN_0083fbb0(&local_38,&local_40,&local_3c,param_2);
  if ((bVar1 & 3) != 3) {
    return 0xfffffffd;
  }
  if (local_3c == 0) {
    local_3c = local_40;
    local_40 = local_40 + 1;
  }
  local_22 = CONCAT11((char)local_40,(char)((uint)local_40 >> 8));
  FUN_0084fc80(param_1);
  iVar3 = DAT_009c3cfc;
  do {
    if (iVar3 == 0) {
LAB_00851654:
      iVar3 = FUN_0084ae70(2,2,0);
      if (iVar3 == 0) {
        return 0xfffffffc;
      }
      iVar2 = FUN_0084afb0(iVar3,&local_24,0x10);
      if (iVar2 < 0) {
        local_22 = 0;
        iVar2 = FUN_0084afb0(iVar3,&local_24,0x10);
        if (iVar2 < 0) {
          FUN_0084af40(iVar3);
          return 0xfffffffb;
        }
      }
LAB_008516ca:
      local_30 = CONCAT31(CONCAT21(CONCAT11((char)local_38,(char)((uint)local_38 >> 8)),
                                   (char)((uint)local_38 >> 0x10)),(char)((uint)local_38 >> 0x18));
      *(undefined4 *)(param_1 + 0xe0) = 0;
      local_32 = CONCAT11((char)local_3c,(char)((uint)local_3c >> 8));
      uVar4 = FUN_00851080();
      return uVar4;
    }
    if ((((iVar3 != param_1) && (*(int *)(iVar3 + 0x80) != 0)) &&
        (iVar2 = FUN_0084b350(*(int *)(iVar3 + 0x80),0x62696e64,local_14,0x10), -1 < iVar2)) &&
       (iVar2 = FUN_0083f840(&local_24,local_14), iVar2 == 0)) {
      if (*(int *)(iVar3 + 0x80) != 0) goto LAB_008516ca;
      goto LAB_00851654;
    }
    iVar3 = *(int *)(iVar3 + 0x7c);
  } while( true );
}

