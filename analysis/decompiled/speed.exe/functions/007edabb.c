/* speed.exe 007edabb FUN_007edabb; analysis pseudocode, not buildable source.
 * calls 007ed83c FUN_007ed83c
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ed010 FUN_007ed010
 */

void __thiscall FUN_007edabb(int param_1,undefined4 param_2,code *param_3)

{
  int iVar1;
  
  FUN_007ed010(param_2);
  FUN_007ec1bd();
  iVar1 = FUN_007ed83c(param_2);
  if (param_1 == 0) {
    (*param_3)(*(undefined4 *)(iVar1 + 0xc),(int)*(char *)(iVar1 + 0x11),
               *(undefined4 *)(iVar1 + 0x18));
  }
  else {
    *(code **)(iVar1 + 0x1c) = param_3;
  }
  FUN_007ec1c8();
  return;
}

