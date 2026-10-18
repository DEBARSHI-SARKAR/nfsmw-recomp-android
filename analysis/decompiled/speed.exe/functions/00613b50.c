/* speed.exe 00613b50 FUN_00613b50; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00613b50(int param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int in_EAX;
  
  uVar2 = *(ushort *)(in_EAX + 0x2c);
  if (*(int *)(in_EAX + 0x28) != 0) {
    (*DAT_0091e0e4)(param_1,*(int *)(in_EAX + 0x28),(uint)uVar2 * 0x18,0xb);
    if (param_1 != 0) {
      piVar1 = (int *)(*(int *)(param_1 + 0x10) + 0x24);
      *piVar1 = *piVar1 + (uint)uVar2 * -0x18;
    }
  }
  iVar3 = *(int *)(in_EAX + 0x20);
  if (*(int *)(in_EAX + 0x1c) != 0) {
    (*DAT_0091e0e4)(param_1,*(int *)(in_EAX + 0x1c),iVar3 * 8,6);
    if (param_1 != 0) {
      piVar1 = (int *)(*(int *)(param_1 + 0x10) + 0x24);
      *piVar1 = *piVar1 + iVar3 * -8;
    }
  }
  return;
}

