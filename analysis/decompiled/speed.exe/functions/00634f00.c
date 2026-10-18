/* speed.exe 00634f00 FUN_00634f00; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 */

undefined4 FUN_00634f00(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_005d51f0(DAT_00934ce4,DAT_00934ce4 + DAT_00934cec * 8,param_1);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + 4);
    }
  }
  return 0;
}

