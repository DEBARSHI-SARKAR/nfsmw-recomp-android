/* speed.exe 007ff091 FUN_007ff091; analysis pseudocode, not buildable source.
 */

void FUN_007ff091(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,undefined4 param_7,int param_8)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_6 * param_8 != 0) {
    do {
      *(undefined1 *)(uVar1 + param_5) = *param_1;
      uVar1 = uVar1 + param_6;
      param_1 = param_1 + param_2 * 2;
    } while (uVar1 < (uint)(param_6 * param_8));
  }
  return;
}

