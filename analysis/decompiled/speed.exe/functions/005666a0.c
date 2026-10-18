/* speed.exe 005666a0 FUN_005666a0; analysis pseudocode, not buildable source.
 * calls 00514fb0 FUN_00514fb0
 * calls 00514da0 FUN_00514da0
 * calls 00514c70 FUN_00514c70
 * calls 007c4b80 FUN_007c4b80
 * calls 00514d10 FUN_00514d10
 * calls 005252d0 FUN_005252d0
 * calls 00514cc0 FUN_00514cc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005666a0(int param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float local_4;
  
  fVar1 = _DAT_00890968;
  local_4 = *(float *)(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (fVar1 < *(float *)(param_1 + 0x3c)) {
    local_4 = *(float *)(param_1 + 0x3c);
  }
  iVar4 = FUN_007c4b80();
  fVar1 = local_4 - (float)iVar4;
  fVar2 = fVar1;
  if (_DAT_008933d4 < fVar1) {
    fVar2 = _DAT_008933d4;
  }
  FUN_00514fb0(*(undefined4 *)(param_1 + 0x50),_DAT_008a04a4 - (fVar2 + fVar2) * _DAT_008a04a4);
  fVar2 = _DAT_00890968;
  if (_DAT_008933d4 < fVar1) {
    fVar2 = fVar1 - _DAT_008933d4;
  }
  FUN_00514fb0(*(undefined4 *)(param_1 + 0x54),_DAT_008a04a4 - (fVar2 + fVar2) * _DAT_008a04a4);
  if (local_4 < _DAT_0089096c) {
    FUN_00514c70(*(undefined4 *)(param_1 + 0x44));
    goto LAB_005667f6;
  }
  if (_DAT_008933d4 <= fVar1) {
    cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x44),0x1744b3);
    if (cVar3 == '\0') {
      uVar5 = *(undefined4 *)(param_1 + 0x44);
      uVar6 = 0x1744b3;
      goto LAB_005667c0;
    }
  }
  else {
    cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x44),0x41e1fedc);
    if (cVar3 == '\0') {
      uVar5 = *(undefined4 *)(param_1 + 0x44);
      uVar6 = 0x41e1fedc;
LAB_005667c0:
      FUN_00514d10(uVar5,uVar6,1);
    }
  }
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x7f91da62,&DAT_008a04a0,iVar4);
  FUN_00514cc0(*(undefined4 *)(param_1 + 0x44));
LAB_005667f6:
  if (local_4 <= _DAT_00890968) {
    cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x48),0x1744b3);
    if (cVar3 == '\0') {
      FUN_00514d10(*(undefined4 *)(param_1 + 0x48),0x1744b3,1);
    }
  }
  else if (fVar1 <= _DAT_00891050) {
    cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x48),0x77031c70);
    if (cVar3 == '\0') {
      FUN_00514d10(*(undefined4 *)(param_1 + 0x48),0x77031c70,1);
      return;
    }
  }
  else {
    cVar3 = FUN_00514da0(*(undefined4 *)(param_1 + 0x48),0xda600155);
    if (cVar3 == '\0') {
      FUN_00514d10(*(undefined4 *)(param_1 + 0x48),0xda600155,1);
      return;
    }
  }
  return;
}

