/* speed.exe 007a65c0 FUN_007a65c0; analysis pseudocode, not buildable source.
 * calls 00575b00 FUN_00575b00
 */

void FUN_007a65c0(void)

{
  char cVar1;
  
  cVar1 = FUN_00575b00();
  if (cVar1 != '\0') {
    PTR_s_CustomizeCategory_fng_00905ea8 = s_CustomizeCategory_BACKROOM_fng_0089fa88;
    PTR_s_CustomizeGenericTop_fng_00905eac = s_CustomizeGenericTop_BACKROOM_fng_0089fa4c;
    PTR_s_CustomizeParts_fng_00905eb0 = s_CustomizeParts_BACKROOM_fng_0089f9d8;
    PTR_s_CustomizePerformance_fng_00905eb4 = s_CustomizePerformance_BACKROOM_fn_0089f8ac;
    PTR_s_Decals_fng_00905eb8 = s_Decals_BACKROOM_fng_0089f960;
    PTR_s_Paint_fng_00905ebc = s_Paint_BACKROOM_fng_0089f934;
    PTR_s_Rims_fng_00905ec0 = s_Rims_BACKROOM_fng_0089f914;
    PTR_s_CustomHUDColor_fng_00905ec8 = s_CustomHUDColor_BACKROOM_fng_0089f980;
    PTR_s_ShoppingCart_fng_00905ed0 = s_ShoppingCart_BACKROOM_fng_0089fa08;
    PTR_s_CustomHUD_fng_00905ec4 = s_CustomHUD_BACKROOM_fng_0089f9b0;
    PTR_s_Spoilers_fng_00905ecc = s_Spoilers_BACKROOM_fng_0089f8ec;
    return;
  }
  PTR_s_CustomizeCategory_fng_00905ea8 = s_CustomizeCategory_fng_0089faa8;
  PTR_s_CustomizeGenericTop_fng_00905eac = s_CustomizeGenericTop_fng_0089fa70;
  PTR_s_CustomizeParts_fng_00905eb0 = s_CustomizeParts_fng_0089f9f4;
  PTR_s_CustomizePerformance_fng_00905eb4 = s_CustomizePerformance_fng_0089f8d0;
  PTR_s_Decals_fng_00905eb8 = s_Decals_fng_0089f974;
  PTR_s_Paint_fng_00905ebc = s_Paint_fng_0089f948;
  PTR_s_Rims_fng_00905ec0 = s_Rims_fng_0089f928;
  PTR_s_CustomHUDColor_fng_00905ec8 = s_CustomHUDColor_fng_0089f99c;
  if (((*(byte *)(DAT_0091cf90 + 300) & 1) == 0) && (DAT_009b9e8d == '\0')) {
    PTR_s_ShoppingCart_fng_00905ed0 = s_ShoppingCart_QR_fng_0089fa24;
  }
  else {
    PTR_s_ShoppingCart_fng_00905ed0 = s_ShoppingCart_fng_0089fa38;
  }
  PTR_s_CustomHUD_fng_00905ec4 = s_CustomHUD_fng_0089f9c8;
  PTR_s_Spoilers_fng_00905ecc = s_Spoilers_fng_0089f904;
  return;
}

