/* speed.exe 007f9d53 FUN_007f9d53; analysis pseudocode, not buildable source.
 * calls 007f774f FUN_007f774f
 */

undefined4 FUN_007f9d53(void)

{
  int in_EAX;
  undefined4 uVar1;
  
  if (in_EAX != 0) {
    uVar1 = FUN_007f774f(*(undefined4 *)(in_EAX + 4),4);
    return uVar1;
  }
  return 0x4d56304b;
}

