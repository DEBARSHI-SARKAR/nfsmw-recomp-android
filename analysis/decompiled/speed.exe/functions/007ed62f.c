/* speed.exe 007ed62f FUN_007ed62f; analysis pseudocode, not buildable source.
 * calls 007ee5a3 FUN_007ee5a3
 * calls 007ee5c3 FUN_007ee5c3
 */

int FUN_007ed62f(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_009bb13c;
  iVar2 = FUN_007ee5c3();
  *(undefined4 *)(iVar2 + 0x80) = param_1;
  FUN_007ee5a3(iVar2);
  return (iVar2 - *(int *)(iVar1 + 0x98)) / 0x84;
}

