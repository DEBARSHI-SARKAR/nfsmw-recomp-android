/* speed.exe 007bbe40 FUN_007bbe40; analysis pseudocode, not buildable source.
 * calls 007bb560 FUN_007bb560
 * calls 00575b50 FUN_00575b50
 * calls 00575b00 FUN_00575b00
 */

void __fastcall FUN_007bbe40(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_00575b00();
  *(uint *)(param_1 + 0x1b0) = (-(uint)(cVar1 != '\0') & 0x57ca8ccd) + 0x55dce1a;
  FUN_00575b50(1);
  *(undefined **)(param_1 + 0x14c) = PTR_s_CustomizeMain_fng_00905ea4;
  cVar1 = FUN_00575b00();
  if (cVar1 == '\0') {
    FUN_007bb560(PTR_s_CustomizeParts_fng_00905eb0,0x28c24f6,0x6134c218,0x101);
    FUN_007bb560(PTR_s_Spoilers_fng_00905ecc,0xbb034ea6,0x94e73021,0x102);
    FUN_007bb560(PTR_s_CustomizeGenericTop_fng_00905eac,0x294d2a3,0xf868eb0b,0x103);
    FUN_007bb560(PTR_s_CustomizeParts_fng_00905eb0,0x28f7092,0x4d4a88d,0x104);
    uVar2 = 0x79165861;
  }
  else {
    FUN_007bb560(PTR_s_CustomizeParts_fng_00905eb0,0xaf393dba,0x6134c218,0x101);
    FUN_007bb560(PTR_s_Spoilers_fng_00905ecc,0xc51a4f62,0x94e73021,0x102);
    FUN_007bb560(PTR_s_CustomizeGenericTop_fng_00905eac,0xc19491cc,0xf868eb0b,0x103);
    FUN_007bb560(PTR_s_CustomizeParts_fng_00905eb0,0xf375276e,0x4d4a88d,0x104);
    uVar2 = 0x25a4375e;
  }
  FUN_007bb560(PTR_s_CustomizeParts_fng_00905eb0,uVar2,0x61e8f83c,0x105);
  if (*(char *)(param_1 + 0x129) != '\0') {
    *(undefined1 *)(param_1 + 0x11c) = 0;
    *(undefined1 *)(param_1 + 0x119) = 1;
    *(undefined1 *)(param_1 + 0x11a) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x40))(*(uint *)(param_1 + 0x154) & 0xffff00ff);
  return;
}

