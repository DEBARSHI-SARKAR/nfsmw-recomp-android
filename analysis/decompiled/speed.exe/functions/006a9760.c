/* speed.exe 006a9760 FUN_006a9760; analysis pseudocode, not buildable source.
 * calls 0046f7c0 FUN_0046f7c0
 * calls 006533b0 FUN_006533b0
 * calls 00401d10 FUN_00401d10
 * calls 00401b80 FUN_00401b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006a9760(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  int *piVar6;
  float10 fVar7;
  float fStack_10;
  undefined1 auStack_c [12];
  
  if ((*(int *)(param_1 + 0x104) != 0) &&
     (((*(byte *)(param_2 + 0xc4) & 1) != 0 || (*(short *)(param_2 + 200) == 1)))) {
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    return;
  }
  fVar1 = _DAT_00890968;
  switch(*(int *)(param_1 + 0x104)) {
  case 0:
  case 3:
    fVar1 = _DAT_00890e94;
    break;
  case 1:
  case 2:
    fVar1 = _DAT_008aac1c;
  }
  fVar1 = fVar1 * *(float *)(param_2 + 0xc0) + *(float *)(param_1 + 0x108);
  bVar3 = fVar1 < _DAT_00890968;
  bVar4 = fVar1 == _DAT_00890968;
  *(float *)(param_1 + 0x108) = fVar1;
  if (bVar3 == bVar4) {
    if (_DAT_0089096c <= fVar1) {
      *(undefined4 *)(param_1 + 0x104) = 2;
      *(undefined4 *)(param_1 + 0x108) = 0x3f800000;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  if (*(int *)(param_1 + 0x104) < 2) {
    if ((*(float *)(param_2 + 0xbc) <= _DAT_008ab238) ||
       ((*(float *)(param_2 + 0x7c) <= _DAT_008933d4 &&
        (fVar7 = (float10)FUN_00401d10(*(undefined4 *)(param_2 + 0x9c)),
        fVar7 <= (float10)_DAT_008934e0)))) goto LAB_006a9968;
  }
  else {
    if (*(float *)(param_2 + 0x94) * *(float *)(param_2 + 0x9c) < _DAT_00890968) {
      fVar1 = *(float *)(param_2 + 0x9c);
      if (fVar1 < _DAT_00890968) {
        fVar1 = -fVar1;
      }
      if ((((fVar1 < _DAT_008910f0 != (fVar1 == _DAT_008910f0)) &&
           (_DAT_008ab238 < *(float *)(param_2 + 0xbc))) &&
          (fVar1 = *(float *)(param_1 + 0x140) * *(float *)(param_2 + 0x9c),
          fVar1 < _DAT_00890968 != (fVar1 == _DAT_00890968))) &&
         (fVar7 = (float10)FUN_00401d10(*(undefined4 *)(param_2 + 0x9c)),
         (float10)_DAT_008934e0 < fVar7)) {
        *(undefined4 *)(param_1 + 0x104) = 2;
        goto LAB_006a9968;
      }
    }
    if ((_DAT_008934e0 <
         *(float *)(param_2 + 0x8c) * *(float *)(param_2 + 0x9c) * *(float *)(param_2 + 0x4c)) &&
       (_DAT_008ab238 < *(float *)(param_2 + 0xbc))) {
      *(undefined4 *)(param_1 + 0x104) = 2;
      goto LAB_006a9968;
    }
    fVar1 = *(float *)(param_2 + 0x9c);
    if (fVar1 < _DAT_00890968) {
      fVar1 = -fVar1;
    }
    if (fVar1 * *(float *)(param_2 + 0x4c) <= _DAT_008934e0) {
      *(undefined4 *)(param_1 + 0x104) = 3;
      goto LAB_006a9968;
    }
  }
  *(undefined4 *)(param_1 + 0x104) = 1;
LAB_006a9968:
  if (*(float *)(param_1 + 0x108) < _DAT_00890968 == (*(float *)(param_1 + 0x108) == _DAT_00890968))
  {
    fVar1 = *(float *)(param_2 + 0x94);
    fVar5 = *(float *)(param_2 + 0x9c) * _DAT_008aabd8;
    if (((*(float *)(param_1 + 0xf8) < _DAT_00890968 !=
          (*(float *)(param_1 + 0xf8) == _DAT_00890968)) &&
        (_DAT_008abb7c < *(float *)(param_2 + 0xbc))) &&
       ((fVar7 = (float10)FUN_00401d10(fVar5), (float10)_DAT_008abb78 < fVar7 &&
        (piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x20))(), piVar6 != (int *)0x0)))
       ) {
      (**(code **)(*piVar6 + 0x4c))
                (*(float *)(param_1 + 0x108) * *(float *)(param_2 + 0xc0) * _DAT_008933d4);
    }
    if ((fVar1 * fVar5 < _DAT_00890968) && (1 < *(uint *)(param_1 + 0xfc))) {
      fVar7 = (float10)FUN_00401d10(fVar5);
      FUN_0046f7c0(&fStack_10,(float)fVar7);
      FUN_00401b80(param_2 + 0x10,
                   *(float *)(param_2 + 0xa4) * *(float *)(param_1 + 0x108) * fStack_10 * fVar1 *
                   _DAT_008abb74,auStack_c);
      (**(code **)(**(int **)(param_1 + 0xe8) + 0x94))(auStack_c);
    }
    fVar2 = _DAT_00890968;
    if ((_DAT_00890968 < fVar5 * *(float *)(param_2 + 0x8c)) &&
       (fVar2 = *(float *)(param_2 + 0x8c), fVar2 < _DAT_00890968)) {
      fVar2 = -fVar2;
    }
    if (fVar5 < _DAT_00890968) {
      fVar5 = -fVar5;
    }
    if (fVar1 < _DAT_00890968) {
      fVar1 = -fVar1;
    }
    fVar7 = (float10)FUN_006533b0((fVar2 * _DAT_00890e98 + (fVar1 + fVar5) * _DAT_008933d4) *
                                  *(float *)(param_1 + 0x108));
    *(float *)(*(int *)(param_1 + 0x1bc) + 300) = (float)fVar7;
    *(float *)(*(int *)(param_1 + 0x1c0) + 300) = (float)fVar7;
  }
  return;
}

