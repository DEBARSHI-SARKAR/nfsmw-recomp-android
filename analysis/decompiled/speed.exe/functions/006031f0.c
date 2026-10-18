/* speed.exe 006031f0 FUN_006031f0; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 * calls 00600a20 FUN_00600a20
 */

void __fastcall FUN_006031f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00452430();
  uVar1 = FUN_00600a20(uVar1);
  *(undefined4 *)(param_1 + 0x1968) = uVar1;
  return;
}

