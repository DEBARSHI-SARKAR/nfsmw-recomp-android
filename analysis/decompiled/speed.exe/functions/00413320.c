/* speed.exe 00413320 FUN_00413320; analysis pseudocode, not buildable source.
 * calls 00410220 FUN_00410220
 * calls 0040a560 FUN_0040a560
 */

void __fastcall FUN_00413320(int param_1)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  float *unaff_retaddr;
  float fVar5;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 auStack_c [12];
  
  pfVar1 = (float *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x20))();
  fStack_24 = *pfVar1;
  fStack_20 = pfVar1[1];
  fStack_1c = pfVar1[2];
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x34))(auStack_c);
  iVar2 = (**(code **)(**(int **)(param_1 + 0x48) + 100))();
  fStack_1c = *(float *)(iVar2 + 0x20);
  fStack_18 = *(float *)(iVar2 + 0x24);
  fStack_14 = *(float *)(iVar2 + 0x28);
  if (*(int **)(iVar2 + 0x1c) == (int *)0x0) {
    fVar5 = 0.0;
  }
  else {
    piVar3 = (int *)(**(code **)(**(int **)(iVar2 + 0x1c) + 0x54))();
    fVar4 = (float10)(**(code **)(*piVar3 + 0x30))();
    fVar5 = (float)fVar4;
  }
  fStack_34 = *unaff_retaddr - fStack_28;
  fStack_30 = unaff_retaddr[1] - fStack_24;
  fStack_2c = unaff_retaddr[2] - fStack_20;
  fVar4 = (float10)FUN_00410220(&fStack_34,fVar5);
  FUN_0040a560((float)(((float10)fStack_34 * (float10)fStack_1c +
                       (float10)fStack_18 * (float10)fStack_30 +
                       (float10)fStack_14 * (float10)fStack_2c) * fVar4),fVar5);
  return;
}

