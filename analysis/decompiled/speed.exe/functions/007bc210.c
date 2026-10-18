/* speed.exe 007bc210 FUN_007bc210; analysis pseudocode, not buildable source.
 * calls 007bb560 FUN_007bb560
 * calls 005816b0 FUN_005816b0
 * calls 00575b00 FUN_00575b00
 */

void __fastcall FUN_007bc210(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_00575b00();
  *(uint *)(param_1 + 0x1b0) = (-(uint)(cVar1 != '\0') & 0x511c266d) + 0xbfa7d7c4;
  *(undefined **)(param_1 + 0x14c) = PTR_s_CustomizeMain_fng_00905ea4;
  cVar1 = FUN_00575b00();
  if (cVar1 == '\0') {
    FUN_007bb560(PTR_s_Paint_fng_00905ebc,0xa3b76154,0x55da70c,0x301);
    FUN_007bb560(PTR_s_CustomizeGenericTop_fng_00905eac,0x55778e5a,0xbfa52c55,0x302);
    iVar2 = FUN_005816b0();
    if (iVar2 != 0x29) {
      FUN_007bb560(PTR_s_Paint_fng_00905ebc,0xd223f84a,0xe126ff53,0x303);
    }
    FUN_007bb560(PTR_s_CustomizeParts_fng_00905eb0,0x3f23165c,0xd32729a6,0x304);
    FUN_007bb560(PTR_s_CustomizeGenericTop_fng_00905eac,0xda1dae54,0x955980bc,0x305);
    FUN_007bb560("Numbers.fng",0x45a1c644,0x6857e5ac,0x306);
    uVar3 = 0x28f88bc;
  }
  else {
    FUN_007bb560(PTR_s_Paint_fng_00905ebc,0xdb89e17,0x55da70c,0x301);
    FUN_007bb560(PTR_s_CustomizeGenericTop_fng_00905eac,0xd35f04c0,0xbfa52c55,0x302);
    FUN_007bb560(PTR_s_CustomizeGenericTop_fng_00905eac,0xa9135927,0x955980bc,0x305);
    uVar3 = 0x8ba602fc;
  }
  FUN_007bb560(PTR_s_CustomHUD_fng_00905ec4,uVar3,0x78980a6b,0x307);
  if (*(char *)(param_1 + 0x129) != '\0') {
    *(undefined1 *)(param_1 + 0x11c) = 0;
    *(undefined1 *)(param_1 + 0x119) = 1;
    *(undefined1 *)(param_1 + 0x11a) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x40))(*(uint *)(param_1 + 0x154) & 0xffff00ff);
  return;
}

