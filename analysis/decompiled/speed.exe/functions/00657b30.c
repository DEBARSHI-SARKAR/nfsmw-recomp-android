/* speed.exe 00657b30 FUN_00657b30; analysis pseudocode, not buildable source.
 */

void FUN_00657b30(int param_1,int param_2,int param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -0x24) {
    *(undefined4 *)(param_3 + -0x24) = *(undefined4 *)(param_2 + -0x24);
    *(undefined4 *)(param_3 + -0x20) = *(undefined4 *)(param_2 + -0x20);
    *(undefined4 *)(param_3 + -0x1c) = *(undefined4 *)(param_2 + -0x1c);
    *(undefined4 *)(param_3 + -0x18) = *(undefined4 *)(param_2 + -0x18);
    *(undefined4 *)(param_3 + -0x14) = *(undefined4 *)(param_2 + -0x14);
    *(undefined4 *)(param_3 + -0x10) = *(undefined4 *)(param_2 + -0x10);
    *(undefined4 *)(param_3 + -0xc) = *(undefined4 *)(param_2 + -0xc);
    *(undefined4 *)(param_3 + -8) = *(undefined4 *)(param_2 + -8);
    *(undefined1 *)(param_3 + -4) = *(undefined1 *)(param_2 + -4);
    param_3 = param_3 + -0x24;
  }
  return;
}

