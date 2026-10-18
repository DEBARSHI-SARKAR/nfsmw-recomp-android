/* speed.exe 0082c380 FUN_0082c380; analysis pseudocode, not buildable source.
 * calls 0082bfd0 FUN_0082bfd0
 */

void FUN_0082c380(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0082bfd0(*(uint *)(param_1 + 0xc) & 0xffffff,0xffffffff);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x10) =
         *(uint *)(iVar1 + 0x10) ^ (param_2 << 0x11 ^ *(uint *)(iVar1 + 0x10)) & 0x20000;
  }
  return;
}

