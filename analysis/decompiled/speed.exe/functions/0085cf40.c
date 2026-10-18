/* speed.exe 0085cf40 FUN_0085cf40; analysis pseudocode, not buildable source.
 * calls 00864850 FUN_00864850
 * calls 008461b0 FUN_008461b0
 * calls 00864c80 FUN_00864c80
 */

undefined4
FUN_0085cf40(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  if (param_2 == 0x6175746f) {
    param_1[0x60] = param_3;
    return 0;
  }
  if (param_2 == 0x63626670) {
    *param_1 = param_5;
    return 0;
  }
  if (param_2 == 0x63627570) {
    param_1[1] = param_5;
    return 0;
  }
  if (param_2 == 0x64697374) {
    if (param_3 < (int)param_1[100]) {
      param_1[param_3 * 0x2c + 0x8e] = param_5;
      return 0;
    }
  }
  else {
    if (param_2 == 0x64737276) {
      FUN_008461b0(param_1 + 0xf,param_5,0x30);
      return 0;
    }
    if (param_2 == 0x6474696d) {
      param_1[0x38] = param_3;
      if (param_1[0xe] != 0) {
        param_3 = param_1[0x65] * param_3;
        if (60000 < param_3) {
          param_3 = 60000;
        }
        FUN_00864850(param_1[0xe],0x74696d65,param_3,0,0);
      }
      return 0;
    }
    if (param_2 == 0x6c627566) {
      param_1[0xc] = param_3;
      return 0;
    }
    if (param_2 == 0x6d696e70) {
      param_1[0x39] = param_3;
      return 0;
    }
    if (param_2 == 0x6d6e676c) {
      param_1[0x5d] = param_3;
      return 0;
    }
    if (param_2 == 0x6d6f7574) {
      param_1[0x3a] = param_3;
      return 0;
    }
    if (param_2 == 0x6d776964) {
      param_1[0x3a] = param_3;
      return 0;
    }
    if (param_2 == 0x70656572) {
      param_1[0x5e] = param_3;
      return 0;
    }
    if (param_2 == 0x74696d65) {
      param_1[0x37] = param_3;
      if (param_1[0x1b] != 0) {
        FUN_00864c80(param_1[0x1b],0x74696d65,param_3);
      }
      return 0;
    }
    if (param_2 == 0x74797065) {
      param_1[0xb] = param_3;
      return 0;
    }
  }
  return 0xffffffff;
}

