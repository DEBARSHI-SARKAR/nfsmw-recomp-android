/* speed.exe 00408960 FUN_00408960; analysis pseudocode, not buildable source.
 * calls 00408810 FUN_00408810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_00408960(int param_1)

{
  float fVar1;
  char cVar2;
  float *pfVar3;
  int *piVar4;
  float unaff_ESI;
  char unaff_retaddr;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  pfVar3 = (float *)(**(code **)(**(int **)(param_1 + 0xd0) + 4))();
  piVar4 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 4))();
  piVar4 = (int *)(**(code **)(*piVar4 + 0x54))();
  (**(code **)(*piVar4 + 0x34))(&fStack_18);
  if (unaff_retaddr == '\0') {
    fStack_10 = unaff_ESI * _DAT_00890da4 + *pfVar3;
    fStack_c = fStack_18 * _DAT_00890da4 + pfVar3[1];
    fVar1 = _DAT_00890da4;
  }
  else {
    fStack_10 = unaff_ESI * _DAT_00890db8 + *pfVar3;
    fStack_c = fStack_18 * _DAT_00890db8 + pfVar3[1];
    fVar1 = _DAT_00890db8;
  }
  fStack_8 = fStack_14 * fVar1 + pfVar3[2];
  cVar2 = FUN_00408810(pfVar3,&fStack_10);
  return cVar2 != '\0';
}

