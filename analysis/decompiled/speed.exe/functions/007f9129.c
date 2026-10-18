/* speed.exe 007f9129 FUN_007f9129; analysis pseudocode, not buildable source.
 * calls 007f1bf7 FUN_007f1bf7
 */

undefined4 * __thiscall FUN_007f9129(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  
  if ((param_2 & 2) == 0) {
    puVar1 = param_1;
    if ((param_2 & 1) != 0) {
      (*DAT_00909e58)(param_1);
    }
  }
  else {
    puVar1 = param_1 + -1;
    FUN_007f1bf7(param_1,0x34,*puVar1,&DAT_007f84e4);
    if ((param_2 & 1) != 0) {
      (*DAT_00909e58)(puVar1);
    }
  }
  return puVar1;
}

