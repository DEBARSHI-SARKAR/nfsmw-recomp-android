/* speed.exe 0083d2b0 FUN_0083d2b0; analysis pseudocode, not buildable source.
 * calls 0083c880 FUN_0083c880
 * calls 0083a980 FUN_0083a980
 * calls 007d6cb0 __security_check_cookie
 * calls 008406c0 FUN_008406c0
 * calls 0083a630 FUN_0083a630
 * calls 0084bcb0 GetTickCount
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0083d2b0(undefined4 param_1)

{
  undefined4 uVar1;
  DWORD DVar2;
  undefined4 *unaff_ESI;
  undefined1 local_104 [256];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  local_104[0] = 0;
  FUN_0083a630(local_104,0x100,unaff_ESI + 0x13);
  FUN_0083c880(local_104,0x100,&DAT_008b6d40,unaff_ESI + 0xb);
  FUN_0083a980(local_104,0x100,&DAT_008c681c,param_1);
  uVar1 = FUN_008406c0(*unaff_ESI,0x6368616c,local_104,&LAB_0083d1c0);
  unaff_ESI[5] = uVar1;
  DVar2 = GetTickCount();
  unaff_ESI[7] = DVar2 + unaff_ESI[6];
  if (DVar2 + unaff_ESI[6] == 0) {
    unaff_ESI[7] = 1;
  }
  return;
}

