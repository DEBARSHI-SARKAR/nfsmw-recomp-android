/* speed.exe 00828952 FUN_00828952; analysis pseudocode, not buildable source.
 */

void FUN_00828952(char param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  if (param_1 == '\x01') {
    *param_2 = param_3[1];
    uVar1 = *param_3;
  }
  else {
    *param_2 = *param_3;
    uVar1 = param_3[1];
  }
  param_2[1] = uVar1;
  return;
}

