/* speed.exe 00734c40 FUN_00734c40; analysis pseudocode, not buildable source.
 * calls 0078a310 FUN_0078a310
 * calls 00733f40 FUN_00733f40
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 */

void __thiscall FUN_00734c40(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_007ec1bd();
  FUN_00733f40(param_2,param_3,*(undefined1 *)(param_1 + 0xf9d));
  FUN_0078a310(*(undefined1 *)(param_1 + 0xf9e),1);
  FUN_007ec1c8();
  return;
}

