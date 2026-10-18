/* speed.exe 00692690 FUN_00692690; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00692690(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  float unaff_retaddr;
  float fVar5;
  
  uVar2 = (**(code **)(**(int **)(param_1 + 0x114) + 8))();
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x114) + 0x24))(uVar3);
      if (cVar1 == '\0') {
        if (uVar3 < 2) {
          if (_DAT_00890968 < *(float *)(*(int *)(param_1 + 0x160) + 0x70)) {
LAB_006926fe:
            fVar4 = (float10)(**(code **)(**(int **)(param_1 + 0x114) + 0x50))(uVar3);
            fVar5 = (float)fVar4;
            if ((float10)_DAT_00890968 <= fVar4 * (float10)unaff_retaddr) {
              if (fVar5 <= _DAT_00890968) {
                if ((fVar5 < _DAT_00890968) && (fVar5 <= unaff_retaddr)) goto LAB_00692771;
              }
              else if (unaff_retaddr <= fVar5) {
LAB_00692771:
                fVar5 = unaff_retaddr;
              }
            }
            else {
              fVar5 = 0.0;
            }
            (**(code **)(**(int **)(param_1 + 0x114) + 0x54))(uVar3,fVar5);
          }
        }
        else if (*(float *)(*(int *)(param_1 + 0x160) + 0x70) < _DAT_0089096c) goto LAB_006926fe;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}

