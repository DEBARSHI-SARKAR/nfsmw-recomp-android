/* speed.exe 005a3b60 FUN_005a3b60; analysis pseudocode, not buildable source.
 * calls 005910e0 FUN_005910e0
 * calls 007a9db0 FUN_007a9db0
 * calls 00739a70 FUN_00739a70
 */

void __fastcall FUN_005a3b60(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 local_310 [784];
  
  FUN_00739a70(0xffffffff,0,0,0);
  if ((((*(byte *)(param_1 + 300) & 1) == 0) && ((*(uint *)(param_1 + 300) >> 0x10 & 1) == 0)) &&
     ((*(uint *)(param_1 + 300) >> 8 & 1) == 0)) {
    FUN_005910e0(*(undefined4 *)(param_1 + 0x2c + *(int *)(param_1 + 0x18) * 0x18),0,local_310);
  }
  else {
    uVar1 = *(uint *)(DAT_0091cf90 + 300);
    if ((((uVar1 >> 2 & 1) == 0) && ((uVar1 >> 6 & 1) == 0)) && ((uVar1 >> 3 & 1) == 0)) {
      uVar2 = *(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xa8);
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x2c + *(int *)(param_1 + 0x18) * 0x18);
    }
    FUN_005910e0(uVar2,0,local_310);
  }
  FUN_007a9db0(local_310,2,0);
  return;
}

