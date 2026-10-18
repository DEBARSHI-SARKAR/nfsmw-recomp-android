/* speed.exe 007f9533 FUN_007f9533; analysis pseudocode, not buildable source.
 * calls 007f94cc FUN_007f94cc
 */

void FUN_007f9533(int param_1)

{
  FUN_007f94cc();
  DAT_009bee08._4_4_ = 0;
  if (param_1 == 0) {
    DAT_009bedf8 = 0x60606;
    DAT_009bedfc = 0x60606;
    DAT_009bdde0._0_4_ = 0x1f800f8;
    DAT_009bdde0._4_4_ = 0x1f800f8;
    DAT_009bee08._0_4_ = 0x40404;
    DAT_009bdde8._4_4_ = 0x800004;
  }
  else {
    DAT_009bedf8 = 0x60603;
    DAT_009bedfc = 0x60603;
    DAT_009bdde0._0_4_ = 0xf800fc;
    DAT_009bdde0._4_4_ = 0xf800fc;
    DAT_009bee08._0_4_ = 0x40402;
    DAT_009bdde8._4_4_ = 0x1000008;
  }
  DAT_009bdde8._0_4_ = DAT_009bdde8._4_4_;
  DAT_009bee00._0_4_ = 0xf800;
  DAT_009bee00._4_4_ = 0xf800;
  return;
}

