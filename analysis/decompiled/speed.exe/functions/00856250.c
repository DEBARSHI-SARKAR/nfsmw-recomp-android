/* speed.exe 00856250 FUN_00856250; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 0084ae70 FUN_0084ae70
 * calls 0084bcc0 FUN_0084bcc0
 * calls 0084afb0 FUN_0084afb0
 * calls 0084b560 FUN_0084b560
 * calls 0078af30 FUN_0078af30
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_00856250(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  iVar1 = FUN_0084ae70(2,3,1);
  if (iVar1 == 0) {
    return (int *)0x0;
  }
  local_14 = 2;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_12 = 0x100;
  FUN_0084afb0(iVar1,&local_14,0x10);
  piVar2 = (int *)FUN_0078af30(0x3c);
  if (piVar2 != (int *)0x0) {
    piVar4 = piVar2;
    for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    *piVar2 = iVar1;
    piVar2[1] = 1;
    piVar2[0xd] = 8;
    piVar2[0xe] = 0x40;
    FUN_0084bcc0(piVar2 + 3);
    FUN_0084b560(*piVar2,2,5000,piVar2,&LAB_00855f10);
    return piVar2;
  }
  return (int *)0x0;
}

