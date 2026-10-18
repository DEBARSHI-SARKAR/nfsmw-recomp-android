/* speed.exe 004292a0 FUN_004292a0; analysis pseudocode, not buildable source.
 * calls 00422780 FUN_00422780
 * calls 005cb5d0 FUN_005cb5d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004292a0(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  float unaff_retaddr;
  undefined4 uStack_10;
  undefined1 auStack_c [4];
  undefined4 uStack_8;
  
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x54))();
  (**(code **)(*piVar3 + 0x34))(auStack_c);
  fVar5 = (float10)FUN_005cb5d0(uStack_10,uStack_8);
  fVar1 = (float)(fVar5 * (float10)_DAT_00890510);
  iVar4 = (**(code **)(*piVar3 + 0x28))();
  fVar2 = ((*(float *)(iVar4 + 4) - *(float *)(param_1 + 0xec)) * *(float *)(param_1 + 0xf4) *
           unaff_retaddr + *(float *)(param_1 + 0xf0)) -
          *(float *)(param_1 + 0xf0) * *(float *)(param_1 + 0xf8) * unaff_retaddr;
  *(float *)(param_1 + 0xf0) = fVar2;
  *(float *)(param_1 + 0xec) = fVar2 * unaff_retaddr + *(float *)(param_1 + 0xec);
  if (((fVar1 < _DAT_00891658) && (_DAT_00891654 < *(float *)(param_1 + 0xfc))) ||
     ((_DAT_00891654 < fVar1 && (*(float *)(param_1 + 0xfc) < _DAT_00891658)))) {
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  else {
    fVar1 = ((fVar1 - *(float *)(param_1 + 0xfc)) * *(float *)(param_1 + 0x104) * unaff_retaddr +
            *(float *)(param_1 + 0x100)) -
            *(float *)(param_1 + 0x100) * *(float *)(param_1 + 0x108) * unaff_retaddr;
    *(float *)(param_1 + 0x100) = fVar1;
    fVar1 = fVar1 * unaff_retaddr + *(float *)(param_1 + 0xfc);
  }
  *(float *)(param_1 + 0xfc) = fVar1;
  FUN_00422780(unaff_retaddr);
  return;
}

