/* speed.exe 007a4b10 FUN_007a4b10; analysis pseudocode, not buildable source.
 * calls 00739a70 FUN_00739a70
 * calls 00739c70 FUN_00739c70
 * calls 005910e0 FUN_005910e0
 * calls 007594a0 FUN_007594a0
 */

void __thiscall FUN_007a4b10(int param_1,undefined4 param_2)

{
  undefined1 local_310 [784];
  
  FUN_00739a70(0xffffffff,0,0,0);
  FUN_005910e0(**(undefined4 **)(param_1 + 4),0,local_310);
  FUN_007594a0();
  FUN_00739c70(param_2);
  return;
}

