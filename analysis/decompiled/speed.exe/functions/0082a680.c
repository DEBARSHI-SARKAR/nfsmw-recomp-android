/* speed.exe 0082a680 FUN_0082a680; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_0082a680(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x74))(param_2);
  if (iVar1 != 0) {
    return 0xffffff44;
  }
  iVar1 = (**(code **)(*param_1 + 0x78))();
  if (iVar1 == 0) {
    return 0xfffffff3;
  }
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  *(undefined4 *)(iVar1 + 0x14) = 1;
  *(undefined4 *)(iVar1 + 0x1c) = param_3;
  *(undefined4 *)(iVar1 + 0x18) = 1;
  *(undefined4 *)(iVar1 + 4) = 100;
  return 0;
}

