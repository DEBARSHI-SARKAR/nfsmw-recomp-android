/* speed.exe 0078d630 FUN_0078d630; analysis pseudocode, not buildable source.
 * calls 00842b10 FUN_00842b10
 */

void __fastcall FUN_0078d630(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00842b10(param_1[1],0,0);
  (**(code **)(*param_1 + 0x48))(uVar1);
  return;
}

