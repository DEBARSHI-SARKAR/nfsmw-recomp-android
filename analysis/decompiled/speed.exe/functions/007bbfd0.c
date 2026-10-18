/* speed.exe 007bbfd0 FUN_007bbfd0; analysis pseudocode, not buildable source.
 * calls 00575b30 FUN_00575b30
 * calls 007bb560 FUN_007bb560
 * calls 007afae0 FUN_007afae0
 * calls 00575b00 FUN_00575b00
 */

void __fastcall FUN_007bbfd0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_00575b00();
  *(uint *)(param_1 + 0x1b0) = (-(uint)(cVar1 != '\0') & 0x4e6328d) + 0xbaef8282;
  *(undefined **)(param_1 + 0x14c) = PTR_s_CustomizeMain_fng_00905ea4;
  FUN_00575b30(1);
  cVar1 = FUN_00575b00();
  if (cVar1 == '\0') {
    FUN_007bb560(PTR_s_CustomizePerformance_fng_00905eb4,0xc15c94e6,0x9853d9a6,0x201);
    FUN_007bb560(PTR_s_CustomizePerformance_fng_00905eb4,0x1a29ffa,0x29aa74ba,0x202);
    FUN_007bb560(PTR_s_CustomizePerformance_fng_00905eb4,0x178475e7,0x6e101aa7,0x203);
    FUN_007bb560(PTR_s_CustomizePerformance_fng_00905eb4,0x9701bde4,0x4ce19aa4,0x204);
    FUN_007bb560(PTR_s_CustomizePerformance_fng_00905eb4,0x6e8e477,0x5aa9137,0x205);
    FUN_007bb560(PTR_s_CustomizePerformance_fng_00905eb4,0xbaa23a28,0x91997ee8,0x206);
    cVar1 = FUN_007afae0();
    if (cVar1 == '\0') {
      uVar3 = 0xbb6812bb;
      uVar2 = 0x93603dfb;
    }
    else {
      uVar3 = 0x5b1255c;
      uVar2 = 0x6ef789c;
    }
  }
  else {
    FUN_007bb560(PTR_s_CustomizePerformance_fng_00905eb4,0x4f424e0f,0x9853d9a6,0x201);
    FUN_007bb560(PTR_s_CustomizePerformance_fng_00905eb4,0xd142d3e3,0x29aa74ba,0x202);
    FUN_007bb560(PTR_s_CustomizePerformance_fng_00905eb4,0x190eb6,0x6e101aa7,0x203);
    FUN_007bb560(PTR_s_CustomizePerformance_fng_00905eb4,0x6fea04c8,0x4ce19aa4,0x204);
    FUN_007bb560(PTR_s_CustomizePerformance_fng_00905eb4,0x7373f1ef,0x5aa9137,0x205);
    FUN_007bb560(PTR_s_CustomizePerformance_fng_00905eb4,0x4887f351,0x91997ee8,0x206);
    cVar1 = FUN_007afae0();
    if (cVar1 == '\0') {
      uVar3 = 0xbb6812bb;
      uVar2 = 0x630071e4;
    }
    else {
      uVar3 = 0x5b1255c;
      uVar2 = 0x12fe30a5;
    }
  }
  FUN_007bb560(PTR_s_CustomizePerformance_fng_00905eb4,uVar2,uVar3,0x207);
  if (*(char *)(param_1 + 0x129) != '\0') {
    *(undefined1 *)(param_1 + 0x11c) = 0;
    *(undefined1 *)(param_1 + 0x119) = 1;
    *(undefined1 *)(param_1 + 0x11a) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x40))(*(uint *)(param_1 + 0x154) & 0xffff00ff);
  return;
}

