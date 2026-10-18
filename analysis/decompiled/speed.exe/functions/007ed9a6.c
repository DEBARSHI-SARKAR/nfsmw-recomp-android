/* speed.exe 007ed9a6 FUN_007ed9a6; analysis pseudocode, not buildable source.
 * calls 007ed83c FUN_007ed83c
 * calls 007ec2d0 FUN_007ec2d0
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ed90b FUN_007ed90b
 * calls EXTERNAL:0000009c WaitForSingleObject
 * calls EXTERNAL:00000046 ResetEvent
 * calls 007ec59c FUN_007ec59c
 * calls 007ed010 FUN_007ed010
 * calls 007ec298 FUN_007ec298
 */

undefined4 __thiscall FUN_007ed9a6(byte param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    iVar2 = FUN_007ed010(param_2);
    if (*(int *)(iVar2 + 4) == 0) {
      uVar3 = 0xfffffffd;
    }
    else {
      while( true ) {
        FUN_007ec1bd();
        iVar2 = FUN_007ed83c(param_2);
        param_1 = param_1 & iVar2 != 0;
        FUN_007ec1c8();
        if (param_1 == 0) break;
        cVar1 = FUN_007ec2d0(0);
        if (cVar1 == '\0') {
          iVar2 = FUN_007ed010(param_2);
          WaitForSingleObject(*(HANDLE *)(iVar2 + 0x78),0xffffffff);
          ResetEvent(*(HANDLE *)(iVar2 + 0x78));
        }
        else {
          FUN_007ec59c();
          FUN_007ec298(1);
        }
      }
      uVar3 = FUN_007ed90b(param_2);
    }
    return uVar3;
  }
  return 0xfffffffd;
}

