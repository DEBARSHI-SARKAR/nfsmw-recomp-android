/* speed.exe 007bcdb0 FUN_007bcdb0; analysis pseudocode, not buildable source.
 * calls 005816b0 FUN_005816b0
 * calls 007bb560 FUN_007bb560
 * calls 00575b00 FUN_00575b00
 */

void __fastcall FUN_007bcdb0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_005816b0();
  cVar1 = FUN_00575b00();
  if (cVar1 == '\0') {
    if (iVar2 != 0x29) {
      FUN_007bb560(PTR_s_CustomizeCategory_fng_00905ea8,0x6e0ca66c,0x55dce1a,0x801);
      uVar3 = FUN_007bb560(PTR_s_CustomizeCategory_fng_00905ea8,0x3987d054,0xbaef8282,0x802);
      *(undefined4 *)(param_1 + 0x1a8) = uVar3;
    }
    FUN_007bb560(PTR_s_CustomizeCategory_fng_00905ea8,0x3e31ba56,0xbfa7d7c4,0x803);
    return;
  }
  if (iVar2 != 0x29) {
    FUN_007bb560(PTR_s_CustomizeCategory_fng_00905ea8,0x73272ed2,0x55dce1a,0x801);
    FUN_007bb560(PTR_s_CustomizeCategory_fng_00905ea8,0xc61c8d3a,0xbaef8282,0x802);
  }
  FUN_007bb560(PTR_s_CustomizeCategory_fng_00905ea8,0xe69d4f7c,0xbfa7d7c4,0x803);
  return;
}

