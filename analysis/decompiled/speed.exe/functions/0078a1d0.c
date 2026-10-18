/* speed.exe 0078a1d0 FUN_0078a1d0; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 */

int __fastcall FUN_0078a1d0(int param_1)

{
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  FUN_00460c70(param_1,&DAT_00890978);
  return param_1;
}

