/* speed.exe 008575b0 FUN_008575b0; analysis pseudocode, not buildable source.
 * calls 008572d0 FUN_008572d0
 */

void FUN_008575b0(void)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(in_EAX + 0xfc);
  iVar3 = 0x800;
  if (iVar1 != *(int *)(in_EAX + 0x100)) {
    do {
      iVar3 = iVar3 - *(int *)(*(int *)(in_EAX + 0x104) + iVar1);
      iVar1 = (*(int *)(in_EAX + 0xf0) + iVar1) % *(int *)(in_EAX + 0xf4);
    } while (iVar1 != *(int *)(in_EAX + 0x100));
  }
  if (*(int *)(in_EAX + 0x100) != *(int *)(in_EAX + 0xf8)) {
    while ((piVar2 = (int *)(*(int *)(in_EAX + 0x104) + *(int *)(in_EAX + 0x100)),
           *(int *)(in_EAX + 0x100) == *(int *)(in_EAX + 0xfc) || (*piVar2 <= iVar3))) {
      iVar3 = iVar3 - *piVar2;
      piVar2[3] = *(int *)(in_EAX + 0xec) + -1;
      if (*(code **)(in_EAX + 0x38) != (code *)0x0) {
        (**(code **)(in_EAX + 0x38))();
      }
      iVar1 = FUN_008572d0();
      if (iVar1 < 0) {
        return;
      }
      iVar1 = (*(int *)(in_EAX + 0xf0) + *(int *)(in_EAX + 0x100)) % *(int *)(in_EAX + 0xf4);
      *(int *)(in_EAX + 0x100) = iVar1;
      if (iVar1 == *(int *)(in_EAX + 0xf8)) {
        return;
      }
    }
  }
  return;
}

