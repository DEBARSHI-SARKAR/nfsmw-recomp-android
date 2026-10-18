/* speed.exe 0083d010 FUN_0083d010; analysis pseudocode, not buildable source.
 * calls 0083c880 FUN_0083c880
 * calls 0083a980 FUN_0083a980
 * calls 007d6cb0 __security_check_cookie
 * calls 0083acd0 FUN_0083acd0
 * calls 008406c0 FUN_008406c0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0083d010(undefined4 param_1,undefined4 param_2)

{
  undefined4 *unaff_ESI;
  int unaff_EDI;
  undefined1 local_584 [640];
  undefined1 local_304 [768];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  local_584[0] = 0;
  FUN_0083a980(local_584,0x280,&DAT_008b6f04,unaff_ESI[1]);
  FUN_0083c880(local_584,0x280,&DAT_008c67fc,param_2);
  if (unaff_EDI != 0) {
    FUN_0083c880(local_584,0x280,&DAT_008b6ce0);
  }
  local_304[0] = 0;
  FUN_0083acd0(local_304,0x300,&DAT_008b6e64,0x1004020);
  FUN_0083c880(local_304,0x300,&DAT_0089e98c,param_1);
  FUN_0083c880(local_304,0x300,&DAT_008b6e6c,local_584);
  FUN_008406c0(*unaff_ESI,0x6d657367,local_304,&LAB_0083cfb0);
  return;
}

