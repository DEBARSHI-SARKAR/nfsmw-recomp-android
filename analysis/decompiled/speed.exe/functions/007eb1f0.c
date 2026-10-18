/* speed.exe 007eb1f0 FUN_007eb1f0; analysis pseudocode, not buildable source.
 * calls 007ec160 FUN_007ec160
 */

undefined4 FUN_007eb1f0(undefined4 param_1)

{
  switch(param_1) {
  case 0xf:
    return 0x2d;
  case 0x10:
    return 0x29;
  default:
    FUN_007ec160("TexelType::DepthToClutType - SPECIFIED CLUT DEPTH 0x%x NOT SUPPORTED ON THIS PLATFORM\n"
                 ,param_1);
    return 0;
  case 0x18:
    return 0x2f;
  case 0x20:
    return 0x2a;
  }
}

