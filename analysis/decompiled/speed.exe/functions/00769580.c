/* speed.exe 00769580 FUN_00769580; analysis pseudocode, not buildable source.
 * calls 00769190 FUN_00769190
 * calls 00768ee0 FUN_00768ee0
 * calls 006c0a20 FUN_006c0a20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00769580(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined1 local_150 [160];
  undefined1 local_b0 [172];
  
  fVar1 = *(float *)(param_1 + 0x188);
  fVar2 = _DAT_008b5b04;
  if ((_DAT_008b5b04 < fVar1) && (fVar2 = fVar1, _DAT_008933d4 < fVar1)) {
    fVar2 = _DAT_008933d4;
  }
  fVar2 = fVar2 - _DAT_008b5b04;
  *(undefined4 *)(param_1 + 0x160) = param_2;
  *(float *)(param_1 + 0x164) = _DAT_0089096c - fVar2 * _DAT_00890e98;
  if (_DAT_00890968 <= DAT_00905ce8) {
    *(float *)(param_1 + 0x160) = DAT_00905ce8;
  }
  cVar3 = FUN_006c0a20();
  if (cVar3 == '\0') {
    FUN_00768ee0(*(undefined4 *)(param_1 + 0x160),param_1 + 0x124,param_1 + 0x14c);
    iVar4 = param_1 + 0x138;
    iVar5 = param_1 + 0x110;
  }
  else {
    FUN_00768ee0(*(undefined4 *)(param_1 + 0x160),param_1 + 0xd4,param_1 + 0xfc);
    iVar4 = param_1 + 0xe8;
    iVar5 = param_1 + 0xc0;
  }
  FUN_00768ee0(*(undefined4 *)(param_1 + 0x160),iVar5,iVar4);
  FUN_00769190(*(undefined4 *)(param_1 + 0x164),local_b0,local_150);
  *(undefined4 *)(param_1 + 0x3c) = 0x40800000;
  return;
}

