/* speed.exe 005ffcc0 FUN_005ffcc0; analysis pseudocode, not buildable source.
 * calls 005fc860 FUN_005fc860
 * calls 005fc8c0 FUN_005fc8c0
 * calls 005fc980 FUN_005fc980
 * calls 005e8cc0 FUN_005e8cc0
 * calls 005fc920 FUN_005fc920
 */

void __fastcall FUN_005ffcc0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x1968) != 0) {
    fVar3 = (float10)FUN_005fc920();
    *(float *)(param_1 + 0x4494) = (float)fVar3;
    fVar3 = (float10)FUN_005fc980();
    *(float *)(param_1 + 0x4498) = (float)fVar3;
    uVar1 = FUN_005fc8c0();
    uVar2 = FUN_005fc860();
    uVar2 = FUN_005e8cc0(uVar2,param_1 + 0x44a8,0xb);
    *(undefined4 *)(param_1 + 0x44a4) = uVar2;
    uVar1 = FUN_005e8cc0(uVar1,param_1 + 0x44d8,0xb);
    *(undefined4 *)(param_1 + 0x44d4) = uVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x44ac) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x44a8) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x4494) = 0x3851b717;
  *(undefined4 *)(param_1 + 0x4498) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0x44a4) = 2;
  *(undefined4 *)(param_1 + 0x44d4) = 2;
  *(undefined4 *)(param_1 + 0x44dc) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x44d8) = 0x447a0000;
  return;
}

