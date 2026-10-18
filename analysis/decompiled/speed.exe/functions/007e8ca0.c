/* speed.exe 007e8ca0 FUN_007e8ca0; analysis pseudocode, not buildable source.
 * calls 007e8c50 FUN_007e8c50
 */

byte __fastcall FUN_007e8ca0(uint *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = *param_1 & 0xff;
  switch(uVar2) {
  case 0x69:
    return 0x80;
  case 0x6f:
    return 0x20;
  case 0x7c:
    return 0x10;
  case 0x81:
    return 1;
  }
  switch(uVar2) {
  case 0x29:
  case 0x2a:
  case 0x2d:
  case 0x2f:
  case 0x32:
    return 4;
  default:
    cVar1 = FUN_007e8c50(uVar2);
    return -(cVar1 != '\0') & 2;
  }
}

