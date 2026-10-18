/* speed.exe 007a6160 FUN_007a6160; analysis pseudocode, not buildable source.
 * calls 005252d0 FUN_005252d0
 * calls 00573140 FUN_00573140
 * calls 00524920 FUN_00524920
 */

void __thiscall FUN_007a6160(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_00573140("MARKER_GROUP_%d",param_2,(-(uint)(param_4 != 0) & 0x6ea5bef2) + 0x163c76,1);
  FUN_00524920(uVar1,uVar2);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_00573140("MARKER_NUM_%d",param_2,&DAT_0089c2d0,param_4);
  FUN_005252d0(uVar1,uVar2);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_00573140("MARKER_BLOOM_%d",param_2,&DAT_0089c2d0,param_4);
  FUN_005252d0(uVar1,uVar2);
  return;
}

