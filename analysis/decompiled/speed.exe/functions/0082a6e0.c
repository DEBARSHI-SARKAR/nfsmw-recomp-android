/* speed.exe 0082a6e0 FUN_0082a6e0; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_0082a6e0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x74))(param_2);
  if (iVar2 == 0) {
    return 0xfffffff8;
  }
  uVar1 = *(undefined4 *)(iVar2 + 0x1c);
  (**(code **)(*param_1 + 0x88))(param_2);
  return uVar1;
}

