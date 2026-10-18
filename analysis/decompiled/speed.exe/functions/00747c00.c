/* speed.exe 00747c00 FUN_00747c00; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_00747c00(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (-1 < param_2) {
    for (puVar1 = (undefined4 *)*param_1; puVar1 != param_1; puVar1 = (undefined4 *)*puVar1) {
      if (param_2 < (int)puVar1[0xe]) {
        return param_2 * 0xe + puVar1[0xd];
      }
      param_2 = param_2 - puVar1[0xe];
    }
  }
  return 0;
}

