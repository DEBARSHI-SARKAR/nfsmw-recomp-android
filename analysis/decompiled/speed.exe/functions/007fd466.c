/* speed.exe 007fd466 FUN_007fd466; analysis pseudocode, not buildable source.
 * calls 007fc5f5 FUN_007fc5f5
 * calls 007fd429 FUN_007fd429
 */

undefined4 FUN_007fd466(void)

{
  int in_EAX;
  int iVar1;
  
  FUN_007fd429();
  iVar1 = FUN_007fc5f5(0xa0,0);
  *(int *)(in_EAX + 0x188) = iVar1;
  if (iVar1 != 0) {
    *(uint *)(in_EAX + 0x180) = iVar1 + 0x1fU & 0xffffffe0;
    iVar1 = FUN_007fc5f5(0xa0,0);
    *(int *)(in_EAX + 0x18c) = iVar1;
    if (iVar1 != 0) {
      *(uint *)(in_EAX + 0x184) = iVar1 + 0x1fU & 0xffffffe0;
      return 1;
    }
  }
  FUN_007fd429();
  return 0;
}

