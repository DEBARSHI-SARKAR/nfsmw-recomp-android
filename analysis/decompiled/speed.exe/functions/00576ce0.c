/* speed.exe 00576ce0 FUN_00576ce0; analysis pseudocode, not buildable source.
 * calls 00576c90 FUN_00576c90
 */

void FUN_00576ce0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 0x17:
    FUN_00576c90(8,0);
    return;
  case 0x2c:
    FUN_00576c90(10,0);
    return;
  case 0x3e:
    FUN_00576c90(0xc,0);
    return;
  case 0x3f:
    FUN_00576c90(9,0);
    return;
  case 0x42:
    FUN_00576c90(0xb,0);
    return;
  case 0x4c:
    uVar1 = 0x10;
    break;
  case 0x4d:
    FUN_00576c90(0xe,0);
    return;
  case 0x53:
  case 0x5b:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x73:
  case 0x7b:
    FUN_00576c90(0xf,0);
    return;
  case 0x84:
    FUN_00576c90(0xd,0);
    return;
  }
  FUN_00576c90(uVar1,0);
  return;
}

