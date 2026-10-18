/* speed.exe 007ea930 FUN_007ea930; analysis pseudocode, not buildable source.
 */

uint FUN_007ea930(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((((param_1 != 0x60) && (uVar1 = 0, param_1 != 0x61)) && (uVar1 = param_1 - 0x62, uVar1 != 0))
     && (param_1 != 0x68)) {
    uVar1 = (byte)(&DAT_008c1798)[param_1 & 0xff] - 8;
    switch((&DAT_008c1798)[param_1 & 0xff]) {
    case 8:
    case 0xf:
    case 0x10:
    case 0x20:
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}

