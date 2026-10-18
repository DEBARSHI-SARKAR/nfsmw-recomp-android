/* speed.exe 00864040 FUN_00864040; analysis pseudocode, not buildable source.
 * calls 0084af40 FUN_0084af40
 * calls 007d6cb0 __security_check_cookie
 * calls 0084b350 FUN_0084b350
 * calls 0084ae70 FUN_0084ae70
 * calls 0084afb0 FUN_0084afb0
 * calls 0084af90 FUN_0084af90
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_00864040(void)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int unaff_EBX;
  int *unaff_ESI;
  undefined2 local_14;
  undefined1 local_12;
  undefined1 uStack_11;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  iVar2 = *unaff_ESI;
  if ((iVar2 != 0) && (iVar2 != unaff_ESI[1])) {
    FUN_0084af90(iVar2,2);
    FUN_0084af40(*unaff_ESI);
    *unaff_ESI = 0;
  }
  if ((unaff_ESI[1] == 0) || (*(int *)(unaff_EBX + 0x10) != unaff_ESI[3])) {
    iVar2 = FUN_0084ae70(2,2,0);
    *unaff_ESI = iVar2;
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    local_14 = 2;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    if (*(int *)(unaff_EBX + 0x10) == -1) {
      iVar1 = unaff_ESI[0x8d];
      uVar3 = (undefined1)((uint)iVar1 >> 8);
      unaff_ESI[0x8d] = iVar1 + 1;
      uVar4 = (undefined1)(iVar1 + 1);
      unaff_ESI[0x8d] = iVar1 + 2;
    }
    else {
      uVar4 = *(undefined1 *)(unaff_EBX + 0x10);
      uVar3 = (undefined1)((uint)*(int *)(unaff_EBX + 0x10) >> 8);
    }
    _local_12 = CONCAT11(uVar4,uVar3);
    FUN_0084afb0(iVar2,&local_14,0x10);
  }
  else {
    *unaff_ESI = unaff_ESI[1];
  }
  FUN_0084b350(*unaff_ESI,0x62696e64,&local_14,0x10);
  return (uint)CONCAT11(local_12,uStack_11);
}

