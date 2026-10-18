/* speed.exe 007a3c70 FUN_007a3c70; analysis pseudocode, not buildable source.
 */

undefined4 FUN_007a3c70(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 0x13624f) {
    if (uVar1 == 0x13624e) {
      return 10;
    }
    switch(uVar1) {
    case 0x965f:
      return 2;
    case 0x9660:
      return 3;
    case 0x9661:
      return 4;
    case 0x9662:
      return 5;
    case 0x9663:
      return 6;
    case 0x9664:
      return 7;
    case 0x9665:
      return 8;
    case 0x9666:
      return 9;
    }
  }
  else {
    switch(uVar1) {
    case 0x13624f:
      return 0xb;
    case 0x136250:
      return 0xc;
    case 0x136251:
      return 0xd;
    case 0x136252:
      return 0xe;
    case 0x136253:
      return 0xf;
    }
  }
  return 0xffffffff;
}

