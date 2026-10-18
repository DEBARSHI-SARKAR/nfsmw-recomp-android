/* speed.exe 00841510 FUN_00841510; analysis pseudocode, not buildable source.
 * calls 00841160 FUN_00841160
 */

void FUN_00841510(void)

{
  int iVar1;
  int in_EAX;
  int unaff_EDI;
  
  if (*(int *)(in_EAX + 8) != 0x6f66666c) {
    iVar1 = *(int *)(in_EAX + 0x18);
    if ((iVar1 != 0) && (5000 < unaff_EDI - iVar1)) {
      *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + (unaff_EDI - iVar1);
    }
    if (*(int *)(in_EAX + 0x14) - unaff_EDI < 0) {
      FUN_00841160(0x74696d65,0);
    }
    if ((*(int *)(in_EAX + 0x1d20) != 0) &&
       (*(int *)(in_EAX + 0x34) < unaff_EDI - *(int *)(in_EAX + 0x1a28))) {
      FUN_00841160(0x74696d65,0);
    }
    *(int *)(in_EAX + 0x18) = unaff_EDI;
  }
  return;
}

