/* speed.exe 007fa41e FUN_007fa41e; analysis pseudocode, not buildable source.
 * calls 007f774f FUN_007f774f
 */

undefined4 FUN_007fa41e(void)

{
  int in_EAX;
  undefined4 uVar1;
  
  if (in_EAX != 0) {
    uVar1 = FUN_007f774f(*(undefined4 *)(in_EAX + 4),4);
    return uVar1;
  }
  return 0x4d41446b;
}

