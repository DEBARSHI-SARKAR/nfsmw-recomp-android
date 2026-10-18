/* speed.exe 007c9d30 FUN_007c9d30; analysis pseudocode, not buildable source.
 * calls 007d9df0 __sptype
 * calls 007d9fa0 __handle_qnan1
 * calls 007dac10 __ctrlfp
 * calls 007da070 __except1
 * calls 007d9e70 __decomp
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_007c9d30(double param_1)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  int local_8;
  
  uVar1 = __ctrlfp(0x133f,0xffff);
  uVar4 = (undefined4)((ulonglong)param_1 >> 0x20);
  if ((param_1._6_2_ & 0x7ff0) != 0x7ff0) {
    if (param_1 == _DAT_008942e0) {
      fVar3 = (float10)__except1(4,0x25,param_1,-_DAT_00906ec0,uVar1);
      return fVar3;
    }
    __decomp(SUB84(param_1,0),uVar4,&local_8);
    __ctrlfp(uVar1,0xffff);
    return (float10)(local_8 + -1);
  }
  iVar2 = __sptype(SUB84(param_1,0),uVar4);
  if (0 < iVar2) {
    if (iVar2 < 3) {
      __ctrlfp(uVar1,0xffff);
      return (float10)param_1;
    }
    if (iVar2 == 3) {
      fVar3 = (float10)__handle_qnan1();
      return fVar3;
    }
  }
  fVar3 = (float10)__except1(8,0x25,param_1,param_1 + _DAT_008942e8,uVar1);
  return fVar3;
}

