/* speed.exe 0085ce10 FUN_0085ce10; analysis pseudocode, not buildable source.
 * calls 008461b0 FUN_008461b0
 */

uint FUN_0085ce10(undefined4 *param_1,int param_2,undefined4 *param_3,int param_4)

{
  if (param_2 == 0x63626670) {
    if ((param_3 != (undefined4 *)0x0) && (3 < param_4)) {
      *param_3 = *param_1;
      return 0;
    }
  }
  else if (param_2 == 0x63627570) {
    if ((param_3 != (undefined4 *)0x0) && (3 < param_4)) {
      *param_3 = param_1[1];
      return 0;
    }
  }
  else {
    if (param_2 == 0x6474696d) {
      return param_1[0x38];
    }
    if (param_2 == 0x696e676d) {
      return (uint)(param_1[99] != 0);
    }
    if (param_2 == 0x6c627566) {
      return param_1[0xc];
    }
    if (param_2 == 0x6d696e70) {
      return param_1[0x39];
    }
    if (param_2 == 0x6d6e676c) {
      return param_1[0x5d];
    }
    if (param_2 == 0x6d6f7574) {
      return param_1[0x3a];
    }
    if (param_2 == 0x6d776964) {
      return param_1[0x3a];
    }
    if (param_2 == 0x70656572) {
      return param_1[0x5e];
    }
    if (param_2 == 0x73657373) {
      FUN_008461b0(param_3,param_1 + 0x3c,param_4);
      return 0;
    }
    if (param_2 == 0x74797065) {
      return param_1[0xb];
    }
  }
  return 0xffffffff;
}

