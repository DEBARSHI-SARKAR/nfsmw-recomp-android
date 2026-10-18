/* speed.exe 0073ac30 FUN_0073ac30; analysis pseudocode, not buildable source.
 * calls 0073ab90 FUN_0073ab90
 */

undefined1 FUN_0073ac30(int *param_1)

{
  undefined1 uVar1;
  
  switch(*(undefined4 *)(*param_1 + 0x24)) {
  case 0x530b82b0:
    uVar1 = FUN_0073ab90(&DAT_009ae930,param_1);
    return uVar1;
  case 0x530b82b1:
    uVar1 = FUN_0073ab90(&DAT_009ae980,param_1);
    return uVar1;
  case 0x530b82b2:
    uVar1 = FUN_0073ab90(&DAT_009ae9d0,param_1);
    return uVar1;
  case 0x530b82b3:
    uVar1 = FUN_0073ab90(&DAT_009aea20,param_1);
    return uVar1;
  default:
    return 0;
  }
}

