/* speed.exe 008370d0 FUN_008370d0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_008370d0(int param_1,int param_2,undefined4 param_3)

{
  if ((*(int *)(param_1 + 0x1c) != 0) && (param_2 != 0)) {
    return 0xfffffffb;
  }
  *(int *)(param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return 0;
}

