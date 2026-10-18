/* speed.exe 0068ca60 FUN_0068ca60; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_0068ca60(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_3 + 0x24) = uVar1;
  *(undefined4 *)(param_3 + 0x28) = uVar2;
  *(undefined4 *)(param_3 + 0x2c) = 0x3f800000;
  return 0x3f800001;
}

