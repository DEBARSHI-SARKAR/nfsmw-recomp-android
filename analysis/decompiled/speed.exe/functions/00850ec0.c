/* speed.exe 00850ec0 FUN_00850ec0; analysis pseudocode, not buildable source.
 * calls 0084af40 FUN_0084af40
 * calls 007d6cb0 __security_check_cookie
 * calls 0084b350 FUN_0084b350
 * calls 0084fcc0 FUN_0084fcc0
 * calls 0084afb0 FUN_0084afb0
 * calls 0084b560 FUN_0084b560
 * calls 0083f840 FUN_0083f840
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall FUN_00850ec0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if (*(int *)(param_1 + 0x94) != 1) {
    FUN_0084af40();
    return -2;
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_0084fcc0();
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  local_14 = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  local_10 = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  local_c = 0;
  local_8 = 0;
  iVar3 = DAT_009c3cfc;
  do {
    if (iVar3 == 0) {
      iVar3 = FUN_0084afb0();
      if (iVar3 < 0) {
        *(undefined4 *)(param_1 + 0x94) = 0;
        FUN_0084af40();
        return (uint)(iVar3 != -0xb) * 4 + -9;
      }
      *(undefined4 *)(param_1 + 0x80) = unaff_EBX;
      *(undefined4 *)(param_1 + 0x48) = unaff_EBX;
      FUN_0084b560();
LAB_00851002:
      *(undefined4 *)(param_1 + 0x94) = 3;
      return 0;
    }
    if ((((iVar3 != param_1) && (*(int *)(iVar3 + 0x80) != 0)) &&
        (iVar2 = FUN_0084b350(*(int *)(iVar3 + 0x80),0x62696e64,&local_14,0x10), -1 < iVar2)) &&
       (iVar2 = FUN_0083f840(param_2,&local_14), iVar2 == 0)) {
      uVar1 = *(undefined4 *)(iVar3 + 0x80);
      *(undefined4 *)(param_1 + 0x80) = uVar1;
      *(undefined4 *)(param_1 + 0x48) = uVar1;
      FUN_0084af40();
      goto LAB_00851002;
    }
    iVar3 = *(int *)(iVar3 + 0x7c);
  } while( true );
}

