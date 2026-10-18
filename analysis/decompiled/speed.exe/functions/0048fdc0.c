/* speed.exe 0048fdc0 FUN_0048fdc0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0048fdc0(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar1 = **(ushort **)(param_2 + 4);
  }
  else {
    if (**(ushort **)(param_2 + 4) < **(ushort **)(*(int *)(param_1 + 0xc) + 4)) goto LAB_0048fe0f;
    (**(code **)(*DAT_009117f4 + 0x18))(*(int *)(param_1 + 0x14));
    uVar1 = **(ushort **)(param_2 + 4);
  }
  uVar2 = (**(code **)(*DAT_009117f4 + 0x14))((uint)uVar1 << 2);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
LAB_0048fe0f:
  *(int *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}

