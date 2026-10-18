/* speed.exe 00853180 FUN_00853180; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 * calls 00844970 FUN_00844970
 * calls 008450a0 FUN_008450a0
 * calls 008405d0 FUN_008405d0
 */

void FUN_00853180(char *param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x17e4) = in_EAX;
  FUN_008450a0();
  _strncpy((char *)(unaff_ESI + 0x17ec),param_1,0x24);
  *(undefined4 *)(unaff_ESI + 0x17e8) = param_2;
  FUN_008405d0();
  FUN_00844970();
  FUN_00844970();
  return;
}

