/* speed.exe 006000a0 FUN_006000a0; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_006000a0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  float *pfVar7;
  
  iVar6 = 1;
  pfVar7 = (float *)(param_1 + 0x19fc + (int)param_2 * 4);
  param_2 = *(float *)(param_1 + 0x19bc + (int)param_2 * 4);
  while( true ) {
    iVar2 = *(int *)(param_1 + 0x1968);
    if (*(int *)(iVar2 + 4) == 0) {
      piVar3 = *(int **)(iVar2 + 0xc);
      if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
        FUN_005fa780(piVar3);
      }
      piVar3 = *(int **)(iVar2 + 0x10);
      if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
        FUN_005fa780(piVar3);
      }
      puVar5 = (uint *)FUN_00454810(0xebdc165,0);
      if (puVar5 == (uint *)0x0) {
        puVar5 = (uint *)FUN_006269b0(4);
      }
      uVar4 = *puVar5;
    }
    else {
      uVar4 = (uint)*(byte *)(*(int *)(iVar2 + 4) + 0x28);
    }
    if ((int)uVar4 <= iVar6) break;
    fVar1 = *pfVar7;
    if ((fVar1 <= _DAT_00890968) || (fVar1 <= param_2)) {
      iVar6 = iVar6 + 1;
      pfVar7 = pfVar7 + 0x10;
    }
    else {
      iVar6 = iVar6 + 1;
      pfVar7 = pfVar7 + 0x10;
      param_2 = fVar1;
    }
  }
  return (float10)param_2;
}

