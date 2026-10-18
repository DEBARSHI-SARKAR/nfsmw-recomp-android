/* speed.exe 0041ad40 FUN_0041ad40; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 */

undefined4 FUN_0041ad40(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_1);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + 4);
    }
  }
  return 0;
}

