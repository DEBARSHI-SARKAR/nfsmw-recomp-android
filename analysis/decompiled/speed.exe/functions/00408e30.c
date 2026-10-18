/* speed.exe 00408e30 FUN_00408e30; analysis pseudocode, not buildable source.
 * calls 005dc180 FUN_005dc180
 * calls 005fc7a0 FUN_005fc7a0
 * calls 00401d70 FUN_00401d70
 * calls 00404990 FUN_00404990
 * calls 006533b0 FUN_006533b0
 * calls 005fac10 FUN_005fac10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00408e30(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  if ((DAT_0091e000 != 0) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 0x24))(), cVar1 == '\0')) {
    if (*(int *)(DAT_0091e000 + 0x1964) == 0) {
      if ((*(int *)(DAT_0091e000 + 0x1968) != 0) && (cVar1 = FUN_005fc7a0(), cVar1 == '\0')) {
        iVar2 = FUN_005fac10();
        *(undefined4 *)(param_1 + 0x7a8) = *(undefined4 *)(&DAT_00890730 + iVar2 * 4);
        return;
      }
      iVar2 = FUN_005fac10();
      *(undefined4 *)(param_1 + 0x7a8) = *(undefined4 *)(&DAT_00890724 + iVar2 * 4);
      return;
    }
    if (((*(int *)(DAT_0091e000 + 0x1964) == 2) && (*(int *)(param_1 + 0x7a4) != 0)) &&
       (*(int *)(*(int *)(param_1 + 0x7a4) + 4) != 0)) {
      piVar3 = (int *)FUN_00404990();
      fVar4 = (float10)FUN_00401d70((float)*piVar3 * _DAT_00890dc4,0,0x3f800000);
      fVar5 = (float10)FUN_005dc180();
      fVar6 = (float10)FUN_006533b0((float)fVar4);
      fVar4 = (float10)FUN_00401d70((float)(fVar6 * (float10)(float)fVar5 + (float10)(float)fVar4),0
                                    ,0x3f800000);
      *(float *)(param_1 + 0x7a8) = (float)fVar4;
    }
  }
  return;
}

