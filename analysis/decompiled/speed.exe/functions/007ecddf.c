/* speed.exe 007ecddf FUN_007ecddf; analysis pseudocode, not buildable source.
 * calls 007f0e0f FUN_007f0e0f
 * calls 007f0df9 FUN_007f0df9
 */

undefined1 FUN_007ecddf(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (0x50 < iVar1) {
    FUN_007f0df9(param_1,iVar1);
  }
  FUN_007f0e0f(param_1,&DAT_009076d8,iVar1);
  return 1;
}

