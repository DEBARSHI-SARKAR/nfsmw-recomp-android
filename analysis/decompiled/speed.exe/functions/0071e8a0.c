/* speed.exe 0071e8a0 FUN_0071e8a0; analysis pseudocode, not buildable source.
 * calls 00715250 FUN_00715250
 * calls 00715610 FUN_00715610
 * calls 0071a770 FUN_0071a770
 * calls 0070a760 FUN_0070a760
 * calls 0071ae40 FUN_0071ae40
 * calls 0070ab30 FUN_0070ab30
 * calls 00708430 FUN_00708430
 * calls 005d0370 FUN_005d0370
 * calls 00707f90 FUN_00707f90
 * calls 0071abb0 FUN_0071abb0
 * calls 0070a840 FUN_0070a840
 * calls 0071a940 FUN_0071a940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0071e8a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  float10 fVar6;
  
  iVar2 = DAT_00993cc8;
  if ((*(int **)(DAT_00993cc8 + 0x130) != (int *)0x0) &&
     (((*(int *)(DAT_00993cc8 + 0x138) != 1 ||
       (fVar6 = (float10)(**(code **)(**(int **)(DAT_00993cc8 + 0x130) + 0x60))(),
       (float10)_DAT_008b0e70 <= fVar6)) && (*(int *)(iVar2 + 0x138) != 999)))) {
    piVar5 = (int *)**(int **)(param_1 + 0x18);
    if (piVar5 != *(int **)(param_1 + 0x18)) {
      do {
        piVar3 = (int *)FUN_00708430(piVar5[5]);
        if (piVar3 != (int *)0x0) {
          iVar1 = *piVar3;
          uVar4 = FUN_00715610(0);
          (**(code **)(iVar1 + 0xb0))(piVar5[2],piVar5[4],uVar4);
        }
        if (piVar5 != *(int **)(param_1 + 0x18)) {
          *(int *)piVar5[1] = *piVar5;
          *(int *)(*piVar5 + 4) = piVar5[1];
          FUN_005d0370(piVar5,0x18,0);
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
        }
      } while ((*(int *)(param_1 + 0x1c) != 0) &&
              (piVar5 = (int *)**(int **)(param_1 + 0x18), piVar5 != *(int **)(param_1 + 0x18)));
    }
    if ((DAT_0092d884 != 0) && ((int *)*DAT_0092d87c != (int *)0x0)) {
      piVar5 = (int *)(**(code **)(*(int *)*DAT_0092d87c + 4))();
      piVar5 = (int *)(**(code **)(*piVar5 + 0x54))();
      (**(code **)(*piVar5 + 0x34))(param_1 + 0x78);
    }
    FUN_0071a770();
    if ((*(byte *)(param_1 + 0x4c) & 0x40) == 0) {
      FUN_00715250();
      FUN_0070a760();
      FUN_0070a840();
      FUN_0071a940();
      FUN_0071abb0();
      FUN_0071ae40();
      FUN_0070ab30();
      FUN_00707f90();
    }
    *(int *)(param_1 + 0x28) = (int)*(short *)(iVar2 + 0x148);
  }
  return;
}

