/* speed.exe 00845f00 FUN_00845f00; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 00845e90 FUN_00845e90
 * calls 00856d90 FUN_00856d90
 * calls 00856dc0 FUN_00856dc0
 * calls 00856e70 FUN_00856e70
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00845f00(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 local_60 [92];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  FUN_00856d90(local_60);
  FUN_00856dc0(local_60,param_1,param_2);
  pbVar3 = param_1;
joined_r0x00845f33:
  if (pbVar3 != (byte *)0x0) {
    pbVar4 = (byte *)0x0;
    do {
      bVar1 = *pbVar3;
      uVar2 = (uint)bVar1;
      if (((char)bVar1 < '0') || ('9' < (char)bVar1)) {
        if ((((char)bVar1 < 'a') || ('f' < (char)bVar1)) &&
           (((char)bVar1 < 'A' || ('F' < (char)bVar1)))) goto LAB_00845f71;
        if ('9' < (char)bVar1) {
          uVar2 = (uint)(byte)(bVar1 + 9);
        }
      }
      pbVar4 = (byte *)(uVar2 & 0xf | (int)pbVar4 << 4);
      pbVar3 = pbVar3 + 1;
    } while( true );
  }
LAB_00845fcb:
  FUN_00856dc0(local_60,param_1,param_2);
  FUN_00856e70(local_60,param_3,param_4);
  return;
LAB_00845f71:
  if (*pbVar3 == 0x3a) {
    pbVar3 = (byte *)FUN_00845e90();
    if (*pbVar3 == 0x2c) {
      pbVar3 = pbVar3 + 1;
    }
  }
  else {
    pbVar3 = (byte *)0x0;
  }
  if ((pbVar4 == (byte *)0x0) || (param_1 == (byte *)0x0)) goto LAB_00845fcb;
  if ((DAT_0090d358 <= pbVar4) && ((param_1 < DAT_0090d35c && (pbVar4 < param_1)))) {
    FUN_00856dc0(local_60,pbVar4,(int)param_1 - (int)pbVar4);
  }
  goto joined_r0x00845f33;
}

