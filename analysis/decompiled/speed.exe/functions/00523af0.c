/* speed.exe 00523af0 FUN_00523af0; analysis pseudocode, not buildable source.
 * calls 007a9db0 FUN_007a9db0
 * calls 005910e0 FUN_005910e0
 * calls 00739a70 FUN_00739a70
 * calls 00523880 FUN_00523880
 * calls 00523930 FUN_00523930
 * calls 005926b0 FUN_005926b0
 */

void __fastcall FUN_00523af0(int param_1)

{
  undefined1 local_310 [784];
  
  FUN_00739a70(0xffffffff,0,0,0);
  FUN_005910e0(*(undefined4 *)(param_1 + 0x3c),0,local_310);
  FUN_007a9db0(local_310,1,0);
  FUN_00523880();
  FUN_00523930();
  FUN_005926b0(1);
  return;
}

