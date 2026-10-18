/* speed.exe 007e8c50 FUN_007e8c50; analysis pseudocode, not buildable source.
 */

undefined1 FUN_007e8c50(uint param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((&DAT_008c1548)[param_1 & 0xff] != '\0') {
    switch(param_1) {
    case 0x29:
    case 0x2a:
    case 0x2d:
    case 0x2f:
    case 0x32:
      break;
    default:
      uVar1 = 1;
    }
  }
  return uVar1;
}

