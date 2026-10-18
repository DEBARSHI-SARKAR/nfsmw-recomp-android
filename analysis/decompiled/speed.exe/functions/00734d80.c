/* speed.exe 00734d80 FUN_00734d80; analysis pseudocode, not buildable source.
 * calls 0078a670 FUN_0078a670
 * calls 0078a220 FUN_0078a220
 * calls 0078a5b0 FUN_0078a5b0
 */

void FUN_00734d80(void)

{
  FUN_0078a5b0("PositionQuantizerX",0xc5960000,0x44e00000,0x3c23d70a);
  FUN_0078a5b0("PositionQuantizerY",0xc1700000,0x43960000,0x3c23d70a);
  FUN_0078a5b0("PositionQuantizerZ",0xc4d00000,0x45974000,0x3c23d70a);
  FUN_0078a5b0("VelocityQuantizer",0xc2fa0000,0x42fa0000,0x3dcccccd);
  FUN_0078a5b0("MatrixQuantizer",0xbf800000,0x3f800000,0x3c23d70a);
  FUN_0078a5b0("AngleQuantizer",0xbf000000,0x3f000000,0x3b23d70a);
  FUN_0078a5b0("AccelerationQuantizer",0xc1c80000,0x41c80000,0x3dcccccd);
  FUN_0078a5b0("AVelocityQuantizer",0xc0a00000,0x40a00000,0x3c23d70a);
  FUN_0078a5b0("ControlQuantizer",0,0x3f800000,0x3e19999a);
  FUN_0078a5b0("QuantFloatSimTime",0,0x45a8c000,0x3a83126f);
  FUN_0078a220("QuantCarSlotID",0,0x8b);
  FUN_0078a220("QuantPartIndex",0,16000);
  FUN_0078a220("QuantCarType",0,0x54);
  FUN_0078a220("QuantInt2Bit",0,3);
  FUN_0078a220("QuantInt3Bit",0,7);
  FUN_0078a220("QuantInt4Bit",0,0xf);
  FUN_0078a670("QuantFloatTime",0,0x46610000,0x18);
  return;
}

