/* speed.exe 0083f200 FUN_0083f200; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 0083ef10 FUN_0083ef10
 * calls 0083edb0 FUN_0083edb0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall FUN_0083f200(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  while (param_1[0x75] < 1) {
    param_1[0x75] = 1;
    iVar3 = FUN_0083ef10();
    param_1[0x75] = 0;
    if (iVar3 < 1) break;
    param_1[0x74] = param_1[0x74] + 1;
  }
  param_1[0x71] = 0;
  iVar3 = (**(code **)(*param_1 + 0x28))(*param_1);
  param_1[9] = iVar3;
  uVar4 = iVar3 - param_1[0x19];
  param_1[10] = param_1[10] + 1;
  if (999 < uVar4) {
    iVar1 = param_1[0x61];
    iVar2 = *param_1;
    param_1[0x61] = 0;
    param_1[0x16] = (uint)(iVar1 * 1000) / uVar4;
    iVar1 = param_1[0x62];
    param_1[0x62] = 0;
    param_1[0x17] = (uint)(iVar1 * 1000) / uVar4;
    param_1[0x18] =
         (uint)((((*(int *)(iVar2 + 100) - param_1[100]) * 0x29 - param_1[99]) +
                *(int *)(iVar2 + 0x5c)) * 1000) / uVar4;
    param_1[99] = *(int *)(iVar2 + 0x5c);
    param_1[100] = *(int *)(iVar2 + 100);
    param_1[0x19] = iVar3;
  }
  if ((param_1[0x12] != 0) && (100 < (uint)(iVar3 - param_1[0x12]))) {
    param_1[0x12] = 0;
    param_1[0x14] = iVar3;
  }
  if (((param_1[0x14] != 0) && (100 < (uint)(iVar3 - param_1[0x14]))) &&
     ((uint)(iVar3 - param_1[0x10]) < 0x32)) {
    param_1[0x14] = 0;
    param_1[0x12] = iVar3;
  }
  if ((param_1[0x13] != 0) && (100 < (uint)(iVar3 - param_1[0x13]))) {
    param_1[0x13] = 0;
    param_1[0x15] = iVar3;
  }
  if (((param_1[0x15] != 0) && (100 < (uint)(iVar3 - param_1[0x15]))) &&
     ((uint)(iVar3 - param_1[0x11]) < 0x32)) {
    param_1[0x15] = 0;
    param_1[0x13] = iVar3;
  }
  if (500 < (uint)(iVar3 - param_1[2])) {
    iVar3 = (**(code **)(*param_1 + 0x2c))(*param_1,0,0,0);
    if ((0 < iVar3) && (iVar3 < 8)) {
      FUN_0083edb0();
    }
  }
  return;
}

