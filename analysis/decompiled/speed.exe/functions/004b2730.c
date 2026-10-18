/* speed.exe 004b2730 FUN_004b2730; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004b2730(int param_1)

{
  int in_EAX;
  int iVar1;
  
  if (in_EAX == *(int *)(param_1 + 0x68)) {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(in_EAX + 0xc);
  }
  else {
    *(undefined4 *)(*(int *)(in_EAX + 8) + 0xc) = *(undefined4 *)(in_EAX + 0xc);
  }
  if (in_EAX == *(int *)(param_1 + 0x70)) {
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(in_EAX + 8);
  }
  else {
    *(undefined4 *)(*(int *)(in_EAX + 0xc) + 8) = *(undefined4 *)(in_EAX + 8);
  }
  if (in_EAX == *(int *)(param_1 + 0x6c)) {
    iVar1 = *(int *)(in_EAX + 0xc);
    if (iVar1 == 0) {
      iVar1 = *(int *)(in_EAX + 8);
    }
    *(int *)(param_1 + 0x6c) = iVar1;
  }
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 0xc) = *(undefined4 *)(param_1 + 0x74);
  *(int *)(param_1 + 0x74) = in_EAX;
  return;
}

