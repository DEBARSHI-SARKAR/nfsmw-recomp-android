/* speed.exe 007f5c49 FUN_007f5c49; analysis pseudocode, not buildable source.
 */

undefined4 FUN_007f5c49(undefined4 param_1)

{
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  switch(param_1) {
  case 0:
    uStack_8 = 0;
    break;
  case 1:
    uStack_8 = 1;
    break;
  case 2:
    uStack_8 = 2;
    break;
  case 3:
    uStack_8 = 4;
    break;
  case 4:
    uStack_8 = 5;
    break;
  case 5:
  case 7:
    uStack_8 = 6;
    break;
  case 6:
  case 8:
    uStack_8 = 0xb;
    break;
  case 9:
  case 10:
  case 0xe:
    uStack_8 = 9;
    break;
  case 0xb:
  case 0xc:
  case 0xf:
  case 0x10:
  case 0x15:
  case 0x17:
    uStack_8 = 7;
    break;
  case 0xd:
  case 0x13:
    uStack_8 = 8;
    break;
  case 0x11:
    uStack_8 = 0xc;
    break;
  case 0x12:
    uStack_8 = 10;
    break;
  case 0x14:
    uStack_8 = 3;
    break;
  case 0x16:
    uStack_8 = 0xe;
  }
  return uStack_8;
}

