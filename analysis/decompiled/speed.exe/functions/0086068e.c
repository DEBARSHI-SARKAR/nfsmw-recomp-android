/* speed.exe 0086068e FUN_0086068e; analysis pseudocode, not buildable source.
 * calls 007d7cb0 ___libm_error_support
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0086068e(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  double in_XMM0_Qa;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined2 uStack_c;
  undefined6 uStack_a;
  undefined2 uStack_4;
  
  uVar1 = (ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7fff;
  if ((0x408f - uVar1 | uVar1 - 0x3c90) < 0x80000000) {
    dVar5 = _DAT_008c7c50 * in_XMM0_Qa + _DAT_008c7c30;
    dVar6 = (_UNK_008c7c58 * in_XMM0_Qa + _UNK_008c7c38) - _UNK_008c7c38;
    uVar1 = SUB84(dVar5,0);
    iVar2 = (uVar1 & 0x3f) * 0x10;
    dVar4 = (in_XMM0_Qa - _DAT_008c7c60 * (dVar5 - _DAT_008c7c30)) -
            _DAT_008c7c70 * (dVar5 - _DAT_008c7c30);
    dVar6 = (in_XMM0_Qa - _UNK_008c7c68 * dVar6) - _UNK_008c7c78 * dVar6;
    dVar5 = (double)(*(ulonglong *)(&UNK_008c7ca8 + iVar2) |
                    ((ulonglong)dVar5 & _DAT_008c7c10) + _DAT_008c7c20 << 0x2e);
    dVar4 = dVar6 * dVar6 * (_UNK_008c7c98 + _UNK_008c7c88 * dVar6) +
            dVar4 + *(double *)(&DAT_008c7ca0 + iVar2) +
            dVar4 * dVar4 * dVar4 * dVar4 * (_DAT_008c7c90 + _DAT_008c7c80 * dVar4);
    if (((int)uVar1 >> 6) + 0x37eU < 0x77d) {
      return (float10)(dVar4 * dVar5 + dVar5);
    }
    dVar6 = (double)(~_DAT_008c7c00 & (ulonglong)dVar5 |
                    (ulonglong)(((int)uVar1 >> 7) + 0x3ff) << 0x34);
    uStack_4 = (undefined2)((ulonglong)dVar6 >> 0x30);
    in_XMM0_Qa = (double)((ulonglong)((((int)uVar1 >> 6) - ((int)uVar1 >> 7)) + 0x3ff) << 0x34) *
                 (dVar6 + dVar4 * dVar6);
    if (((ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7ff0) < 0x7ff0) {
      if (((ulonglong)in_XMM0_Qa & 0x7ff0000000000000) != 0) goto LAB_00860882;
      uVar3 = 0xf;
    }
    else {
      uVar3 = 0xe;
    }
  }
  else {
    uVar1 = param_2 & 0x7fffffff;
    if (uVar1 < 0x40900000) {
      return (float10)((double)CONCAT44(param_2,param_1) + _DAT_008c80a0);
    }
    if (uVar1 < 0x7ff00000) {
      if (param_2 < 0x80000000) {
        in_XMM0_Qa = DAT_008c80d0 * DAT_008c80d0;
        uVar3 = 0xe;
      }
      else {
        in_XMM0_Qa = DAT_008c80d8 * DAT_008c80d8;
        uVar3 = 0xf;
      }
    }
    else {
      if ((uVar1 < 0x7ff00001) && (param_1 == 0)) {
        if (param_2 != 0x7ff00000) {
          return (float10)_DAT_008c80c8;
        }
        return (float10)_DAT_008c80c0;
      }
      uVar3 = 0x3ea;
    }
  }
  uStack_c = SUB82(in_XMM0_Qa,0);
  uStack_a = (undefined6)((ulonglong)in_XMM0_Qa >> 0x10);
  ___libm_error_support(&param_1,&param_1,(short)&uStack_c,uVar3);
  in_XMM0_Qa = (double)CONCAT62(uStack_a,uStack_c);
LAB_00860882:
  return (float10)in_XMM0_Qa;
}

