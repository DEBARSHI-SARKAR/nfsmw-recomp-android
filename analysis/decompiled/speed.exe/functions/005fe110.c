/* speed.exe 005fe110 FUN_005fe110; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 * calls 00454810 FUN_00454810
 * calls 005fba00 FUN_005fba00
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 * calls 00654af0 FUN_00654af0
 * calls 005db090 FUN_005db090
 */

void __thiscall FUN_005fe110(int param_1,undefined4 param_2,float *param_3,float param_4)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x1960) == 1) {
    iVar1 = *(int *)(param_1 + 0x1968);
    iVar3 = FUN_005fba00();
    param_3 = (float *)(param_1 + 0x19bc + (int)param_3 * 4);
    fVar2 = param_4 / (float)iVar3;
    param_4 = 0.0;
    while( true ) {
      if (*(int *)(iVar1 + 4) == 0) {
        if ((*(int **)(iVar1 + 0xc) != (int *)0x0) && (**(int **)(iVar1 + 0xc) == 0)) {
          FUN_005fa780();
        }
        if ((*(int **)(iVar1 + 0x10) != (int *)0x0) && (**(int **)(iVar1 + 0x10) == 0)) {
          FUN_005fa780();
        }
        puVar5 = (uint *)FUN_00454810();
        if (puVar5 == (uint *)0x0) {
          puVar5 = (uint *)FUN_006269b0();
        }
        uVar4 = *puVar5;
      }
      else {
        uVar4 = (uint)*(byte *)(*(int *)(iVar1 + 4) + 0x28);
      }
      if ((int)uVar4 <= (int)param_4) break;
      *param_3 = fVar2;
      iVar3 = 0;
      while( true ) {
        if (*(int *)(param_1 + 0x19ac) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(param_1 + 0x19b0) - *(int *)(param_1 + 0x19ac) >> 2;
        }
        if (iVar6 <= iVar3) break;
        if (*(int *)(*(int *)(param_1 + 0x19ac) + iVar3 * 4) != 0) {
          FUN_00452430();
        }
        FUN_005db090();
        FUN_00654af0();
        iVar3 = iVar3 + 1;
      }
      param_4 = (float)((int)param_4 + 1);
      param_3 = param_3 + 0x10;
    }
  }
  return;
}

