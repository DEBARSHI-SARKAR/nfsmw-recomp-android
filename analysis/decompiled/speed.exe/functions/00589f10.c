/* speed.exe 00589f10 FUN_00589f10; analysis pseudocode, not buildable source.
 * calls 0066ca20 FUN_0066ca20
 * calls 00575f70 FUN_00575f70
 * calls 00575ec0 FUN_00575ec0
 * calls 0066ca10 FUN_0066ca10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00589f10(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  float10 fVar4;
  float10 fVar5;
  
  FUN_00575f70(*(undefined4 *)(param_1 + 0x2c8));
  iVar1 = *(int *)(param_1 + 0x2c8);
  if (*(int *)(param_1 + 0x2c) == 0) goto LAB_00589f41;
  piVar3 = (int *)(*(int *)(param_1 + 0x2c) + -4);
  while( true ) {
    if (param_1 == -0x2c) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(param_1 + 0x28);
    }
    if (piVar3 == piVar2) break;
    fVar4 = (float10)FUN_0066ca10(piVar3[0x3d]);
    fVar5 = (float10)FUN_0066ca20(piVar3[0x3d]);
    FUN_00575ec0((float)fVar4,(float)fVar5,((float)fVar5 - (float)fVar4) * _DAT_0089f24c,
                 *(undefined4 *)((iVar1 + 0x16) * 0x1c + param_1 + piVar3[0x3d] * 4));
    (**(code **)(*piVar3 + 0xc))();
    if (piVar3[1] == 0) {
LAB_00589f41:
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(piVar3[1] + -4);
    }
  }
  return;
}

