/* speed.exe 0066a200 FUN_0066a200; analysis pseudocode, not buildable source.
 * calls 006ed550 FUN_006ed550
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 */

void __fastcall FUN_0066a200(int param_1)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  float10 fVar5;
  float10 fVar6;
  
  if ((*(int *)(param_1 + 0x114) == 0) || (*(char *)(param_1 + 0x111) != '\0')) {
    *(undefined4 *)(param_1 + 0xe4) = 0xbf800000;
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x2c) + 0x60))();
  fVar5 = (float10)FUN_006ed550(uVar3);
  piVar4 = (int *)(**(code **)(*(int *)(param_1 + 0x2c) + 0x54))();
  fVar6 = (float10)(**(code **)(*piVar4 + 0x14))();
  piVar4 = (int *)FUN_00454810(0xd1d3909a,0);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_006269b0(4);
  }
  fVar1 = (float)*piVar4;
  cVar2 = (**(code **)(*(int *)(param_1 + 0xb4) + 4))();
  if (cVar2 == '\0') {
    fVar1 = fVar1 + fVar1;
  }
  *(float *)(param_1 + 0xe4) = (fVar1 + (float)fVar5) / (float)fVar6;
  return;
}

