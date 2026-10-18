/* speed.exe 0073cfa0 FUN_0073cfa0; analysis pseudocode, not buildable source.
 */

void __thiscall
FUN_0073cfa0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,float *param_5,
            undefined4 *param_6,undefined4 *param_7)

{
  param_1 = param_2 * 0x1c + param_1;
  *param_3 = *(undefined4 *)(param_1 + 4);
  *param_4 = *(undefined4 *)(param_1 + 8);
  *param_5 = *(float *)(param_1 + 0xc) / *(float *)(param_1 + 0x10);
  *param_6 = *(undefined4 *)(param_1 + 0x14);
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = *(undefined4 *)(param_1 + 0x1c);
  }
  return;
}

