/* speed.exe 00840d60 FUN_00840d60; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00840d60(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 == 0x646f626a) {
    *(undefined4 *)(param_1 + 0x10) = param_3;
    return uVar1;
  }
  if (param_2 == 0x6974696d) {
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = param_3;
    return uVar1;
  }
  if (param_2 == 0x7274696d) {
    uVar1 = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x34) = param_3;
  }
  return uVar1;
}

