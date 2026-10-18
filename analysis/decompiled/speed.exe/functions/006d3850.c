/* speed.exe 006d3850 FUN_006d3850; analysis pseudocode, not buildable source.
 * calls 006c3570 FUN_006c3570
 * calls 006d33b0 FUN_006d33b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d3850(float param_1)

{
  char unaff_SI;
  uint uVar1;
  
  DAT_0093e00c = param_1;
  DAT_008f94b0 = (_DAT_008f94a0 - _DAT_008f9490) * param_1 + _DAT_008f9490;
  DAT_008f94b4 = (_DAT_008f94a4 - _DAT_008f9494) * param_1 + _DAT_008f9494;
  DAT_008f94b8 = (_DAT_008f94a8 - _DAT_008f9498) * param_1 + _DAT_008f9498;
  DAT_008f94bc = (_DAT_008f94ac - _DAT_008f949c) * param_1 + _DAT_008f949c;
  _DAT_008f94d0 = (_DAT_008f948c - _DAT_00982c58) * param_1 + _DAT_00982c58;
  if ((DAT_00988560 & 1) == 0) {
    DAT_00988560 = DAT_00988560 | 1;
    _DAT_0098855c = DAT_008f9b0c;
  }
  if ((((DAT_008f94b0 != _DAT_0093de68) || (DAT_008f94b4 != _DAT_0093de6c)) ||
      (DAT_008f94b8 != _DAT_0093de70)) ||
     (((DAT_008f94bc != _DAT_0093de74 || (_DAT_0098855c != DAT_008f9b0c)) ||
      ((_DAT_00982c5c != DAT_008f94f0 || (DAT_00988558 == 0)))))) {
    _DAT_0098855c = DAT_008f9b0c;
    FUN_006c3570();
    DAT_00988558 = 1;
  }
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xa8,0xf);
  if (unaff_SI != '\0') {
    uVar1 = DAT_00982c60 + 1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    if (*(int *)(DAT_0093deac + 0xc) == 0) {
      FUN_006d33b0((&DAT_0093de60)[uVar1],(&DAT_0093def8)[DAT_00982c60],0xd,0,2,1,0);
      FUN_006d33b0((&DAT_0093de60)[DAT_00982c60],(&DAT_0093def8)[uVar1],0xd,0,2,1,1);
      FUN_006d33b0(DAT_00982a28,(&DAT_0093def8)[DAT_00982c60],0xd,0,2,1,2);
      DAT_00982c60 = 0xffffffff;
      return;
    }
    FUN_006d33b0((&DAT_0093de60)[uVar1],(&DAT_0093def8)[DAT_00982c60],0xd,0,2,1,0);
    FUN_006d33b0(DAT_00982a28,(&DAT_0093def8)[uVar1],0xd,0,2,1,1);
    DAT_00982c60 = 0xffffffff;
    return;
  }
  uVar1 = DAT_00982c60 + 1 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  if (*(int *)(DAT_0093deac + 0xc) == 0) {
    FUN_006d33b0((&DAT_0093de60)[uVar1],(&DAT_0093def8)[DAT_00982c60],0xd,0,2,1,0);
    FUN_006d33b0((&DAT_0093de60)[DAT_00982c60],(&DAT_0093def8)[uVar1],0xd,0,2,1,1);
    FUN_006d33b0((&DAT_0093de60)[uVar1],(&DAT_0093def8)[DAT_00982c60],0xd,0,2,1,2);
    DAT_00982c60 = uVar1;
    return;
  }
  FUN_006d33b0((&DAT_0093de60)[uVar1],(&DAT_0093def8)[DAT_00982c60],0xd,0,2,1,0);
  FUN_006d33b0((&DAT_0093de60)[DAT_00982c60],(&DAT_0093def8)[uVar1],0xd,0,2,1,1);
  return;
}

