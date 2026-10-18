/* speed.exe 007a6f20 FUN_007a6f20; analysis pseudocode, not buildable source.
 * calls 00588250 FUN_00588250
 * calls 0045d3a0 FUN_0045d3a0
 */

undefined4 FUN_007a6f20(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0045d3a0(0);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_00588250(iVar3);
      if (((byte)*(undefined4 *)(*(int *)(iVar2 + 0x18) + 0x20) & 0xf0) == 0x20) {
        return *(undefined4 *)(iVar2 + 0x18);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}

