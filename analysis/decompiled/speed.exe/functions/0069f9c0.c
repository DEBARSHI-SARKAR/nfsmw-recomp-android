/* speed.exe 0069f9c0 FUN_0069f9c0; analysis pseudocode, not buildable source.
 * calls 004018f0 FUN_004018f0
 * calls 00401ce0 FUN_00401ce0
 * calls 00410180 FUN_00410180
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0069f9c0(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_EBX;
  float10 fVar4;
  float unaff_retaddr;
  undefined1 auStack_c [12];
  
  if (((byte)*(undefined4 *)(param_2 + 0x1c) & 7) == 2) {
    fVar1 = *(float *)(param_2 + 0x14);
    if (fVar1 < _DAT_00890968) {
      fVar1 = -fVar1;
    }
    if ((((fVar1 < _DAT_00890cd4) && (*(float *)(param_1 + 0x88) == _DAT_00890968)) &&
        (*(int *)(param_1 + 0x5c) != 0)) &&
       (fVar4 = (float10)FUN_00410180(param_2 + 0x20), fVar4 < (float10)_DAT_008aad28)) {
      uVar2 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x98))();
      (**(code **)(**(int **)(param_1 + 0x5c) + 0x9c))();
      fVar4 = (float10)FUN_004018f0(param_2 + 0x10,uVar2);
      if (fVar4 < (float10)_DAT_00890968 != (fVar4 == (float10)_DAT_00890968)) {
        uVar2 = (**(code **)(**(int **)(param_1 + 0x58) + 0x20))(auStack_c);
        FUN_00401ce0(param_2,uVar2);
        iVar3 = (**(code **)(**(int **)(param_1 + 0x58) + 0x48))(auStack_c);
        if (*(float *)(iVar3 + 8) * _DAT_00891050 < unaff_retaddr) {
          fVar4 = (float10)FUN_004018f0(param_2 + 0x10,unaff_EBX);
          if ((float10)_DAT_00890968 < fVar4) {
            *(float *)(param_1 + 0x88) = (float)((float10)_DAT_0089096c - fVar4);
            return;
          }
          *(float *)(param_1 + 0x88) = (float)((float10)_DAT_008aac20 - fVar4);
        }
      }
    }
  }
  return;
}

