/* speed.exe 004bbf10 FUN_004bbf10; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004bbf10(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float10 fVar5;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(int *)(*(int *)(iVar2 + 0x30) + 0x8c) != 1) {
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x38) = 4;
    *(undefined4 *)(param_1 + 0x3c) = 4;
    fVar1 = *(float *)(iVar2 + 0x11c);
    *(float *)(param_1 + 0x68) = fVar1;
    uVar3 = *(undefined4 *)(iVar2 + 0x118);
    *(float *)(iVar2 + 0x118) = fVar1;
    *(undefined4 *)(iVar2 + 0x11c) = uVar3;
    *(float *)(iVar2 + 0x120) = fVar1 * _DAT_00890ea8 + *(float *)(iVar2 + 0x120) * _DAT_00896b58;
    *(float *)(param_1 + 100) = DAT_009142dc;
    fVar5 = (float10)(**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x30) + 0x34))();
    *(float *)(param_1 + 0x74) = (float)fVar5;
    *(float *)(param_1 + 0x80) = (float)fVar5;
    *(undefined4 *)(param_1 + 0x70) = 0x3d4ccccd;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined1 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    iVar2 = *(int *)(*(int *)(param_1 + 0x34) + 8);
    fVar1 = (float)*(int *)(iVar2 + 0x44);
    if (*(int *)(iVar2 + 0x44) < 0) {
      fVar1 = fVar1 + _DAT_00891214;
    }
    fVar1 = *(float *)(param_1 + 0x68) - fVar1;
    fVar4 = _DAT_00896480;
    if ((_DAT_00896480 < fVar1) && (fVar4 = fVar1, _DAT_00896d28 < fVar1)) {
      fVar4 = _DAT_00896d28;
    }
    fVar1 = (float)*(int *)(iVar2 + 0x3c) * _DAT_00890d60;
    *(float *)(param_1 + 0x8c) = fVar1;
    if (fVar1 < _DAT_00890968 != (fVar1 == _DAT_00890968)) {
      *(undefined4 *)(param_1 + 0x8c) = 0x3c23d70a;
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(float *)(param_1 + 0x94) = fVar4;
    *(undefined1 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0xa8) = 0x3a83126f;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined1 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(float *)(param_1 + 0x60) =
         DAT_009142dc + *(float *)(*(int *)(*(int *)(param_1 + 0x34) + 8) + 0x10);
    if (_DAT_00894b60 < *(float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x30) + 0x2c)) {
      *(undefined1 *)(param_1 + 0x58) = 1;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return;
}

