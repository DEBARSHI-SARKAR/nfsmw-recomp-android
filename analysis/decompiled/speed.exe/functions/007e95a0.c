/* speed.exe 007e95a0 FUN_007e95a0; analysis pseudocode, not buildable source.
 */

uint FUN_007e95a0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0x79) {
    uVar1 = 0;
    if (param_1 - 0x7bU != 0) {
      uVar1 = param_1 - 0x7bU & 0xffffff00;
      switch(param_1) {
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        break;
      default:
        goto switchD_007e95bc_default;
      }
    }
  }
  uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
switchD_007e95bc_default:
  return uVar1;
}

