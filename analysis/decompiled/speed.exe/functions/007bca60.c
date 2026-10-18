/* speed.exe 007bca60 FUN_007bca60; analysis pseudocode, not buildable source.
 * calls 007bb560 FUN_007bb560
 */

void __fastcall FUN_007bca60(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x1b0) = 0x9de6e6e1;
  *(undefined **)(param_1 + 0x14c) = PTR_s_CustomizeCategory_fng_00905ea8;
  FUN_007bb560(PTR_s_Decals_fng_00905eb8,0x52ded91d,0x301dedd3,0x501);
  FUN_007bb560(PTR_s_Decals_fng_00905eb8,0xac7937b4,0x48e6ca49,0x502);
  FUN_007bb560(PTR_s_CustomizeGenericTop_fng_00905eac,0xda88b711,0x34367c86,0x503);
  FUN_007bb560(PTR_s_CustomizeGenericTop_fng_00905eac,0xc9a967c4,0xddf80259,0x504);
  FUN_007bb560(PTR_s_Decals_fng_00905eb8,0x2c710c4d,0x8a7697d6,0x505);
  FUN_007bb560(PTR_s_Decals_fng_00905eb8,0xffa7d360,0xb1f9b0c9,0x506);
  if (*(uint *)(param_1 + 0x154) == 0x803) {
    if (*(char *)(param_1 + 0x129) != '\0') {
      *(undefined1 *)(param_1 + 0x11c) = 0;
      *(undefined1 *)(param_1 + 0x119) = 1;
      *(undefined1 *)(param_1 + 0x11a) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x154) & 0xffff00ff;
    if (*(char *)(param_1 + 0x129) != '\0') {
      *(undefined1 *)(param_1 + 0x11c) = 0;
      *(undefined1 *)(param_1 + 0x119) = 1;
      *(undefined1 *)(param_1 + 0x11a) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
  }
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x40))(uVar1);
  if ((0x500 < *(uint *)(param_1 + 0x154)) && (*(uint *)(param_1 + 0x154) < 0x507)) {
    *(undefined4 *)(param_1 + 0x154) = 0x803;
  }
  return;
}

