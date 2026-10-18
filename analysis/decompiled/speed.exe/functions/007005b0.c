/* speed.exe 007005b0 FUN_007005b0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_007005b0(undefined4 param_1)

{
  switch(param_1) {
  case 1:
  case 2:
  case 4:
  case 0x20:
  case 0x40:
    return 1;
  default:
    return 0;
  case 8:
    return 2;
  case 0x10:
    return 4;
  }
}

