/* speed.exe 007bcbb0 FUN_007bcbb0; analysis pseudocode, not buildable source.
 * calls 007bb560 FUN_007bb560
 */

void __fastcall FUN_007bcbb0(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x1b0) = 0x74d1887d;
  *(undefined **)(param_1 + 0x14c) = PTR_s_CustomizeGenericTop_fng_00905eac;
  if (*(int *)(param_1 + 0x150) == 0x503) {
    FUN_007bb560(PTR_s_Decals_fng_00905eb8,0xfe957f48,0x7d212cfa,0x601);
    FUN_007bb560(PTR_s_Decals_fng_00905eb8,0xfe957f49,0x7d212cfb,0x602);
    FUN_007bb560(PTR_s_Decals_fng_00905eb8,0xfe957f4a,0x7d212cfc,0x603);
    FUN_007bb560(PTR_s_Decals_fng_00905eb8,0xfe957f4b,0x7d212cfd,0x604);
    FUN_007bb560(PTR_s_Decals_fng_00905eb8,0xfe957f4c,0x7d212cfe,0x605);
    uVar1 = 0xfe957f4d;
  }
  else {
    if (*(int *)(param_1 + 0x150) != 0x504) goto LAB_007bcd30;
    FUN_007bb560(PTR_s_Decals_fng_00905eb8,0x2e40eadb,0x7d212cfa,0x601);
    FUN_007bb560(PTR_s_Decals_fng_00905eb8,0x2e40eadc,0x7d212cfb,0x602);
    FUN_007bb560(PTR_s_Decals_fng_00905eb8,0x2e40eadd,0x7d212cfc,0x603);
    FUN_007bb560(PTR_s_Decals_fng_00905eb8,0x2e40eade,0x7d212cfd,0x604);
    FUN_007bb560(PTR_s_Decals_fng_00905eb8,0x2e40eadf,0x7d212cfe,0x605);
    uVar1 = 0x2e40eae0;
  }
  FUN_007bb560(PTR_s_Decals_fng_00905eb8,uVar1,0x7d212cff,0x606);
LAB_007bcd30:
  if (*(uint *)(param_1 + 0x154) == 0x305) {
    if (*(char *)(param_1 + 0x129) != '\0') {
      *(undefined1 *)(param_1 + 0x11c) = 0;
      *(undefined1 *)(param_1 + 0x119) = 1;
      *(undefined1 *)(param_1 + 0x11a) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    (**(code **)(*(int *)(param_1 + 0x2c) + 0x40))(1);
    return;
  }
  if (*(char *)(param_1 + 0x129) != '\0') {
    *(undefined1 *)(param_1 + 0x11c) = 0;
    *(undefined1 *)(param_1 + 0x119) = 1;
    *(undefined1 *)(param_1 + 0x11a) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x40))(*(uint *)(param_1 + 0x154) & 0xffff00ff);
  *(undefined4 *)(param_1 + 0x154) = 0x305;
  return;
}

