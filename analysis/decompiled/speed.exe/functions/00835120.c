/* speed.exe 00835120 FUN_00835120; analysis pseudocode, not buildable source.
 * calls 008350b3 FUN_008350b3
 * calls EXTERNAL:0000006b TlsSetValue
 * calls 00835054 FUN_00835054
 * calls EXTERNAL:0000006c TlsGetValue
 * calls EXTERNAL:00000068 TlsAlloc
 */

void FUN_00835120(LPVOID param_1,char param_2)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  
  if ((DAT_0090d2c8 == 0xffffffff) && (DAT_0090d2c8 = TlsAlloc(), DAT_0090d2c8 == 0xffffffff)) {
    return;
  }
  if (param_2 == '\0') {
    FUN_00835054(0);
  }
  else {
    if (param_1 == (LPVOID)0x0) {
      pvVar1 = TlsGetValue(DAT_0090d2c8);
      if (pvVar1 == (LPVOID)0x0) goto LAB_00835176;
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
      pvVar1 = param_1;
    }
    FUN_008350b3(pvVar1,uVar2);
  }
LAB_00835176:
  TlsSetValue(DAT_0090d2c8,param_1);
  return;
}

