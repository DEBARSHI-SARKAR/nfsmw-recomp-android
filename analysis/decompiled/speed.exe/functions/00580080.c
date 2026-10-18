/* speed.exe 00580080 FUN_00580080; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00580080(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 + 0x36);
  if ((undefined4 *)(param_2 + 9U) <= puVar1) {
    *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 8);
  }
  if ((undefined4 *)(param_2 + 10U) <= puVar1) {
    *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_2 + 9U);
  }
  if ((undefined4 *)(param_2 + 0xbU) <= puVar1) {
    *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_2 + 10U);
  }
  if ((undefined4 *)(param_2 + 0x1fU) <= puVar1) {
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0xbU);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0xf);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x13);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x17);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x1b);
  }
  if ((undefined4 *)(param_2 + 0x33U) <= puVar1) {
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x1fU);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x23);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0x27);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x2b);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0x2f);
  }
  *(undefined2 *)(param_1 + 0x3b) = *(undefined2 *)(param_2 + 0x33U);
  *(undefined1 *)(param_1 + 0x3d) = *(undefined1 *)(param_2 + 0x35);
  return;
}

