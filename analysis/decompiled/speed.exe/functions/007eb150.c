/* speed.exe 007eb150 FUN_007eb150; analysis pseudocode, not buildable source.
 * calls 007ec160 FUN_007ec160
 */

undefined4 FUN_007eb150(undefined4 param_1)

{
  switch(param_1) {
  case 4:
    return 0x79;
  default:
    FUN_007ec160("TexelType::DepthToTextureType - SPECIFIED TEXTURE DEPTH 0x%x NOT SUPPORTED ON THIS PLATFORM\n"
                 ,param_1);
    return 0;
  case 8:
    return 0x7b;
  case 0xf:
    return 0x7e;
  case 0x10:
    return 0x78;
  case 0x18:
    return 0x7f;
  case 0x20:
    return 0x7d;
  }
}

