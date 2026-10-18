/* speed.exe 007f3f23 FUN_007f3f23; analysis pseudocode, not buildable source.
 * calls 007f3ec3 FUN_007f3ec3
 * calls 007f3dba FUN_007f3dba
 * calls 007f3ea5 FUN_007f3ea5
 */

undefined4 FUN_007f3f23(void)

{
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  
  FUN_007f3dba();
  *(undefined4 *)(extraout_EDX + 0x2c) = 0;
  *(undefined4 *)(extraout_EDX + 0x30) = 0;
  FUN_007f3ea5();
  FUN_007f3ec3();
  return extraout_EDX_00;
}

