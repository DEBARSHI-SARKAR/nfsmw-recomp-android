/* speed.exe 00841800 FUN_00841800; analysis pseudocode, not buildable source.
 * calls 0083c880 FUN_0083c880
 * calls 0078af30 FUN_0078af30
 * calls 00851950 FUN_00851950
 * calls 007c97c0 FUN_007c97c0
 * calls 007c6100 _sprintf
 * calls 007d6cb0 __security_check_cookie
 * calls 0078af20 thunk_FUN_004655f0
 * calls 0083bbe0 FUN_0083bbe0
 * calls 00844340 FUN_00844340
 * calls 00844940 FUN_00844940
 * calls 0083a630 FUN_0083a630
 * calls 00841160 FUN_00841160
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_00841800(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char local_24 [32];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  piVar1 = (int *)FUN_0078af30(0x20f8);
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1;
    for (iVar3 = 0x83e; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar2 = 0;
      piVar2 = piVar2 + 1;
    }
    if (param_1 != 0) {
      iVar3 = FUN_007c97c0(param_1,0x3d);
      piVar2 = piVar1 + 0x12;
      if (iVar3 == 0) {
        FUN_0083c880(piVar2,0x100,&DAT_008b6da0,param_1);
      }
      else {
        FUN_0083a630(piVar2,0x100);
      }
      _sprintf(local_24,"%c.%c.%c.%c",0x33,0x39,0x33,0x30);
      FUN_0083c880(piVar2,0x100,"SDKVERS",local_24);
      FUN_0083c880(piVar2,0x100,"BUILDDATE","Oct 19 2005");
    }
    iVar3 = FUN_00851950(0x2000);
    *piVar1 = iVar3;
    if (iVar3 == 0) {
      thunk_FUN_004655f0(piVar1);
      return (int *)0x0;
    }
    iVar3 = FUN_00844340(0x80);
    piVar1[1] = iVar3;
    piVar1[0x74b] = param_3;
    piVar1[0x74a] = param_2;
    piVar1[0xb] = 120000;
    piVar1[0xc] = 60000;
    piVar1[0xd] = 30000;
    piVar2 = piVar1 + 0x628;
    iVar3 = 0x20;
    do {
      *piVar2 = -1;
      piVar2 = piVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    FUN_00844940(piVar1);
    FUN_00841160(0,0);
    iVar3 = FUN_0083bbe0(0,0);
    piVar1[0x74f] = iVar3;
  }
  return piVar1;
}

