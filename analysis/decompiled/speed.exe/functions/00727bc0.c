/* speed.exe 00727bc0 FUN_00727bc0; analysis pseudocode, not buildable source.
 */

undefined4 * __thiscall FUN_00727bc0(int param_1,char param_2,undefined4 *param_3)

{
  while( true ) {
    if (param_2 == '\0') {
      if (param_3 == (undefined4 *)0x0) {
        param_3 = *(undefined4 **)(param_1 + 0x2c);
      }
      else {
        param_3 = (undefined4 *)param_3[1];
      }
    }
    else if (param_3 == (undefined4 *)0x0) {
      param_3 = *(undefined4 **)(param_1 + 0x28);
    }
    else {
      param_3 = (undefined4 *)*param_3;
    }
    if ((param_3 == (undefined4 *)(param_1 + 0x28)) || (param_3 == (undefined4 *)0x0)) break;
    if (*(char *)(param_3 + 4) != '\0') {
      return param_3;
    }
  }
  return (undefined4 *)0x0;
}

