/* speed.exe 007ed960 FUN_007ed960; analysis pseudocode, not buildable source.
 * calls 007ed83c FUN_007ed83c
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ed010 FUN_007ed010
 */

void __thiscall FUN_007ed960(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_007ed010(param_2);
  FUN_007ec1bd();
  piVar2 = (int *)FUN_007ed83c(param_2);
  if ((piVar2 != (int *)0x0) && (param_1 != 0)) {
    (**(code **)(*piVar2 + 0xc))(uVar1);
  }
  FUN_007ec1c8();
  return;
}

