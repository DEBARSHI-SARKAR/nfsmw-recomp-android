/* speed.exe 00479d80 FUN_00479d80; analysis pseudocode, not buildable source.
 * calls 004522f0 FUN_004522f0
 * calls 004797f0 FUN_004797f0
 * calls 004519d0 FUN_004519d0
 */

void __fastcall FUN_00479d80(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_004522f0("CDActionTrackCar");
  uVar1 = FUN_004519d0("CDActionTrackCar");
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(char **)(param_1 + 0x1c) = "CDActionTrackCar";
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x2b8) = 0x40000000;
  FUN_004797f0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
               *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return;
}

