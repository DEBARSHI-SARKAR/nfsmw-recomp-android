/* speed.exe 0058aa90 FUN_0058aa90; analysis pseudocode, not buildable source.
 * calls 0058a680 FUN_0058a680
 */

undefined1 FUN_0058aa90(uint param_1)

{
  undefined1 uVar1;
  
  if ((param_1 & 2) != 0) {
    uVar1 = FUN_0058a680();
    return uVar1;
  }
  return 0;
}

