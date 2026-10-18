/* speed.exe 00707760 FUN_00707760; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 005d51f0 FUN_005d51f0
 * calls 004100a0 FUN_004100a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00707760(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  float10 fVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar1 = (**(code **)(*param_1 + 0x28))();
  if (iVar1 != 0) {
    iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,iVar1);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 4);
      goto LAB_00707798;
    }
  }
  iVar1 = 0;
LAB_00707798:
  piVar3 = (int *)0x0;
  if (iVar1 == 0) {
    *(undefined1 *)((int)param_1 + 0x35) = 0;
    param_1[4] = 0;
  }
  else {
    piVar3 = (int *)FUN_005d59f0(&LAB_004040e0);
  }
  iVar1 = DAT_00993cc8;
  if (((DAT_00993cc8 != 0) && (piVar3 != (int *)0x0)) && (*(char *)((int)param_1 + 0x35) != '\0')) {
    piVar2 = (int *)(**(code **)(*piVar3 + 0xc))();
    param_1[7] = *piVar2;
    param_1[8] = piVar2[1];
    param_1[9] = piVar2[2];
    uStack_18 = *(undefined4 *)(iVar1 + 0x10c);
    uStack_14 = *(undefined4 *)(iVar1 + 0x110);
    uStack_10 = *(undefined4 *)(iVar1 + 0x114);
    iStack_c = *piVar2;
    iStack_8 = piVar2[1];
    iStack_4 = piVar2[2];
    fVar4 = (float10)(**(code **)(*piVar3 + 0x98))();
    param_1[10] = (int)(float)(fVar4 * (float10)_DAT_008967e0);
    fVar4 = (float10)FUN_004100a0(&iStack_c,&uStack_18);
    param_1[0xb] = (int)(float)fVar4;
  }
  return;
}

